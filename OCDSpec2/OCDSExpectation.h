#import <Foundation/Foundation.h>

#import <OCDSpec2/OCDSFailureReporter.h>

@interface OCDSExpectation : NSObject

@property (readwrite, strong) NSString *file;
@property (readwrite) int line;
@property (readwrite, weak) id<OCDSFailureReporter> failureReporter;

+ (id) expectationInFile:(char*)someFile
                    line:(int)someLine
         failureReporter:(id<OCDSFailureReporter>)reporter;

- (void) reportFailure:(NSString*)message;
- (void) reportWarning:(NSString*)message;

@end
