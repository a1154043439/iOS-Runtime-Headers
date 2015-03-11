/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAStructuredDictationFailed : SABaseClientBoundCommand {
}

@property(copy) NSString * dialogIdentifier;
@property long long errorCode;
@property(copy) NSString * recognition;
@property(copy) NSString * userFacingReasonDescription;
@property(copy) NSString * userFacingReasonTitle;

+ (id)structuredDictationFailed;
+ (id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogIdentifier;
- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)recognition;
- (bool)requiresResponse;
- (void)setDialogIdentifier:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setRecognition:(id)arg1;
- (void)setUserFacingReasonDescription:(id)arg1;
- (void)setUserFacingReasonTitle:(id)arg1;
- (id)userFacingReasonDescription;
- (id)userFacingReasonTitle;

@end
