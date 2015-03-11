/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class NSString;

@interface BLTPBHandleAcknowledgeActionRequest : PBRequest <NSCopying> {
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

@property(readonly) bool hasPublisherBulletinID;
@property(readonly) bool hasRecordID;
@property(readonly) bool hasSectionID;
@property(retain) NSString * publisherBulletinID;
@property(retain) NSString * recordID;
@property(retain) NSString * sectionID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPublisherBulletinID;
- (bool)hasRecordID;
- (bool)hasSectionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publisherBulletinID;
- (bool)readFrom:(id)arg1;
- (id)recordID;
- (id)sectionID;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
