#import <Foundation/Foundation.h>

@interface OCDSFakeFailure : NSObject

@property (weak) NSString* report;
@property (weak) NSString* inFile;
@property int atLine;

@end
