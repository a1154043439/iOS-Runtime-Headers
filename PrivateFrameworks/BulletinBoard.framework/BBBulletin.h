/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBAccessoryIcon, BBAction, BBAttachments, BBColor, BBContent, BBSectionIcon, BBSound, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimeZone;

@interface BBBulletin : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {
    BBAccessoryIcon *_accessoryIconMask;
    NSMutableDictionary *_actions;
    long long _addressBookRecordID;
    NSSet *_alertSuppressionContexts;
    BBAttachments *_attachments;
    NSString *_bulletinID;
    NSString *_bulletinVersionID;
    NSArray *_buttons;
    BBContent *_content;
    NSDictionary *_context;
    unsigned long long _counter;
    NSDate *_date;
    long long _dateFormatStyle;
    NSString *_dismissalID;
    NSDate *_endDate;
    NSDate *_expirationDate;
    unsigned long long _expirationEvents;
    NSDate *_lastInterruptDate;
    NSMutableArray *_lifeAssertions;
    BBContent *_modalAlertContent;
    NSMutableSet *_observers;
    NSString *_parentSectionID;
    NSDate *_publicationDate;
    NSString *_publisherBulletinID;
    NSString *_publisherRecordID;
    NSDate *_recencyDate;
    NSString *_sectionID;
    long long _sectionSubtype;
    BBSound *_sound;
    BBContent *_starkBannerContent;
    NSSet *_subsectionIDs;
    NSMutableDictionary *_supplementaryActionsByLayout;
    NSTimeZone *_timeZone;
    NSString *_universalSectionID;
    NSString *_unlockActionLabelOverride;
    NSSet *alertSuppressionAppIDs_deprecated;
    bool_clearable;
    bool_dateIsAllDay;
    bool_expiresOnPublisherDeath;
    bool_hasEventDate;
    bool_loading;
    bool_showsMessagePreview;
    bool_usesExternalSync;
    bool_wantsFullscreenPresentation;
    unsigned long long realertCount_deprecated;
}

@property(retain) BBAccessoryIcon * accessoryIconMask;
@property(copy) BBAction * acknowledgeAction;
@property(copy) NSMutableDictionary * actions;
@property long long addressBookRecordID;
@property(readonly) NSSet * alertSuppressionAppIDs;
@property(copy) NSSet * alertSuppressionAppIDs_deprecated;
@property(copy) NSSet * alertSuppressionContexts;
@property(copy) BBAction * alternateAction;
@property(readonly) NSString * alternateActionLabel;
@property(retain) BBAttachments * attachments;
@property(readonly) NSString * bannerAccessoryRemoteServiceBundleIdentifier;
@property(readonly) NSString * bannerAccessoryRemoteViewControllerClassName;
@property(readonly) bool bannerShowsSubtitle;
@property(copy) NSString * bulletinID;
@property(copy) NSString * bulletinVersionID;
@property(copy) NSArray * buttons;
@property(readonly) bool canBeSilencedByMenuButtonPress;
@property bool clearable;
@property(readonly) bool coalescesWhenLocked;
@property(retain) BBContent * content;
@property(retain) NSDictionary * context;
@property unsigned long long counter;
@property(retain) NSDate * date;
@property long long dateFormatStyle;
@property bool dateIsAllDay;
@property(copy,readonly) NSString * debugDescription;
@property(copy) BBAction * defaultAction;
@property(copy,readonly) NSString * description;
@property(copy) NSString * dismissalID;
@property(retain) NSDate * endDate;
@property(retain) NSDate * expirationDate;
@property unsigned long long expirationEvents;
@property(copy) BBAction * expireAction;
@property bool expiresOnPublisherDeath;
@property(readonly) NSString * fullAlternateActionLabel;
@property(readonly) NSString * fullUnlockActionLabel;
@property bool hasEventDate;
@property(readonly) unsigned long long hash;
@property(readonly) long long iPodOutAlertType;
@property(readonly) bool ignoresQuietMode;
@property(readonly) bool inertWhenLocked;
@property(retain) NSDate * lastInterruptDate;
@property(retain) NSMutableArray * lifeAssertions;
@property(getter=isLoading) bool loading;
@property(copy) NSString * message;
@property(readonly) unsigned long long messageNumberOfLines;
@property(readonly) NSString * missedBannerDescriptionFormat;
@property(retain) BBContent * modalAlertContent;
@property(retain) NSMutableSet * observers;
@property(readonly) bool orderSectionUsingRecencyDate;
@property(copy) NSString * parentSectionID;
@property(readonly) bool playsSoundForModify;
@property(readonly) bool preservesUnlockActionCase;
@property(readonly) bool preventLock;
@property(readonly) long long primaryAttachmentType;
@property(retain) NSDate * publicationDate;
@property(copy) NSString * publisherBulletinID;
@property(copy) BBAction * raiseAction;
@property(readonly) unsigned long long realertCount;
@property unsigned long long realertCount_deprecated;
@property(retain) NSDate * recencyDate;
@property(copy) NSString * recordID;
@property(readonly) NSString * secondaryContentRemoteServiceBundleIdentifier;
@property(readonly) NSString * secondaryContentRemoteViewControllerClassName;
@property(copy) NSString * section;
@property(readonly) NSString * sectionDisplayName;
@property(readonly) bool sectionDisplaysCriticalBulletins;
@property(copy) NSString * sectionID;
@property(readonly) BBSectionIcon * sectionIcon;
@property long long sectionSubtype;
@property(readonly) bool showsContactPhoto;
@property(readonly) bool showsDateInFloatingLockScreenAlert;
@property bool showsMessagePreview;
@property(readonly) bool showsSubtitle;
@property(readonly) bool showsUnreadIndicatorForNoticesFeed;
@property(copy) BBAction * snoozeAction;
@property(retain) BBSound * sound;
@property(retain) BBContent * starkBannerContent;
@property(copy) NSSet * subsectionIDs;
@property(copy) NSString * subtitle;
@property(readonly) unsigned long long subtypePriority;
@property(readonly) Class superclass;
@property(retain) NSMutableDictionary * supplementaryActionsByLayout;
@property(readonly) bool suppressesAlertsWhenAppIsActive;
@property(readonly) bool suppressesMessageForPrivacy;
@property(readonly) bool suppressesTitle;
@property(retain) NSTimeZone * timeZone;
@property(readonly) BBColor * tintColor;
@property(copy) NSString * title;
@property(readonly) NSString * topic;
@property(copy) NSString * universalSectionID;
@property(readonly) NSString * unlockActionLabel;
@property(copy) NSString * unlockActionLabelOverride;
@property bool usesExternalSync;
@property(readonly) bool usesVariableLayout;
@property(readonly) bool visuallyIndicatesWhenDateIsInFuture;
@property bool wantsFullscreenPresentation;

