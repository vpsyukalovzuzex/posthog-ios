#import <Foundation/Foundation.h>

#if TARGET_OS_IOS
#import <UIKit/UIKit.h>
#endif

@interface PHGApplicationUtils : NSObject

+ (instancetype _Nonnull) sharedInstance;
#if TARGET_OS_IOS
@property (nonatomic, readonly, nullable) UIApplication *sharedApplication;
@property (nonatomic, readonly, nullable) NSArray<UIWindow *> *windows;
#endif


@end
