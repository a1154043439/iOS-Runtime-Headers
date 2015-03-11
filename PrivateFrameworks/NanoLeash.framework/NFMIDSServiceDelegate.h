/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

@class NSMutableDictionary, NSString;

@interface NFMIDSServiceDelegate : NSObject <IDSServiceDelegate> {
    NSMutableDictionary *_inflightMessages;
    NSMutableDictionary *_pendingMessages;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableDictionary * inflightMessages;
@property(retain) NSMutableDictionary * pendingMessages;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enqueueMessage:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(bool)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7 idsIdentifier:(id)arg8;
- (id)_sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(bool)arg5;
- (bool)connectionStateWithDevices:(id)arg1 accounts:(id)arg2;
- (id)inflightMessages;
- (id)init;
- (id)pendingMessages;
- (id)sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(bool)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setInflightMessages:(id)arg1;
- (void)setPendingMessages:(id)arg1;

@end
