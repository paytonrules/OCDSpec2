#import <Foundation/Foundation.h>

#import <OCDSpec2/OCDSExpectation.h>

@interface OCDSBlockExpectation : OCDSExpectation

@property (readwrite, weak) void(^block)(void);

- (OCDSBlockExpectation*(^)(void(^)(void))) withBlock;

- (void) toNotRaiseException;

@end

#define ExpectBlock [[OCDSBlockExpectation expectationInFile:__FILE__ line:__LINE__ failureReporter:self] withBlock]
