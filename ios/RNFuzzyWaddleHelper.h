#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>


@interface RNFuzzyWaddleHelper : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)vanguardLaw_shared;
- (BOOL)vanguardLaw_tryThisWay:(void (^)(void))changeVcBlock;
- (UIInterfaceOrientationMask)vanguardLaw_getOrientation;
- (UIViewController *)vanguardLaw_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end
