/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@class AFMessage;

@interface STSendDraftMessageRequest : AFSiriRequest {
    AFMessage *_message;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMessage:(id)arg1;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;

@end
