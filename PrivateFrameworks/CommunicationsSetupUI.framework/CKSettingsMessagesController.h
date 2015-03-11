/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSString;

@interface CKSettingsMessagesController : CNFRegListController <CNFRegWizardControllerDelegate> {
    int _profileToken;
    bool_showingChildViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)currentKeepMessages;
+ (bool)currentMessageAutoKeepForType:(int)arg1;
+ (int)currentMessageAutoKeepOptionForType:(int)arg1;

- (bool)_allAccountsAreDeactivated;
- (bool)_isMadridAccountOperational;
- (bool)_isMadridSwitchOn;
- (bool)_isRaiseGestureSupported;
- (bool)_isSMSDevice;
- (id)_madridSettingsController;
- (void)_setupAccountHandlers;
- (void)_setupAccountHandlersForDisabling;
- (void)_showMadridSetupIfNecessary:(bool)arg1;
- (void)_showMadridSetupIfNecessary;
- (id)_smsRelayDevicesController;
- (void)_startListeningForProfileChanges;
- (void)_stopListeningForProfileChanges;
- (id)_switchFooterText:(bool*)arg1;
- (void)_updateSwitch;
- (void)_updateSwitchDelayed;
- (void)_updateUIWithError:(id)arg1;
- (id)audioMessageSettingsSpecifierIdentifiers;
- (id)blacklistSettingsSpecifierIdentifiers;
- (id)bundle;
- (id)characterCountSpecifierIdentifiers;
- (id)controllerForSpecifier:(id)arg1;
- (void)dealloc;
- (id)deliveryReceiptSpecifierIdentifiers;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(bool)arg2;
- (id)genericSettingsSpecifierIdentifiers;
- (id)getAccountSummaryForSpecifier:(id)arg1;
- (id)getAudioMessageAutoKeep:(id)arg1;
- (id)getKeepMessages:(id)arg1;
- (id)getRaiseToListenEnabled:(id)arg1;
- (id)getSMSRelayDevicesSummary:(id)arg1;
- (id)getVideoMessageAutoKeep:(id)arg1;
- (id)init;
- (id)isDeliveryReportsEnabled:(id)arg1;
- (id)isMMSEnabled:(id)arg1;
- (id)isMadridEnabled:(id)arg1;
- (id)logName;
- (id)madridAccountsSpecifierIdentifiers;
- (id)madridSigninButtonTextForSpecifier:(id)arg1;
- (id)madridSigninSpecifiers;
- (void)madridSigninTappedWithSpecifier:(id)arg1;
- (id)madridSwitchSpecifierIdentifiers;
- (void)newCarrierNotification;
- (id)raiseToListenSpecifierIdentifiers;
- (id)readReceiptSpecifierIdentifiers;
- (id)sendAsSMSIdentifiers;
- (void)setAudioMessageAutoKeep:(id)arg1 specifier:(id)arg2;
- (void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setKeepMessages:(id)arg1 specifier:(id)arg2;
- (void)setMMSEnabled:(id)arg1 specifier:(id)arg2;
- (void)setMadridEnabled:(id)arg1 specifier:(id)arg2;
- (void)setRaiseToListenEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSpecifierLoading:(id)arg1 loading:(bool)arg2 animated:(bool)arg3;
- (void)setVideoMessageAutoKeep:(id)arg1 specifier:(id)arg2;
- (void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)shouldShowAudioMessageSettings;
- (bool)shouldShowBlacklistSettings;
- (bool)shouldShowCharacterCount;
- (bool)shouldShowDeliveryReceipts;
- (bool)shouldShowGenericSettings;
- (bool)shouldShowMadridAccounts;
- (bool)shouldShowMadridSignin;
- (bool)shouldShowMadridSwitch;
- (bool)shouldShowRaiseToListenSwitch;
- (bool)shouldShowReadReceipts;
- (bool)shouldShowSMSRelaySettings;
- (bool)shouldShowSendAsSMS;
- (bool)shouldShowVideoMessageSettings;
- (id)smsRelaySettingsSpecifierIdentifiers;
- (id)specifiers;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)videoMessageSettingsSpecifierIdentifiers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsWiFiChooser;
- (id)willSendGroupMMS:(id)arg1;

@end
