/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSMutableDictionary, NSString;

@interface BBObserverBulletinAttachmentInfo : NSObject {
    NSMutableDictionary *_imageSizePairs;
    NSString *_imagesRecordID;
    NSString *_sizesRecordID;
    bool_imagesFetched;
    bool_sizesFetched;
}

@property bool imagesFetched;
@property(copy) NSString * imagesRecordID;
@property bool sizesFetched;
@property(copy) NSString * sizesRecordID;

- (id)_pairForKey:(id)arg1 create:(bool)arg2;
- (void)dealloc;
- (id)imageForKey:(id)arg1;
- (bool)imagesFetched;
- (id)imagesRecordID;
- (id)init;
- (bool)isImagesFetchedForRecordID:(id)arg1;
- (bool)isSizesFetchedForRecordID:(id)arg1;
- (void)noteImagesFetchedForRecordID:(id)arg1;
- (void)noteSizesFetchedForRecordID:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setImagesFetched:(bool)arg1;
- (void)setImagesRecordID:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)setSizesFetched:(bool)arg1;
- (void)setSizesRecordID:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForKey:(id)arg1;
- (bool)sizesFetched;
- (id)sizesRecordID;

@end
