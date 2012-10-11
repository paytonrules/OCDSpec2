#import "OCDSArrayExpectation.h"

@implementation OCDSArrayExpectation

- (OCDSArrayExpectation*(^)(NSArray*)) withArray {
  return ^OCDSArrayExpectation*(NSArray *a){
    self.array = a;
    return self;
  };
}

- (void) toContain:(id)obj {
  if (![self.array containsObject: obj]) {
    [self reportFailure:[NSString stringWithFormat:@"Want array %@ to contain %@",
                         self.array,
                         obj]];
  }
}

@end
