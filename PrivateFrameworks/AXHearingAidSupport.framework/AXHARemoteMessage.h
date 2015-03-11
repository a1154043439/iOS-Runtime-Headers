/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface AXHARemoteMessage : AXHAMessage {
    NSString *_UUID;
    id _sendCompletion;
}

@property(retain) NSString * UUID;
@property(copy) id sendCompletion;

+ (id)messageWithPayload:(id)arg1 andSendCompletion:(id)arg2;

- (id)UUID;
- (void)dealloc;
- (id)initWithPayload:(id)arg1;
- (id)sendCompletion;
- (void)setSendCompletion:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)transportPayload;

@end
