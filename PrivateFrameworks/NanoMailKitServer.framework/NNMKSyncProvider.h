/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class <NNMKSyncProviderDelegate>, BLTPingSubscriber, NNMKAccountsSyncServiceServer, NNMKDeviceSyncRegistry, NNMKFetchesSyncServiceServer, NNMKMessageContentSyncServiceServer, NNMKMessagesSyncServiceServer, NNMKPairedDeviceInfo, NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURL, PSYSyncCoordinator;

@interface NNMKSyncProvider : NNMKSyncEndpoint <NNMKMessagesSyncServiceServerDelegate, NNMKMessageContentSyncServiceServerDelegate, NNMKAccountsSyncServiceServerDelegate, NNMKFetchesSyncServiceServerDelegate, PSYSyncCoordinatorDelegate> {
    NNMKAccountsSyncServiceServer *_accountsSyncService;
    NNMKMessageContentSyncServiceServer *_contentSyncService;
    <NNMKSyncProviderDelegate> *_delegate;
    NNMKFetchesSyncServiceServer *_fetchesSyncService;
    PSYSyncCoordinator *_initialSyncCoordinator;
    NSMutableSet *_initialSyncMessageIdsOfContentToAck;
    NSMutableSet *_initialSyncMessageIdsToSyncContent;
    unsigned long long _initialSyncMessagesCount;
    double _initialSyncProgress;
    unsigned long long _initialSyncResendInterval;
    NSMutableSet *_messageIdsToIgnoreStatusUpdates;
    NNMKMessagesSyncServiceServer *_messagesSyncService;
    BLTPingSubscriber *_notificationsPingSubscriber;
    NNMKDeviceSyncRegistry *_pairedDeviceRegistry;
    NSDate *_pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
    NSString *_pendingMoreMessagesForConversationIdRequestConversationId;
    NSObject<OS_dispatch_queue> *_providerQueue;
    bool_isFirstMessagesRequestPending;
    bool_messagesQueryAvailable;
    bool_messagesVerificationTriggered;
    bool_trackingInitialSync;
}

@property(retain) NNMKAccountsSyncServiceServer * accountsSyncService;
@property(retain) NNMKMessageContentSyncServiceServer * contentSyncService;
@property(copy,readonly) NSString * debugDescription;
@property <NNMKSyncProviderDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) NNMKFetchesSyncServiceServer * fetchesSyncService;
@property(readonly) unsigned long long hash;
@property(retain) PSYSyncCoordinator * initialSyncCoordinator;
@property(retain) NSMutableSet * initialSyncMessageIdsOfContentToAck;
@property(retain) NSMutableSet * initialSyncMessageIdsToSyncContent;
@property unsigned long long initialSyncMessagesCount;
@property double initialSyncProgress;
@property unsigned long long initialSyncResendInterval;
@property bool isFirstMessagesRequestPending;
@property(retain) NSMutableSet * messageIdsToIgnoreStatusUpdates;
@property bool messagesQueryAvailable;
@property(readonly) bool messagesSyncActive;
@property(retain) NNMKMessagesSyncServiceServer * messagesSyncService;
@property bool messagesVerificationTriggered;
@property(retain) BLTPingSubscriber * notificationsPingSubscriber;
@property(readonly) bool organizeByThread;
@property(readonly) NNMKPairedDeviceInfo * pairedDeviceInfo;
@property(retain) NNMKDeviceSyncRegistry * pairedDeviceRegistry;
@property(retain) NSDate * pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
@property(retain) NSString * pendingMoreMessagesForConversationIdRequestConversationId;
@property(retain) NSObject<OS_dispatch_queue> * providerQueue;
@property(readonly) Class superclass;
@property(readonly) NSString * syncedMailboxAccountId;
@property(readonly) NSString * syncedMailboxCustomName;
@property(readonly) unsigned long long syncedMailboxType;
@property(readonly) NSURL * syncedMailboxURL;
@property bool trackingInitialSync;

