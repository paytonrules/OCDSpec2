#import <Foundation/Foundation.h>

@interface OCDSDescription : NSObject

@property (readwrite, strong) NSArray *subDescriptions;
@property (readwrite, strong) NSString* name;
@property (readwrite, strong) NSArray *examples;

@property (readwrite, strong) void (^beforeEachBlock)(void);
@property (readwrite, strong) void (^afterEachBlock)(void);

- (void) runAllExamplesWithBeforeBlocks:(NSArray*)beforeBlocks afterBlocks:(NSArray*)afterBlocks;

@end
