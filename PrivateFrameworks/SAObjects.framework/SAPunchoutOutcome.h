/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDictionary, NSString;

@interface SAPunchoutOutcome : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * originalCommandId;
@property(copy) NSDictionary * outcomes;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)punchoutOutcome;
+ (id)punchoutOutcomeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalCommandId;
- (id)outcomes;
- (void)setOriginalCommandId:(id)arg1;
- (void)setOutcomes:(id)arg1;

@end