- (void).cxx_destruct;
- (void)_addMessages:(id)arg1 messagesAreNew:(bool)arg2;
- (id)_bbSubsectionIdsForMessage:(id)arg1;
- (bool)_currentSyncedMailboxAddsDeletesMessagesByStatusUpdates;
- (void)_executePendingContentRequests;
- (void)_executePendingRequests;
- (void)_executePendingResends;
- (id)_filterOutMessagesReceived:(id)arg1 byAlreadySynced:(bool)arg2 bySyncedMailboxType:(bool)arg3;
- (id)_filterOutMessagesReceivedByDateReceived:(id)arg1;
- (void)_handleDidFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)_handleDidPairWithNewDevice;
- (void)_handleDidSendProtobufSuccessfullyWithIDSIdentifier:(id)arg1;
- (void)_handleDidUnpair;
- (void)_handleInitialSyncCompleted;
- (void)_handleMessageCompletelySynced:(id)arg1;
- (void)_incrementInitialSyncProgressBy:(double)arg1;
- (bool)_isDateReceivedOkForCurrentSyncedMailbox:(id)arg1;
- (bool)_isMessageOkForCurrentSyncedMailbox:(id)arg1;
- (bool)_isMessageStatusOkForCurrentSyncedMailbox:(unsigned long long)arg1;
- (void)_markConversationWithId:(id)arg1 forNotify:(bool)arg2;
- (bool)_messageHasContentCompletelySynced:(id)arg1;
- (id)_messageProtobufForMessage:(id)arg1;
- (void)_notifyClientNotifyInitialContentSyncCompleted;
- (void)_notifyDelegateThatMessagesStatusWereUpdated:(id)arg1;
- (void)_requestDelegateForAccounts;
- (void)_requestDelegateForContentForMessageIds:(id)arg1 highPriority:(bool)arg2;
- (void)_requestDelegateForContentForMessageWithId:(id)arg1 highPriority:(bool)arg2;
- (void)_requestDelegateForFetchManualForConversationId:(id)arg1;
- (void)_requestDelegateForFetchResume;
- (void)_requestDelegateForFirstMessages;
- (void)_requestDelegateForMoreMessages;
- (void)_requestDelegateForMoreMessagesBeforeDateReceived:(id)arg1 forConversationWithId:(id)arg2;
- (void)_requestDelegateForResendingAccountWithId:(id)arg1;
- (void)_requestDelegateForResendingMessageWithId:(id)arg1;
- (void)_requestDelegateForVerificationOfMessagesAndIds:(id)arg1 afterDate:(id)arg2;
- (void)_requestDelegateToSendMessageTo:(id)arg1 cc:(id)arg2 subject:(id)arg3 body:(id)arg4;
- (void)_requestDelegateToStopDownloadingAllContentAndAttachments;
- (void)_requestDelegateToStopDownloadingContentAndAttachmentsForMessageWithId:(id)arg1;
- (void)_resendInitialSyncWithIDSIdentifier:(id)arg1 newResendInterval:(unsigned long long)arg2;
- (void)_resendObjectId:(id)arg1 objectType:(id)arg2 resendInterval:(unsigned long long)arg3 idsIdentifier:(id)arg4;
- (void)_resendPendingAccountWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3;
- (void)_resendPendingMessageContentWithId:(id)arg1 sentBecauseUserRequested:(bool)arg2 idsIdentifier:(id)arg3 newResendInterval:(unsigned long long)arg4;
- (void)_resendPendingMessagesWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3;
- (void)_runSyncVerification;
- (void)_scheduleIdsIdentifierForResend:(id)arg1 currentResendInterval:(unsigned long long)arg2 newResendInterval:(unsigned long long)arg3;
- (void)_sendFirstUnsyncedAndUnrequestedContents;
- (void)_storeScreenRelatedValuesForPairedDevice:(id)arg1;
- (id)_syncedMailboxForGetters;
- (void)_triggerFullMessagesAndAccountsSync;
- (void)_triggerFullMessagesSync;
- (void)_triggerFullMessagesSyncWithAccountsSync:(bool)arg1;
- (bool)_verifyDatabaseOkForFullSyncVersion:(unsigned long long)arg1;
- (void)_verifyPairingForcingSync:(bool)arg1;
- (void)_warnReceiverNeedsUnlock;
- (bool)_willPresentNotificationForMessage:(id)arg1;
- (id)accountsSyncService;
- (void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3;
- (void)addMessageContent:(id)arg1 preview:(id)arg2;
- (void)addMessages:(id)arg1;
- (void)addUpdateOrDeleteAccounts:(id)arg1;
- (id)bulletinFlagsForMessageStatus:(unsigned long long)arg1 dateReceived:(id)arg2 messageWillBeAddedToSyncProvider:(bool)arg3;
- (id)contentSyncService;
- (void)dealloc;
- (id)delegate;
- (void)deleteMessagesWithIds:(id)arg1;
- (id)fetchesSyncService;
- (void)fetchesSyncServiceServer:(id)arg1 didNotifyInitialSyncFinished:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFetch:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initialSyncCoordinator;
- (id)initialSyncMessageIdsOfContentToAck;
- (id)initialSyncMessageIdsToSyncContent;
- (unsigned long long)initialSyncMessagesCount;
- (double)initialSyncProgress;
- (unsigned long long)initialSyncResendInterval;
- (bool)isFirstMessagesRequestPending;
- (void)markConversationIdForNotNotify:(id)arg1;
- (void)markConversationIdForNotify:(id)arg1 messages:(id)arg2;
- (void)messageContentSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)messageContentSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (id)messageIdsToIgnoreStatusUpdates;
- (bool)messagesQueryAvailable;
- (bool)messagesSyncActive;
- (id)messagesSyncService;
- (void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2;
- (bool)messagesVerificationTriggered;
- (id)notificationsPingSubscriber;
- (void)notifyFetchManualCompleted;
- (void)notifyMessagesQueryAvailable;
- (void)notifyMessagesQueryUnavailable;
- (void)notifyOrganizeByThreadChanged;
- (void)notifySyncedMailboxChanged;
- (bool)organizeByThread;
- (id)pairedDeviceInfo;
- (id)pairedDeviceRegistry;
- (id)pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
- (id)pendingMoreMessagesForConversationIdRequestConversationId;
- (id)providerQueue;
- (void)replyWithAccountToResend:(id)arg1;
- (void)replyWithAccounts:(id)arg1;
- (void)replyWithFirstMessages:(id)arg1 syncedMailboxType:(unsigned long long)arg2 syncedMailboxAccountId:(id)arg3 syncedMailboxURL:(id)arg4 syncedMailboxCustomName:(id)arg5 organizeByThread:(bool)arg6;
- (void)replyWithMessageToResend:(id)arg1;
- (void)replyWithMessagesFailedDueToDataProtectedForDateReceivedBefore:(id)arg1 conversationId:(id)arg2;
- (void)replyWithMoreMessages:(id)arg1 forConversationWithId:(id)arg2;
- (void)replyWithMoreMessages:(id)arg1 forDateReceivedBefore:(id)arg2;
- (void)replyWithVerificationResultsMessagesMissing:(id)arg1 messagesWithDifferentStatus:(id)arg2 extraMessageIds:(id)arg3;
- (void)reportMessageContentDownloadFailureForMessageId:(id)arg1;
- (void)resendIDSIdentifier:(id)arg1;
- (void)setAccountsSyncService:(id)arg1;
- (void)setContentSyncService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchesSyncService:(id)arg1;
- (void)setInitialSyncCoordinator:(id)arg1;
- (void)setInitialSyncMessageIdsOfContentToAck:(id)arg1;
- (void)setInitialSyncMessageIdsToSyncContent:(id)arg1;
- (void)setInitialSyncMessagesCount:(unsigned long long)arg1;
- (void)setInitialSyncProgress:(double)arg1;
- (void)setInitialSyncResendInterval:(unsigned long long)arg1;
- (void)setIsFirstMessagesRequestPending:(bool)arg1;
- (void)setMessageIdsToIgnoreStatusUpdates:(id)arg1;
- (void)setMessagesQueryAvailable:(bool)arg1;
- (void)setMessagesSyncService:(id)arg1;
- (void)setMessagesVerificationTriggered:(bool)arg1;
- (void)setNotificationsPingSubscriber:(id)arg1;
- (void)setPairedDeviceRegistry:(id)arg1;
- (void)setPendingMoreMessagesForConversationIdRequestBeforeDateReceived:(id)arg1;
- (void)setPendingMoreMessagesForConversationIdRequestConversationId:(id)arg1;
- (void)setProviderQueue:(id)arg1;
- (void)setTrackingInitialSync:(bool)arg1;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
- (id)syncedMailboxAccountId;
- (id)syncedMailboxCustomName;
- (unsigned long long)syncedMailboxType;
- (id)syncedMailboxURL;
- (bool)trackingInitialSync;
- (void)updateMessagesStatus:(id)arg1;

@end
