/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class BLTPBBulletin;

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int date : 1; 
        unsigned int updateType : 1; 
        unsigned int shouldPlayLightsAndSirens : 1; 
    BLTPBBulletin *_bulletin;
    double _date;
    } _has;
    unsigned int _updateType;
    bool_shouldPlayLightsAndSirens;
}

@property(retain) BLTPBBulletin * bulletin;
@property double date;
@property(readonly) bool hasBulletin;
@property bool hasDate;
@property bool hasShouldPlayLightsAndSirens;
@property bool hasUpdateType;
@property bool shouldPlayLightsAndSirens;
@property unsigned int updateType;

- (void).cxx_destruct;
- (id)bulletin;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBulletin;
- (bool)hasDate;
- (bool)hasShouldPlayLightsAndSirens;
- (bool)hasUpdateType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasShouldPlayLightsAndSirens:(bool)arg1;
- (void)setHasUpdateType:(bool)arg1;
- (void)setShouldPlayLightsAndSirens:(bool)arg1;
- (void)setUpdateType:(unsigned int)arg1;
- (bool)shouldPlayLightsAndSirens;
- (unsigned int)updateType;
- (void)writeTo:(id)arg1;

@end
