/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSObject>, <PLApplicationCameraViewControllerDelegate>, CAMKeepDaemonAliveAssertion, NSDictionary, NSString, UIView, UIViewController;

@interface CAMApplicationViewController : CAMCameraViewController <CAMCameraRollObserver, PLPhotoBrowserControllerDelegate, UINavigationControllerDelegate> {
    UIView *__autorotationCorrectionView;
    <NSObject> *__cameraRollNotificationToken;
    UIViewController *__cameraRollViewController;
    int __lockToResetToken;
    UIView *__rootContainerView;
    NSDictionary *_configuration;
    <PLApplicationCameraViewControllerDelegate> *_delegate;
    id _doneButtonAction;
    CAMKeepDaemonAliveAssertion *_keepDaemonAliveAssertion;
    id _previewButtonAction;
    double _sessionStartTime;
    long long _testPictureCounter;
    double _testPictureRepeatDelay;
    long long _testPicturesReceivedCounter;
    bool__didApplyConfigurationToCameraView;
    bool__dismissingCameraRoll;
    bool__dismissingCameraRollForSuspension;
    bool__handlesVolumeButtons;
    bool__hasLockedSinceLastConfigurationChange;
    bool__ignoringVolumeButtons;
    bool__shouldRetryDismissal;
    bool__shouldShowCameraRoll;
    bool_isReadyToTest;
    bool_usesSessionAlbum;
}

@property(readonly) UIView * _autorotationCorrectionView;
@property(readonly) <NSObject> * _cameraRollNotificationToken;
@property(readonly) UIViewController * _cameraRollViewController;
@property bool _didApplyConfigurationToCameraView;
@property(getter=_isDismissingCameraRoll,setter=_setDismissingCameraRoll:) bool _dismissingCameraRoll;
@property(getter=_isDismissingCameraRollForSuspension,setter=_setDismissingCameraRollForSuspension:) bool _dismissingCameraRollForSuspension;
@property(setter=_setHandlesVolumeButtons:) bool _handlesVolumeButtons;
@property(setter=_setHasLockedSinceLastConfigurationChange:) bool _hasLockedSinceLastConfigurationChange;
@property(setter=_setIgnoringVolumeButtons:) bool _ignoringVolumeButtons;
@property(readonly) int _lockToResetToken;
@property(readonly) UIView * _rootContainerView;
@property(readonly) bool _shouldRetryDismissal;
@property(setter=_setShouldShowCameraRoll:) bool _shouldShowCameraRoll;
@property(copy,readonly) NSString * debugDescription;
@property <PLApplicationCameraViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) id previewButtonAction;
@property(readonly) Class superclass;
@property long long testPictureCounter;
@property double testPictureRepeatDelay;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applyAutorotationCorrectingTransformForOrientation:(long long)arg1;
- (void)_applyConfiguration;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_autorotationCorrectingTransformFromOrientation:(long long)arg1;
- (id)_autorotationCorrectionView;
- (bool)_cameraIsRunning;
- (id)_cameraRollNotificationToken;
- (void)_cameraRollReload:(id)arg1;
- (id)_cameraRollViewController;
- (id)_currentPhotoBrowser;
- (void)_defaultCameraDevice:(id*)arg1 cameraMode:(id*)arg2;
- (id)_dictionaryFromPackedArray:(id)arg1;
- (bool)_didApplyConfigurationToCameraView;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; boolx5; double x6; int x7; }*)arg1;
- (void)_handleVolumeButtonDown;
- (void)_handleVolumeButtonUp;
- (bool)_handlesVolumeButtons;
- (bool)_hasLockedSinceLastConfigurationChange;
- (bool)_ignoringVolumeButtons;
- (bool)_isDismissingCameraRoll;
- (bool)_isDismissingCameraRollForSuspension;
- (void)_kickoffCameraControllerPreview;
- (int)_lockToResetToken;
- (void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2;
- (id)_packedArrayFromDictionary:(id)arg1;
- (void)_previewStarted:(id)arg1;
- (void)_refreshCameraUIForAlbumChange;
- (id)_rootContainerView;
- (void)_saveConfiguration;
- (void)_setDismissingCameraRoll:(bool)arg1;
- (void)_setDismissingCameraRollForSuspension:(bool)arg1;
- (void)_setHandlesVolumeButtons:(bool)arg1;
- (void)_setHasLockedSinceLastConfigurationChange:(bool)arg1;
- (void)_setIgnoringVolumeButtons:(bool)arg1;
- (void)_setShouldShowCameraRoll:(bool)arg1;
- (void)_setWantsVolumeButtonEvents:(bool)arg1;
- (void)_setupLockToResetNotifications;
- (bool)_shouldResetMode:(id)arg1;
- (bool)_shouldResumeTorch;
- (bool)_shouldRetryDismissal;
- (bool)_shouldShowCameraRoll;
- (void)_startCameraPreviewWithPreviewStartedBlock:(id)arg1;
- (void)_startPictureTestAfterSeconds:(double)arg1;
- (id)_stringForHDRMode:(int)arg1;
- (id)_stringForTimerDuration:(long long)arg1;
- (void)_teardownLockToResetNotifications;
- (void)_updateCameraRollSession;
- (void)_updateVolumeButtonEventsAbility;
- (void)animateBlurForSuspension;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (void)cameraViewDidFinishUnblurringForPreview:(id)arg1;
- (void)cameraViewFinishedSuspensionBlur:(id)arg1;
- (void)cameraViewFinishedTakingPicture:(id)arg1;
- (bool)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissCameraRoll:(id)arg1;
- (void)dismissCameraRollAnimated:(bool)arg1 forSuspension:(bool)arg2;
- (void)dismissCameraRollForCameraView:(id)arg1;
- (void)dismissCameraRollForSuspension;
- (id)init;
- (id)initWithSessionID:(id)arg1 startPreviewImmediately:(bool)arg2;
- (id)initWithSessionID:(id)arg1 usesCameraLocationBundleID:(bool)arg2 startPreviewImmediately:(bool)arg3;
- (void)loadView;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (id)newAlbumNavigationControllerForCameraRoll:(id)arg1;
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)preferencesDidChange;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2;
- (void)prepareForDefaultImageSnapshot;
- (void)prepareForDismissal;
- (void)prepareForSuspension;
- (void)presentCameraRollAboveCameraView:(id)arg1;
- (id)previewButtonAction;
- (void)reloadAlbumNavigationController:(id)arg1 withCameraRoll:(id)arg2;
- (void)saveCameraConfiguration;
- (void)setDelegate:(id)arg1;
- (void)setPreviewButtonAction:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTestPictureCounter:(long long)arg1;
- (void)setTestPictureRepeatDelay:(double)arg1;
- (void)setUsesSessionAlbum:(bool)arg1;
- (void)set_didApplyConfigurationToCameraView:(bool)arg1;
- (bool)shouldAnimateBlurForSuspension;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)showingCameraPreview;
- (void)startCameraPreview;
- (void)startCameraPreviewWithSavedConfiguration;
- (void)startPictureTest;
- (void)stopCameraPreview;
- (void)stopCameraPreviewAnimated:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)takePicture;
- (long long)testPictureCounter;
- (double)testPictureRepeatDelay;
- (void)testSetAutofocusDisabled:(bool)arg1;
- (void)testSetHDROn:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillShowForLaunch;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
