/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@class NSMutableArray, NSString, SYMessageHeader;

@interface SYBatchSyncChunk : PBCodable <NSCopying> {
    unsigned int _chunkIndex;
    SYMessageHeader *_header;
    NSMutableArray *_objects;
    NSString *_syncID;
}

@property unsigned int chunkIndex;
@property(retain) SYMessageHeader * header;
@property(retain) NSMutableArray * objects;
@property(retain) NSString * syncID;

- (void).cxx_destruct;
- (void)addObjects:(id)arg1;
- (unsigned int)chunkIndex;
- (void)clearObjects;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objects;
- (id)objectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)objectsCount;
- (bool)readFrom:(id)arg1;
- (void)setChunkIndex:(unsigned int)arg1;
- (void)setHeader:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)setSyncID:(id)arg1;
- (id)syncID;
- (void)writeTo:(id)arg1;

@end
