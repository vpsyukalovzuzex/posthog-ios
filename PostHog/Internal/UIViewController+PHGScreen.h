#include <TargetConditionals.h>

#if TARGET_OS_IOS
#import <UIKit/UIKit.h>

@interface UIViewController (PHGScreen)

+ (BOOL)isAppExtension;

+ (void)phg_swizzleViewDidAppear;
+ (UIViewController *)phg_topViewController;

@end
#endif
