/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@class NSData, NSString;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {
    NSData *_artworkData;
    NSString *_artworkIdentifier;
    bool_keepAlive;
}

@property(retain) NSData * artworkData;
@property(retain) NSString * artworkIdentifier;

- (void).cxx_destruct;
- (id)artworkData;
- (id)artworkIdentifier;
- (bool)beginContentAccess;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (bool)isContentDiscarded;
- (void)setArtworkData:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;

@end
