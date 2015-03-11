/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPArtworkDataSource>, ML3MusicLibrary, MPMediaEntityCache, NSArray, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
    <MPArtworkDataSource> *_artworkDataSource;
    unsigned long long _backgroundTask;
    unsigned long long _backgroundTaskCount;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    MPMediaEntityCache *_entityCache;
    ML3MusicLibrary *_library;
    int _refreshState;
    NSString *_uniqueIdentifier;
    bool_hasScheduledEventPosting;
}

@property(readonly) <MPArtworkDataSource> * artworkDataSource;
@property(readonly) bool companionDeviceActiveStoreAccountIsDynamiteEligible;
@property(readonly) <MPArtworkDataSource> * completeMyCollectionArtworkDataSource;
@property(readonly) NSString * databasePath;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) MPMediaEntityCache * entityCache;
@property(readonly) unsigned long long hash;
@property(readonly) bool isGeniusEnabled;
@property(retain) ML3MusicLibrary * library;
@property(readonly) NSArray * localizedSectionIndexTitles;
@property(readonly) NSString * name;
@property(readonly) NSArray * preferredAudioLanguages;
@property(readonly) NSArray * preferredSubtitleLanguages;
@property(readonly) NSSet * propertiesToCache;
@property(readonly) bool requiresAuthentication;
@property(readonly) Class superclass;
@property(readonly) NSString * syncValidity;
@property(readonly) NSString * uniqueIdentifier;

+ (id)_unadjustedValueForItemDateWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2;

- (void).cxx_destruct;
- (id)ML3SystemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 additionalFilterPredicates:(id)arg3;
- (id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChaptersOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (void)_coalesceEvents;
- (bool)_dataProviderSupportsEntityChangeTracking;
- (void)_displayValuesDidChange:(id)arg1;
- (void)_dynamicPropertiesDidChange:(id)arg1;
- (void)_invisiblePropertiesDidChange:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (void)_libraryUIDDidChange:(id)arg1;
- (void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(id)arg4;
- (void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(id)arg5;
- (void)_postEvents;
- (bool)_removeEntitiesWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 entityClass:(Class)arg3;
- (void)_syncGenerationDidChange:(id)arg1;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)addItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (id)artworkDataSource;
- (bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4;
- (bool)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (id)collectionResultSetForQueryCriteria:(id)arg1;
- (bool)companionDeviceActiveStoreAccountIsDynamiteEligible;
- (unsigned long long)currentEntityRevision;
- (id)databasePath;
- (void)dealloc;
- (id)entityCache;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(bool)arg2 cancelBlock:(id)arg3 usingBlock:(id)arg4;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 itemBlock:(id)arg3 collectionBlock:(id)arg4;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(bool)arg2 cancelBlock:(id)arg3 usingBlock:(id)arg4;
- (bool)hasGeniusMixes;
- (bool)hasMediaOfType:(unsigned long long)arg1;
- (bool)hasUbiquitousBookmarkableItems;
- (id)initWithLibrary:(id)arg1;
- (bool)isCurrentThreadInTransaction;
- (bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (id)lastModifiedDate;
- (id)library;
- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(id)arg4;
- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id)arg2;
- (void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;
- (void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)localizedSectionIndexTitles;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (id)name;
- (void)performBackgroundTaskWithBlock:(id)arg1;
- (void)performReadTransactionWithBlock:(id)arg1;
- (bool)performTransactionWithBlock:(id)arg1;
- (bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)playlistGeneration;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsWithIdentifiers:(long long*)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (bool)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 hideFromPurchaseHistory:(bool)arg3;
- (bool)removePlaylistWithIdentifier:(long long)arg1;
- (void)setLibrary:(id)arg1;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(id)arg5;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (unsigned long long)syncGenerationID;
- (id)syncValidity;
- (id)systemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2;
- (id)uniqueIdentifier;
- (id)valueForDatabaseProperty:(id)arg1;
- (bool)writable;

@end