+ (id)addBulletinToCache:(id)arg1;
+ (id)bulletinWithBulletin:(id)arg1;
+ (id)copyCachedBulletinWithBulletinID:(id)arg1;
+ (void)killSounds;
+ (void)removeBulletinFromCache:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)validSortDescriptorsFromSortDescriptors:(id)arg1;
+ (void)vetSortDescriptor:(id)arg1;

- (id)_actionKeyForType:(long long)arg1;
- (id)_actionWithID:(id)arg1 fromActions:(id)arg2;
- (id)_allActions;
- (id)_allSupplementaryActions;
- (id)_defaultActionWithFilter:(id)arg1;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (bool)_isPushOrLocalNotification;
- (id)_launchURLForAction:(id)arg1 context:(id)arg2;
- (id)_responseForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id)_responseForAction:(id)arg1;
- (id)_safeDescription:(bool)arg1;
- (id)_sectionParameters;
- (id)_sectionSubtypeParameters;
- (id)accessoryIconMask;
- (id)acknowledgeAction;
- (id)actionBlockForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id)actionBlockForAction:(id)arg1 withOrigin:(int)arg2;
- (id)actionBlockForAction:(id)arg1;
- (id)actionBlockForButton:(id)arg1;
- (id)actionForResponse:(id)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)actions;
- (void)addLifeAssertion:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)addressBookRecordID;
- (id)alertSuppressionAppIDs;
- (id)alertSuppressionAppIDs_deprecated;
- (id)alertSuppressionContexts;
- (id)alternateAction;
- (id)alternateActionLabel;
- (id)attachments;
- (id)attachmentsCreatingIfNecessary:(bool)arg1;
- (id)bannerAccessoryRemoteServiceBundleIdentifier;
- (id)bannerAccessoryRemoteViewControllerClassName;
- (bool)bannerShowsSubtitle;
- (bool)bulletinAlertShouldOverrideQuietMode;
- (id)bulletinID;
- (id)bulletinVersionID;
- (id)buttons;
- (bool)canBeSilencedByMenuButtonPress;
- (bool)clearable;
- (bool)coalescesWhenLocked;
- (id)composedAttachmentImage;
- (id)composedAttachmentImageForKey:(id)arg1 withObserver:(id)arg2;
- (id)composedAttachmentImageForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })composedAttachmentImageSize;
- (struct CGSize { double x1; double x2; })composedAttachmentImageSizeForKey:(id)arg1 withObserver:(id)arg2;
- (struct CGSize { double x1; double x2; })composedAttachmentImageSizeForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })composedAttachmentImageSizeWithObserver:(id)arg1;
- (id)composedAttachmentImageWithObserver:(id)arg1;
- (id)content;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)counter;
- (id)date;
- (long long)dateFormatStyle;
- (bool)dateIsAllDay;
- (void)dealloc;
- (id)defaultAction;
- (id)description;
- (id)dismissAction;
- (id)dismissalID;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)expirationDate;
- (unsigned long long)expirationEvents;
- (id)expireAction;
- (bool)expiresOnPublisherDeath;
- (id)firstValidObserver;
- (id)fullAlternateActionLabel;
- (id)fullUnlockActionLabel;
- (bool)hasEventDate;
- (long long)iPodOutAlertType;
- (bool)ignoresQuietMode;
- (bool)inertWhenLocked;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLoading;
- (void)killSound;
- (id)lastInterruptDate;
- (id)lifeAssertions;
- (bool)matchesPublisherBulletinID:(id)arg1 andRecordID:(id)arg2;
- (id)message;
- (unsigned long long)messageNumberOfLines;
- (id)missedBannerDescriptionFormat;
- (id)modalAlertContent;
- (unsigned long long)numberOfAdditionalAttachments;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (id)observers;
- (bool)orderSectionUsingRecencyDate;
- (id)parentSectionID;
- (bool)playSound;
- (bool)playsSoundForModify;
- (bool)preservesUnlockActionCase;
- (bool)preventLock;
- (long long)primaryAttachmentType;
- (id)publicationDate;
- (id)publisherBulletinID;
- (id)publisherMatchID;
- (id)publisherMatchID;
- (id)raiseAction;
- (unsigned long long)realertCount;
- (unsigned long long)realertCount_deprecated;
- (id)recencyDate;
- (id)recordID;
- (id)responseForAcknowledgeAction;
- (id)responseForAction:(id)arg1;
- (id)responseForButtonActionAtIndex:(unsigned long long)arg1;
- (id)responseForDefaultAction;
- (id)responseForExpireAction;
- (id)responseForRaiseAction;
- (id)responseForSnoozeAction;
- (id)responseSendBlock;
- (id)safeDescription;
- (id)sb_minimalSupplementaryActions;
- (id)sb_nonPluginDefaultAction;
- (bool)sb_shouldSuppressMessageForPrivacy;
- (bool)sb_supportsRaiseAction;
- (id)secondaryContentRemoteServiceBundleIdentifier;
- (id)secondaryContentRemoteViewControllerClassName;
- (id)section;
- (id)sectionDisplayName;
- (bool)sectionDisplaysCriticalBulletins;
- (id)sectionID;
- (id)sectionIcon;
- (id)sectionMatchID;
- (long long)sectionSubtype;
- (void)setAccessoryIconMask:(id)arg1;
- (void)setAcknowledgeAction:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setAddressBookRecordID:(long long)arg1;
- (void)setAlertSuppressionAppIDs_deprecated:(id)arg1;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAlternateAction:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setBulletinVersionID:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setClearable:(bool)arg1;
- (void)setContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCounter:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setDateIsAllDay:(bool)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setDismissalID:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpirationEvents:(unsigned long long)arg1;
- (void)setExpireAction:(id)arg1;
- (void)setExpiresOnPublisherDeath:(bool)arg1;
- (void)setHasEventDate:(bool)arg1;
- (void)setLastInterruptDate:(id)arg1;
- (void)setLifeAssertions:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setModalAlertContent:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setPublicationDate:(id)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRaiseAction:(id)arg1;
- (void)setRealertCount_deprecated:(unsigned long long)arg1;
- (void)setRecencyDate:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionSubtype:(long long)arg1;
- (void)setShowsMessagePreview:(bool)arg1;
- (void)setSnoozeAction:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setStarkBannerContent:(id)arg1;
- (void)setSubsectionIDs:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupplementaryActionsByLayout:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (void)setUnlockActionLabelOverride:(id)arg1;
- (void)setUsesExternalSync:(bool)arg1;
- (void)setWantsFullscreenPresentation:(bool)arg1;
- (id)shortDescription;
- (bool)showsContactPhoto;
- (bool)showsDateInFloatingLockScreenAlert;
- (bool)showsMessagePreview;
- (bool)showsSubtitle;
- (bool)showsUnreadIndicatorForNoticesFeed;
- (id)snoozeAction;
- (id)sound;
- (id)starkBannerContent;
- (id)subsectionIDs;
- (id)subtitle;
- (unsigned long long)subtypePriority;
- (id)supplementaryActions;
- (id)supplementaryActionsByLayout;
- (id)supplementaryActionsForLayout:(long long)arg1;
- (bool)suppressesAlertsWhenAppIsActive;
- (bool)suppressesMessageForPrivacy;
- (bool)suppressesTitle;
- (id)syncHash;
- (id)timeZone;
- (id)tintColor;
- (id)title;
- (id)topic;
- (id)uniqueIdentifier;
- (id)universalSectionID;
- (id)unlockActionLabel;
- (id)unlockActionLabelOverride;
- (bool)usesExternalSync;
- (bool)usesVariableLayout;
- (bool)visuallyIndicatesWhenDateIsInFuture;
- (bool)wantsFullscreenPresentation;

@end
