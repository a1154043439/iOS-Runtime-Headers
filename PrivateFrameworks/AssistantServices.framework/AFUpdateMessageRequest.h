/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFMessage;

@interface AFUpdateMessageRequest : AFSiriRequest {
    AFMessage *_message;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMessage:(id)arg1;
- (id)createResponseWithMessageIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;

@end
