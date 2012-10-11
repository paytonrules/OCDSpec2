#import <Foundation/Foundation.h>

#import "OCDSFailureReporter.h"

@interface OCDSFakeFailureReporter : NSObject <OCDSFailureReporter>

@property (weak) NSArray* failureReports;
@property (weak) NSArray* warningReports;

@end
