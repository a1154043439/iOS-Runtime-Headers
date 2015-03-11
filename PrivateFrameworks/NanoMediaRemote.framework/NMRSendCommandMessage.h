/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSDate, NSDictionary, NSString, _NMRSendCommandMessageProtobuf;

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRSendCommandMessageProtobuf *_protobuf;
}

@property(readonly) unsigned int command;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSDictionary * options;
@property(readonly) NSDate * serializationDate;
@property(readonly) Class superclass;

+ (id)messageWithCommand:(unsigned int)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (unsigned int)command;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2;
- (id)initWithProtobufData:(id)arg1;
- (id)options;
- (id)protobufData;
- (id)serializationDate;

@end
