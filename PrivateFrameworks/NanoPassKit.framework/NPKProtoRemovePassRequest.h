/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NPKProtoCatalog, NPKProtoHash, NSString;

@interface NPKProtoRemovePassRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int lastKnownResyncID : 1; 
        unsigned int resyncID : 1; 
    NPKProtoCatalog *_catalog;
    } _has;
    unsigned int _lastKnownResyncID;
    NPKProtoHash *_libraryHash;
    NSString *_passID;
    unsigned int _resyncID;
}

@property(retain) NPKProtoCatalog * catalog;
@property(readonly) bool hasCatalog;
@property bool hasLastKnownResyncID;
@property(readonly) bool hasLibraryHash;
@property bool hasResyncID;
@property unsigned int lastKnownResyncID;
@property(retain) NPKProtoHash * libraryHash;
@property(retain) NSString * passID;
@property unsigned int resyncID;

- (void).cxx_destruct;
- (id)catalog;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCatalog;
- (bool)hasLastKnownResyncID;
- (bool)hasLibraryHash;
- (bool)hasResyncID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastKnownResyncID;
- (id)libraryHash;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (bool)readFrom:(id)arg1;
- (unsigned int)resyncID;
- (void)setCatalog:(id)arg1;
- (void)setHasLastKnownResyncID:(bool)arg1;
- (void)setHasResyncID:(bool)arg1;
- (void)setLastKnownResyncID:(unsigned int)arg1;
- (void)setLibraryHash:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)setResyncID:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
