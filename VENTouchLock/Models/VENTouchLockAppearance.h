#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface VENTouchLockAppearance : NSObject

/**-----------------------------------------------------------------------------
 * @description Passcode View Controller Preferences
 * -----------------------------------------------------------------------------
 */
@property (strong, nonatomic) UIColor *passcodeViewControllerBackgroundColor;


/**-----------------------------------------------------------------------------
 * @description Create Passcode View Controller Preferences
 * -----------------------------------------------------------------------------
 */
@property (strong, nonatomic) NSString *createPasscodeInitialLabelText;
@property (strong, nonatomic) NSString *createPasscodeConfirmLabelText;
@property (strong, nonatomic) NSString *createPasscodeMismatchedLabelText;
@property (strong, nonatomic) NSString *createPasscodeViewControllerTitle;


/**-----------------------------------------------------------------------------
 * @description Enter Passcode View Controller Preferences
 * -----------------------------------------------------------------------------
 */
@property (strong, nonatomic) NSString *enterPasscodeInitialLabelText;
@property (strong, nonatomic) NSString *enterPasscodeIncorrectLabelText;
@property (strong, nonatomic) NSString *enterPasscodeViewControllerTitle;


/**-----------------------------------------------------------------------------
 * @description Splash Preferences
 * -----------------------------------------------------------------------------
 */
@property (assign, nonatomic) BOOL splashShouldEmbedInNavigationController;

@end