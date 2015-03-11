/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMLockdownManager : NSObject {
    unsigned long long _state;
    bool_hasShownMismatchedSIM;
    bool_hasShownWaitingAlertThisSession;
    bool_isCarrierInstall;
    bool_isInternalInstall;
    bool_isNonUIInstall;
    bool_isVendorInstall;
    bool_settingUpActivationState;
}

@property bool _hasShownMismatchedSIM;
@property bool _hasShownWaitingAlertThisSession;
@property bool _isCarrierInstall;
@property bool _isInternalInstall;
@property bool _isNonUIInstall;
@property bool _isVendorInstall;
@property bool _settingUpActivationState;
@property(setter=_setState:) unsigned long long _state;
@property(readonly) bool isActivated;
@property(readonly) bool isCarrierInstall;
@property(readonly) bool isExpired;
@property(readonly) bool isInternalInstall;
@property(readonly) bool isNonUIInstall;
@property(readonly) bool isVendorInstall;
@property(readonly) NSString * uniqueDeviceIdentifier;

+ (id)sharedInstance;

- (void)_calculateInstallType;
- (bool)_hasShownMismatchedSIM;
- (bool)_hasShownWaitingAlertThisSession;
- (bool)_isCarrierInstall;
- (bool)_isInternalInstall;
- (bool)_isNonUIInstall;
- (bool)_isVendorInstall;
- (void)_resetActivationState;
- (void)_setState:(unsigned long long)arg1;
- (bool)_settingUpActivationState;
- (void)_setupActivationState;
- (unsigned long long)_state;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isActivated;
- (bool)isCarrierInstall;
- (bool)isExpired;
- (bool)isInternalInstall;
- (bool)isNonUIInstall;
- (bool)isVendorInstall;
- (long long)lockdownState;
- (void)set_hasShownMismatchedSIM:(bool)arg1;
- (void)set_hasShownWaitingAlertThisSession:(bool)arg1;
- (void)set_isCarrierInstall:(bool)arg1;
- (void)set_isInternalInstall:(bool)arg1;
- (void)set_isNonUIInstall:(bool)arg1;
- (void)set_isVendorInstall:(bool)arg1;
- (void)set_settingUpActivationState:(bool)arg1;
- (id)uniqueDeviceIdentifier;

@end
