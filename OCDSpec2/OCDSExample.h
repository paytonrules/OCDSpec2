#import <Foundation/Foundation.h>

@interface OCDSExample : NSObject

@property (readwrite, strong) NSString* name;
@property (readwrite, strong) void(^block)(void);

@end
