/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCRegularIPCsClient : BRCXPCClient <BRProtocol> {
}

- (void)addExternalDocumentReferenceTo:(id)arg1 forPid:(int)arg2 inContainer:(id)arg3 underParent:(id)arg4 reply:(id)arg5;
- (oneway void)bundleDidAccessExternalDocument:(id)arg1;
- (oneway void)checkinAskClientIfUsingUbiquity:(bool)arg1;
- (void)computePurgableSpaceWithUrgency:(int)arg1 reply:(id)arg2;
- (void)currentAccountCreateWithID:(id)arg1 reply:(id)arg2;
- (void)currentAccountLogoutWithReply:(id)arg1;
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 reply:(id)arg3;
- (void)evictItemAtURL:(id)arg1 reply:(id)arg2;
- (void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(id)arg4;
- (void)forceSyncContainerID:(id)arg1 reply:(id)arg2;
- (void)gatherInformationForPath:(id)arg1 reply:(id)arg2;
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(id)arg2;
- (void)getApplicationStatus:(id)arg1;
- (void)getApplicationStatusWithPID:(int)arg1 reply:(id)arg2;
- (void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(id)arg3;
- (void)getBackReferencingContainerIDsForURL:(id)arg1 reply:(id)arg2;
- (void)getBookmarkDataForURL:(id)arg1 reply:(id)arg2;
- (void)getContainerForURL:(id)arg1 reply:(id)arg2;
- (void)getContainerLastServerUpdateWithID:(id)arg1 reply:(id)arg2;
- (void)getContainerStatusWithID:(id)arg1 reply:(id)arg2;
- (void)getContainerURLForID:(id)arg1 forPid:(int)arg2 reply:(id)arg3;
- (void)getContainerURLForID:(id)arg1 reply:(id)arg2;
- (void)getContainersByID:(id)arg1;
- (void)getContainersNeedingUpload:(id)arg1;
- (void)getIsContainerWithIDOverQuota:(id)arg1 reply:(id)arg2;
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(id)arg2;
- (void)getMigrationStatusForPrimaryiCloudAccount:(id)arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 reply:(id)arg3;
- (void)getNotificationInfoAtURL:(id)arg1 reply:(id)arg2;
- (void)getPublishedURLForItemAtURL:(id)arg1 forStreaming:(bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(id)arg4;
- (void)getTotalApplicationDocumentUsageWithReply:(id)arg1;
- (void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(id)arg2;
- (void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(id)arg2;
- (void)jetsamCloudDocsAppsWithReply:(id)arg1;
- (oneway void)log:(const char *)arg1 function:(const char *)arg2 source:(const char *)arg3 line:(int)arg4 message:(id)arg5;
- (void)performSelfCheck:(id)arg1 reply:(id)arg2;
- (void)printStatus:(id)arg1 reply:(id)arg2;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(id)arg3;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(id)arg3;
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(id)arg2;
- (void)resetBudgets:(id)arg1 reply:(id)arg2;
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(id)arg2;
- (void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(id)arg3;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldNotify:(bool)arg3 reply:(id)arg4;
- (void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(bool)arg2 readonly:(bool)arg3 reply:(id)arg4;
- (void)setupInstanceWithDict:(id)arg1 reply:(id)arg2;
- (void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 reply:(id)arg3;
- (void)thumbnailChangedForItemAtURL:(id)arg1 reply:(id)arg2;
- (oneway void)updateContainerMetadataForID:(id)arg1 bundleID:(id)arg2;
- (void)waitForFileSystemChangeProcessingWithReply:(id)arg1;

@end
