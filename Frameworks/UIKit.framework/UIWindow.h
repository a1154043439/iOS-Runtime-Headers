/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer, FBSScene, NSArray, NSMutableArray, NSMutableSet, NSString, NSUndoManager, UIColor, UIResponder, UIScreen, UITraitCollection, UIView, UIViewController, _UIResponderSelectionCursor, _UISimulatedApplicationResizeGestureRecognizerDelegate, _UISystemGestureGateGestureRecognizer, _UIViewControllerNullAnimationTransitionCoordinator, _UIWindowAnimationController;

@interface UIWindow : UIView <NSISEngineDelegate> {
    struct { 
        unsigned int delegateWillRotate : 1; 
        unsigned int delegateDidRotate : 1; 
        unsigned int delegateWillAnimateFirstHalf : 1; 
        unsigned int delegateDidAnimationFirstHalf : 1; 
        unsigned int delegateWillAnimateSecondHalf : 1; 
        unsigned int autorotatesToPortrait : 1; 
        unsigned int autorotatesToPortraitUpsideDown : 1; 
        unsigned int autorotatesToLandscapeLeft : 1; 
        unsigned int autorotatesToLandscapeRight : 1; 
        unsigned int dontBecomeKeyOnOrderFront : 1; 
        unsigned int output : 1; 
        unsigned int inGesture : 1; 
        unsigned int bitsPerComponent : 4; 
        unsigned int autorotates : 1; 
        unsigned int isRotating : 1; 
        unsigned int isUsingOnePartRotationAnimation : 1; 
        unsigned int isHandlingContentRotation : 1; 
        unsigned int disableAutorotationCount : 4; 
        unsigned int needsAutorotationWhenReenabled : 1; 
        unsigned int forceTwoPartRotationAnimation : 1; 
        unsigned int orderKeyboardInAfterRotating : 1; 
        unsigned int roundedCorners : 4; 
        unsigned int resizesToFullScreen : 1; 
        unsigned int keepContextInBackground : 1; 
        unsigned int ignoreSetHidden : 1; 
        unsigned int forceVisibleOnInit : 1; 
        unsigned int settingFirstResponder : 1; 
        unsigned int legacyOrientationChecks : 1; 
        unsigned int windowResizedToFullScreen : 1; 
        unsigned int statusBarFollowsOrientation : 1; 
        unsigned int secure : 1; 
        unsigned int isMainSceneSized : 1; 
    unsigned int _systemGesturesArePossible : 1;
    _UIWindowAnimationController *__animationController;
    id __rotationCompleteBlock;
    id __shouldPreventRotationHook;
    _UISimulatedApplicationResizeGestureRecognizerDelegate *__simulatedApplicationResizeGestureRecognizerDelegate;
    long long _containedGestureRecognizerMaximumState;
    id _currentTintView;
    NSString *_debugName;
    id _deferredLaunchBlock;
    id _delegate;
    UITraitCollection *_destinationTraitCollection;
    UIView *_exclusiveTouchView;
    id _fingerInfo;
    UIResponder *_firstResponder;
    long long _fromWindowOrientation;
    long long _horizontalSizeClassStateRestorationOverride;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    double _lastTouchTimestamp;
    id _layerContext;
    _UIResponderSelectionCursor *_responderSelectionCursor;
    NSArray *_rootViewConstraints;
    UIViewController *_rootViewController;
    NSMutableArray *_rotationViewControllers;
    UIColor *_savedBackgroundColor;
    FBSScene *_scene;
    UIScreen *_screen;
    NSMutableSet *_subtreeMonitoringViews;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForTouches;
    NSMutableSet *_tintViews;
    long long _toWindowOrientation;
    id _touchData;
    struct __CFDictionary { } *_touchMap;
    UITraitCollection *_traitCollection;
    _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator;
    CALayer *_transformLayer;
    NSUndoManager *_undoManager;
    long long _verticalSizeClassStateRestorationOverride;
    long long _viewOrientation;
    id _windowController;
    } _windowFlags;
    NSArray *_windowInternalConstraints;
    double _windowLevel;
    double _windowSublevel;
    bool__containedGestureRecognizersShouldRespectGestureServerInstructions;
    bool__shouldHitTestEntireScreen;
    bool__usesLegacySupportedOrientationChecks;
    bool_attachable;
    bool_shouldDisableTransformLayerScalingForSnapshotting;
}

