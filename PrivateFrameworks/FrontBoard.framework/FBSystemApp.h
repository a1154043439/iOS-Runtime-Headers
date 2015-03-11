/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class FBSceneClientProviderInvalidationAction, NSMapTable, NSMutableDictionary, NSString;

@interface FBSystemApp : UIApplication <FBSceneClient, FBSSceneUpdater, BKSSystemApplicationDelegate, FBSceneClientProvider> {
    NSMapTable *_hostsByIdentifier;
    NSMutableDictionary *_initialClientSettingsByIdentifier;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    NSMutableDictionary *_scenesByIdentifier;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)preFrontBoardInitializationHook;
+ (bool)registerAsSystemApp;
+ (bool)rendersLocally;
+ (bool)shouldCheckInWithBackboard;
+ (bool)shouldFixMainThreadPriority;
+ (bool)systemApplicationIsAliveForWatchdog:(id)arg1;
+ (bool)systemApplicationShouldWaitForDataMigration:(id)arg1;

- (id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3;
- (bool)_saveSnapshotWithName:(id)arg1;
- (void)_updateSceneSettingsForScene:(id)arg1 context:(id)arg2;
- (void)beginTransaction;
- (bool)canOpenURL:(id)arg1;
- (void)endTransaction;
- (id)fbsSceneWithIdentifier:(id)arg1;
- (bool)handleDoubleHeightStatusBarTap:(long long)arg1;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id)arg5;
- (id)init;
- (bool)isFrontBoard;
- (bool)isSuspended;
- (bool)isSuspendedEventsOnly;
- (bool)isSuspendedUnderLock;
- (unsigned long long)lastExitReason;
- (bool)openURL:(id)arg1;
- (void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
- (id)registerHost:(id)arg1 withInitialClientSettings:(id)arg2;
- (void)registerInvalidationAction:(id)arg1;
- (void)resetIdleTimerAndUndim;
- (void)scene:(id)arg1 didAttachContext:(id)arg2;
- (void)scene:(id)arg1 didDetachContext:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didReceiveUpdateToContext:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)sendActionsToBackboard:(id)arg1;
- (void)unregisterDelegateForSceneID:(id)arg1;
- (void)unregisterHost:(id)arg1;
- (bool)willObserveContextsManually;

@end
