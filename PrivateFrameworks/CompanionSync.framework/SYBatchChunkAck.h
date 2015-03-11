/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYBatchChunkAck : PBCodable <NSCopying> {
    unsigned int _chunkIndex;
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSString *_syncID;
}

@property unsigned int chunkIndex;
@property(retain) SYErrorInfo * error;
@property(readonly) bool hasError;
@property(retain) SYMessageHeader * header;
@property(retain) NSString * syncID;

- (void).cxx_destruct;
- (unsigned int)chunkIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChunkIndex:(unsigned int)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setSyncID:(id)arg1;
- (id)syncID;
- (void)writeTo:(id)arg1;

@end
