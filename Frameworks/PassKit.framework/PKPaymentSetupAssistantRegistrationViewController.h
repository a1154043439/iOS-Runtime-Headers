/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIButton;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentAddCardViewController {
    UIButton *_skipButton;
}

+ (bool)setupAssistantNeedsToRun;
+ (bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;

- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)aboutButtonTouched:(id)arg1;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (void)preflightWithCompletion:(id)arg1;
- (void)skip:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
