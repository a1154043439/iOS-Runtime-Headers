/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@class <SUICSiriLanguageDelegate>, NSString;

@interface SUICSiriLanguage : NSObject {
    <SUICSiriLanguageDelegate> *_delegate;
    NSString *_spokenLanguageCode;
    bool_setupAssistantNeedsToRunAvailable;
    bool_setupAssistantNeedsToRunChecked;
}

@property(getter=_delegate,readonly) <SUICSiriLanguageDelegate> * delegate;
@property(getter=_setupAssistantNeedsToRunAvailable) bool setupAssistantNeedsToRunAvailable;
@property bool setupAssistantNeedsToRunChecked;
@property(copy) NSString * spokenLanguageCode;

- (void).cxx_destruct;
- (id)_computeSpokenLanguageCode;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_delegate;
- (void)_setSpokenLanguageCode:(id)arg1;
- (bool)_setupAssistantNeedsToRunAvailable;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_updateSpokenLanguageCode;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setSetupAssistantNeedsToRunAvailable:(bool)arg1;
- (void)setSetupAssistantNeedsToRunChecked:(bool)arg1;
- (bool)setupAssistantNeedsToRunChecked;
- (id)spokenLanguageCode;

@end
