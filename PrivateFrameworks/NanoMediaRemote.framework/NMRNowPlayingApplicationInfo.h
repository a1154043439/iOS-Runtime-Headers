/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSString, _NMRNowPlayingApplicationStateProtobuf;

@interface NMRNowPlayingApplicationInfo : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRNowPlayingApplicationStateProtobuf *_protobuf;
}

@property(copy) NSString * bundleIdentifier;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * localizedDisplayName;
@property unsigned int playbackState;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)init;
- (id)initWithProtobufData:(id)arg1;
- (id)localizedDisplayName;
- (unsigned int)playbackState;
- (id)protobufData;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;

@end