@property(readonly) struct CGSize { double x1; double x2; } MPU_rootViewSize;
@property(readonly) struct { long long x1; long long x2; } __sizeClassPair;
@property(getter=_animationController,setter=_setAnimationController:,retain) _UIWindowAnimationController * _animationController;
@property(setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:) bool _containedGestureRecognizersShouldRespectGestureServerInstructions;
@property(setter=_setDeferredLaunchBlock:,copy) id _deferredLaunchBlock;
@property(setter=_setLegacyOrientationChecks:) bool _legacyOrientationChecks;
@property(setter=_setRootViewConstraints:,copy) NSArray * _rootViewConstraints;
@property(setter=_setRotationCompleteBlock:,copy) id _rotationCompleteBlock;
@property(setter=_setShouldDisableTransformLayerScalingForSnapshotting:) bool _shouldDisableTransformLayerScalingForSnapshotting;
@property(setter=_setShouldHitTestEntireScreen:) bool _shouldHitTestEntireScreen;
@property(setter=_setShouldPreventRotationHook:,copy) id _shouldPreventRotationHook;
@property(setter=_setSimulatedApplicationResizeGestureRecognizerDelegate:,retain) _UISimulatedApplicationResizeGestureRecognizerDelegate * _simulatedApplicationResizeGestureRecognizerDelegate;
@property(setter=_setTraitCollectionChangeTransitionCoordinator:,retain) _UIViewControllerNullAnimationTransitionCoordinator * _traitCollectionChangeTransitionCoordinator;
@property(readonly) bool _usesLegacySupportedOrientationChecks;
@property(setter=_setWindowInternalConstraints:,copy) NSArray * _windowInternalConstraints;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=_fromWindowOrientation,readonly) long long fromWindowOrientation;
@property(readonly) unsigned long long hash;
@property(getter=isKeyWindow,readonly) bool keyWindow;
@property(retain) UIViewController * rootViewController;
@property(retain) UIScreen * screen;
@property(readonly) Class superclass;
@property(getter=_toWindowOrientation,readonly) long long toWindowOrientation;
@property double windowLevel;

+ (void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(bool)arg2;
+ (void)_clearKeyWindowStack;
+ (void)_enumerateWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 withBlock:(id)arg3;
+ (void)_executeDeferredLaunchBlocks;
+ (id)_externalKeyWindow;
+ (id)_findWithDisplayPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)_hitTestToPoint:(struct CGPoint { double x1; double x2; })arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4;
+ (bool)_isSecure;
+ (bool)_isSystemWindow;
+ (unsigned long long)_keyWindowStackSize;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 forAutolayoutRootViewsOnly:(bool)arg3;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2;
+ (void)_popKeyWindow:(id)arg1;
+ (void)_popKeyWindow;
+ (void)_prepareWindowsForAppResume;
+ (void)_prepareWindowsForAppSuspend;
+ (void)_prepareWindowsPassingTestForAppResume:(id)arg1;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_removeWindowFromStack:(id)arg1;
+ (void)_setAllWindowsKeepContextInBackground:(bool)arg1;
+ (void)_setKeyWindowStackEnabled:(bool)arg1;
+ (void)_setTransformLayerRotationsAreEnabled:(bool)arg1;
+ (id)_statusBarControllingWindow;
+ (void)_synchronizeDrawing;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(id)arg2;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (unsigned int)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id)arg1;
+ (id)_topVisibleWindowPassingTest:(id)arg1;
+ (bool)_transformLayerRotationsAreEnabled;
+ (void)adjustForAccessibilityIfNeeded:(id)arg1;
+ (id)allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 forScreen:(id)arg3;
+ (id)allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void*)createIOSurfaceFromScreen:(id)arg1;
+ (void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int*)arg2 count:(unsigned long long)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 usePurpleGfx:(bool)arg5 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg6;
+ (void*)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 usePurpleGfx:(bool)arg4 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg5;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (void*)createScreenIOSurface;
+ (void)initialize;
+ (id)keyWindow;
+ (Class)layerClass;

