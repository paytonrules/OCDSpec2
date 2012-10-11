#import "OCDSStringExpectation.h"

@implementation OCDSStringExpectation

- (OCDSStringExpectation*(^)(NSString*)) withString {
  return ^OCDSStringExpectation*(NSString *str){
    self.string = str;
    return self;
  };
}

- (void) toContain:(NSString*)substring {
  if ([self.string rangeOfString:substring].location == NSNotFound) {
    [self reportFailure:[NSString stringWithFormat:@"Want \"*%@*\", got \"%@\"",
                         substring,
                         self.string]];
  }
}

- (void) toStartWith:(NSString*)substring {
    if ([self.string rangeOfString:substring].location != 0) {
        [self reportFailure:[NSString stringWithFormat:@"Want \"%@*\", got \"%@\"",
                             substring,
                             self.string]];
    }
}

@end
