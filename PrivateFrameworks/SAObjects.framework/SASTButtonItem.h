/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SASTTemplateAction>, NSString, SAUIDecoratedText, SAUILocalImageResource;

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem> {
}

@property(retain) <SASTTemplateAction> * action;
@property bool centered;
@property(copy,readonly) NSString * debugDescription;
@property(retain) SAUIDecoratedText * decoratedLabel;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) SAUILocalImageResource * localImageResource;
@property(readonly) Class superclass;

+ (id)buttonItem;
+ (id)buttonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (bool)centered;
- (id)decoratedLabel;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)localImageResource;
- (void)setAction:(id)arg1;
- (void)setCentered:(bool)arg1;
- (void)setDecoratedLabel:(id)arg1;
- (void)setLocalImageResource:(id)arg1;

@end