- (struct CGSize { double x1; double x2; })MPU_rootViewSize;
- (id)__clientsForRotationCallbacks;
- (struct { long long x1; long long x2; })__sizeClassPair;
- (void)_addRotationViewController:(id)arg1;
- (void)_addTintView:(id)arg1;
- (void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_alwaysGetsContexts;
- (id)_animationController;
- (id)_appearanceContainer;
- (bool)_appearsInLoupe;
- (void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_axConvertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (bool)_becomeFirstResponderWhenPossible;
- (void)_beginKeyWindowDeferral;
- (void)_beginModalSession;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (bool)_canAffectStatusBarAppearance;
- (bool)_canBecomeKeyWindow;
- (bool)_canPromoteFromKeyWindowStack;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(bool)arg2 contentInsetScale:(double)arg3;
- (double)_chargeMultiplicationFactor;
- (struct CGPoint { double x1; double x2; })_clampPointToScreenJail:(struct CGPoint { double x1; double x2; })arg1;
- (double)_classicOffset;
- (bool)_clearMouseView;
- (void)_clearPendingKeyboardChanges;
- (void)_clearSizeClassesForStateRestoration;
- (id)_clientsForRotation;
- (void)_commonInit;
- (void)_commonInitAttachedWindow:(bool)arg1 debugName:(id)arg2 scene:(id)arg3;
- (void)_configureContextOptions:(id)arg1;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (bool)_containedGestureRecognizersShouldRespectGestureServerInstructions;
- (bool)_containedInAbsoluteResponderChain;
- (unsigned int)_contextId;
- (struct CGPoint { double x1; double x2; })_convertDoublePointFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertDoublePointToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertOffset:(struct CGPoint { double x1; double x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertOffset:(struct CGPoint { double x1; double x2; })arg1 toWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertOffsetFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertOffsetToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertPointFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertPointToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRectFromSceneReferenceSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRectToSceneReferenceSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_convertVisualAltitude:(double)arg1 fromWindow:(id)arg2;
- (double)_convertVisualAltitude:(double)arg1 toWindow:(id)arg2;
- (void)_createContext;
- (void)_createContextAttached:(bool)arg1;
- (void)_createContextIfNecessaryForCurrentApplicationState;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (id)_currentTintView;
- (id)_debugName;
- (id)_deepestUnambiguousResponder;
- (id)_deferralPropertiesWithContextID:(unsigned int)arg1;
- (id)_deferredLaunchBlock;
- (id)_descendantWithAmbiguousLayout;
- (void)_destroyContext;
- (void)_destroyContextFromScreen:(id)arg1;
- (id)_directionalGestureRecognizers;
- (bool)_disableAutomaticKeyboardBehavior;
- (bool)_disableAutomaticKeyboardUI;
- (bool)_disableGroupOpacity;
- (bool)_disableViewScaling;
- (void)_endKeyWindowDeferral;
- (void)_endModalSession;
- (id)_exclusiveTouchView;
- (unsigned long long)_expectedWindowInternalConstraintsCount;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(bool)arg4;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_firstResponder;
- (void)_forceTwoPartRotationAnimation:(bool)arg1;
- (long long)_fromWindowOrientation;
- (void)_geometryDidChangeForView:(id)arg1;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (bool)_hasContext;
- (id)_hostingHandle;
- (bool)_ignoresHitTest;
- (bool)_includeInDefaultImageSnapshot;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attached:(bool)arg2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 attached:(bool)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 scene:(id)arg3 attached:(bool)arg4;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2;
- (id)_initWithOrientation:(long long)arg1;
- (void)_initializeLayoutEngine;
- (void)_installSimulatedApplicationResizeGesture;
- (void)_invalidateWindowInternalConstraints;
- (bool)_isAnyWindowRotating;
- (bool)_isClippedByScreenJail;
- (bool)_isConstrainedByScreenJail;
- (bool)_isHostedInAnotherProcess;
- (bool)_isInAWindow;
- (bool)_isLoweringAnchoringConstraints;
- (bool)_isOffsetByScreenJail;
- (bool)_isPoint:(struct CGPoint { double x1; double x2; })arg1 relativeToPoint:(struct CGPoint { double x1; double x2; })arg2 inDirection:(long long)arg3;
- (bool)_isRotatedByScreenJail;
- (bool)_isScaledByScreenJail;
- (bool)_isScrollingEnabledForView:(id)arg1;
- (bool)_isSecure;
- (bool)_isSettingFirstResponder;
- (bool)_isStatusBarWindow;
- (bool)_isTextEffectsWindow;
- (bool)_isWindowServerHostingManaged;
- (id)_layoutEngineCreateIfNecessary;
- (id)_layoutEngineIfAvailable;
- (bool)_legacyOrientationChecks;
- (bool)_legacyShouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_makeExternalKeyWindow;
- (void)_makeKeyWindowIgnoringOldKeyWindow:(bool)arg1;
- (void)_matchDeviceOrientation;
- (void)_moveResponderSelectionInDirection:(long long)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_moveWithEvent:(id)arg1;
- (bool)_needsShakesWhenInactive;
- (id)_normalInheritedTintColor;
- (void)_orderContextToFront;
- (void)_orderFrontWithoutMakingKey;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)_propagateTraitCollectionChangedForStateRestoration;
- (id)_redundantConstraints;
- (void)_registerChargedView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (id)_registeredScrollToTopViews;
- (void)_removeRotationViewController:(id)arg1;
- (void)_removeTintView:(id)arg1;
- (void)_resignKeyWindowStatus;
- (void)_resizeWindowToFullScreenIfNecessary;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (id)_responderWindow;
- (id)_rootForKeyResponderCycle;
- (id)_rootLayer;
- (id)_rootViewConstraints;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1;
- (void)_rotateToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimator:(id)arg2 transitionContext:(id)arg3;
- (void)_rotateWindowToOrientation:(long long)arg1 updateStatusBar:(bool)arg2 duration:(double)arg3 skipCallbacks:(bool)arg4;
- (id)_rotationCompleteBlock;
- (id)_rotationViewControllers;
- (id)_scene;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneBounds;
- (void)_sceneBoundsDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneReferenceBounds;
- (id)_screen;
- (void)_screenWillTransitionToTraitCollection:(id)arg1;
- (void)_scrollResponderToVisible:(id)arg1;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id)arg2;
- (void)_sendButtonGesturesForEvent:(id)arg1;
- (void)_sendButtonsForEvent:(id)arg1;
- (void)_sendGesturesForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_setAnimationController:(id)arg1;
- (void)_setContainedGestureRecognizersShouldRespectGestureServerInstructions:(bool)arg1;
- (void)_setDeferredLaunchBlock:(id)arg1;
- (void)_setExclusiveTouchView:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sendTraitNotifications:(bool)arg2;
- (void)_setHidden:(bool)arg1 forced:(bool)arg2;
- (void)_setIsLoweringAnchoringConstraints:(bool)arg1;
- (void)_setIsSettingFirstResponder:(bool)arg1;
- (void)_setLegacyOrientationChecks:(bool)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setRootViewConstraints:(id)arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 applyTransformToWindow:(bool)arg3 updateStatusBar:(bool)arg4 duration:(double)arg5 force:(bool)arg6 isRotating:(bool)arg7;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 force:(bool)arg4;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(bool)arg3 duration:(double)arg4 force:(bool)arg5 isRotating:(bool)arg6;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(bool)arg3 duration:(double)arg4 force:(bool)arg5;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 force:(bool)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(bool)arg2 duration:(double)arg3 force:(bool)arg4;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(bool)arg2 duration:(double)arg3;
- (void)_setRotationCompleteBlock:(id)arg1;
- (void)_setScene:(id)arg1;
- (void)_setSecure:(bool)arg1;
- (void)_setShouldDisableTransformLayerScalingForSnapshotting:(bool)arg1;
- (void)_setShouldHitTestEntireScreen:(bool)arg1;
- (void)_setShouldPreventRotationHook:(id)arg1;
- (void)_setSimulatedApplicationResizeGestureRecognizerDelegate:(id)arg1;
- (void)_setStateRestorationVerticalSizeClass:(long long)arg1 horizontalSizeClass:(long long)arg2;
- (void)_setSystemGestureRecognitionIsPossible:(bool)arg1 andTouchesAreCancelled:(bool)arg2;
- (void)_setTouchMap:(struct __CFDictionary { }*)arg1;
- (void)_setTraitCollectionChangeTransitionCoordinator:(id)arg1;
- (void)_setWindowControlsStatusBarOrientation:(bool)arg1;
- (void)_setWindowInterfaceOrientation:(long long)arg1;
- (void)_setWindowInternalConstraints:(id)arg1;
- (bool)_shouldApplyHorizontalPixelScaleTransform;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1 checkForDismissal:(bool)arg2 isRotationDisabled:(bool*)arg3;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)_shouldCreateContextAsSecure;
- (bool)_shouldDelayTouchForSystemGestures:(id)arg1;
- (bool)_shouldDisableTransformLayerScalingForSnapshotting;
- (bool)_shouldHitTestEntireScreen;
- (bool)_shouldParticipateInVirtualResizing;
- (bool)_shouldPrepareScreenForWindow;
- (id)_shouldPreventRotationHook;
- (bool)_shouldResizeWithScene;
- (bool)_shouldZoom;
- (id)_simulatedApplicationResizeGestureRecognizerDelegate;
- (void)_slideFooterFromOrientation:(long long)arg1 toOrientation:(long long)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(bool)arg3 forInterfaceOrientation:(long long)arg4;
- (id)_subtreeMonitorsForView:(id)arg1;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (bool)_supportsBecomeFirstResponderWhenPossible;
- (void)_switchToLayoutEngine:(id)arg1;
- (bool)_systemGestureRecognitionIsPossible;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (id)_targetWindowForPathIndex:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (long long)_toWindowOrientation;
- (id)_touchData;
- (struct __CFDictionary { }*)_touchMap;
- (double)_touchSloppinessFactor;
- (id)_traitCollectionChangeTransitionCoordinator;
- (id)_traitCollectionForSize:(struct CGSize { double x1; double x2; })arg1 screen:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize { double x1; double x2; })arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(long long)arg3 virtualVerticalSizeClass:(long long)arg4;
- (id)_traitCollectionForSize:(struct CGSize { double x1; double x2; })arg1 screenCollection:(id)arg2;
- (id)_traitCollectionWhenRotated;
- (struct CGPoint { double x1; double x2; })_transformDisplayToWindowCoordinates:(struct CGPoint { double x1; double x2; })arg1;
- (void)_transformLayerShouldMaskToBounds:(bool)arg1;
- (id)_uiib_candidateRedundantConstraints;
- (void)_uiib_invalidateWindowInternalConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (void)_unregisterChargedView:(id)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_updateAppTintView;
- (void)_updateContextOrderingAndSetLayerHidden:(bool)arg1;
- (void)_updateCurrentTintView;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(bool)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(bool)arg1;
- (void)_updateIsSceneSizedFlag;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (void)_updateSceneIfNecessary;
- (void)_updateSimulatedApplicationResizeGestureForInterfaceOrientationChange;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 fenceID:(int)arg3 animation:(int)arg4;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_updateToInterfaceOrientation:(long long)arg1 animated:(bool)arg2;
- (void)_updateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 force:(bool)arg3;
- (void)_updateTransformLayer;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_updateTransformLayerSizeForClassicPresentation;
- (void)_updateWindowTraits;
- (void)_updateWindowTraitsAndNotify:(bool)arg1;
- (bool)_usesLegacySupportedOrientationChecks;
- (bool)_usesWindowServerHitTesting;
- (void)_willChangeToSize:(struct CGSize { double x1; double x2; })arg1 orientation:(long long)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_willTransitionToVirtualHorizontalSizeClass:(long long)arg1 virtualVerticalSizeClass:(long long)arg2;
- (id)_window;
- (id)_window;
- (bool)_windowControlsStatusBarOrientation;
- (long long)_windowInterfaceOrientation;
- (id)_windowInternalConstraints;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (void)_writeLayerTreeToPath:(id)arg1;
- (void)addRootViewControllerViewIfPossible;
- (id)addTouchCaptureViewWithTag:(long long)arg1;
- (bool)autorotates;
- (void)awakeFromNib;
- (bool)becomeFirstResponder;
- (void)becomeKeyWindow;
- (void)beginDisablingInterfaceAutorotation;
- (int)bitsPerComponent;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentView;
- (struct CGPoint { double x1; double x2; })convertDeviceToWindow:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toWindow:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertWindowToDevice:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyIOSurfaceSnapshotView:(long long)arg1;
- (void*)createIOSurface;
- (void*)createIOSurfaceWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)endDisablingInterfaceAutorotation;
- (void)endDisablingInterfaceAutorotationAnimated:(bool)arg1;
- (void)exerciseAmbiguityInLayout;
- (id)firstResponder;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (bool)hasAmbiguousLayout;
- (bool)inhibitManualTransform;
- (bool)inhibitSetupOrientation;
- (bool)inhibitTextEffectsRotation;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interfaceOrientation;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isInterfaceAutorotationDisabled;
- (bool)isInternalWindow;
- (bool)isKeyWindow;
- (bool)isRotating;
- (bool)isUsingOnePartRotationAnimation;
- (bool)keepContextInBackground;
- (void)keyboardDidHide;
- (double)level;
- (void)loadFirstResponderScrollViewContentInDirection:(struct CGSize { double x1; double x2; })arg1;
- (void)makeKey:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)makeKeyAndVisible;
- (void)makeKeyWindow;
- (void)matchDeviceOrientation:(id)arg1;
- (void)moveToNextResponderInDirection:(long long)arg1;
- (id)nextResponder;
- (void)orderFront:(id)arg1;
- (void)orderOut:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)redo:(id)arg1;
- (void)removeFromSuperview;
- (id)removeTouchCaptureViewWithTag:(long long)arg1;
- (id)representation;
- (void)resignKeyWindow;
- (bool)resizesToFullScreen;
- (id)rootViewController;
- (id)screen;
- (void)sendEvent:(id)arg1;
- (void)setAutorotates:(bool)arg1 forceUpdateInterfaceOrientation:(bool)arg2;
- (void)setAutorotates:(bool)arg1;
- (void)setBecomeKeyOnOrderFront:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setKeepContextInBackground:(bool)arg1;
- (void)setLevel:(double)arg1;
- (void)setResizesToFullScreen:(bool)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)setWindowLevel:(double)arg1;
- (void)setupForOrientation:(long long)arg1;
- (void)synchronizeDrawingWithID:(int)arg1 count:(unsigned long long)arg2;
- (void)synchronizeDrawingWithID:(int)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (void)updateConstraints;
- (void)updateConstraintsIfNeeded;
- (struct CGPoint { double x1; double x2; })warpPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)windowLevel;
- (int)windowOutput;

@end
