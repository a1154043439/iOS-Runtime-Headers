/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPaymentVerificationEntryDelegate>, <PKPaymentVerificationPresentationDelegate>, NSNumber, NSString, PKPassView, PKPaymentPass, PKPaymentWebService, PKVerificationRequestRecord;

@interface PKPaymentVerificationPresentationController : NSObject <SKStoreProductViewControllerDelegate> {
    <PKPaymentVerificationPresentationDelegate> *_delegate;
    <PKPaymentVerificationEntryDelegate> *_entryDelegate;
    NSNumber *_inStoreBankAppStoreID;
    NSString *_inStoreBankAppTitle;
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    PKPaymentPass *_pass;
    PKPassView *_passView;
    PKVerificationRequestRecord *_requestRecord;
    long long _setupContext;
    PKPaymentWebService *_webService;
    bool_bankAppNotFound;
}

@property(readonly) NSString * alternateMethodButtonTitle;
@property(readonly) NSString * completeVerificationButtonTitle;
@property(copy,readonly) NSString * debugDescription;
@property <PKPaymentVerificationPresentationDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property <PKPaymentVerificationEntryDelegate> * entryDelegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSString * verificationBodyString;
@property(readonly) NSString * verificationTitleString;

- (id)_bankAppName;
- (id)_bankAppStoreIDs;
- (unsigned long long)_channelType;
- (void)_completeVerificationUsingBankApp;
- (void)_completeVerificationUsingCodeEntry;
- (void)_completeVerificationUsingOutboundCall;
- (void)_didChangePresentation;
- (bool)_isBankAppInstalled;
- (void)_launchBankApp;
- (id)_outboundCallPhoneNumber;
- (void)_performStoreLookupForBankApp;
- (id)_textMessageFormattedPhoneNumber:(id)arg1;
- (id)_voiceCallFormattedPhoneNumber:(id)arg1;
- (id)alternateMethodButtonTitle;
- (void)bodyLabelPressed:(id)arg1;
- (void)completeVerification:(id)arg1;
- (id)completeVerificationButtonTitle;
- (void)dealloc;
- (id)delegate;
- (id)entryDelegate;
- (id)initWithPaymentPass:(id)arg1 passView:(id)arg2 webService:(id)arg3 context:(long long)arg4 delegate:(id)arg5;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)selectOtherVerificationMethod:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntryDelegate:(id)arg1;
- (void)setRequestRecord:(id)arg1;
- (void)sharedPaymentServiceChanged:(id)arg1;
- (id)verificationBodyString;
- (id)verificationTitleString;

@end
