/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIFormControl>, NSMutableDictionary, UIButton, UIImageView, UIInformalDelegate, UITransitionView, UIView<UIFormPeripheral>;

@interface UIFormAssistant : UIView {
    <UIFormControl> *_control;
    UIInformalDelegate *_delegate;
    UIButton *_done;
    BOOL _isTransitioning;
    UIImageView *_navigation;
    UIButton *_next;
    <UIFormControl> *_nextControl;
    UIView<UIFormPeripheral> *_nextPeripheral;
    NSInteger _orientation;
    UIView<UIFormPeripheral> *_peripheral;
    UIButton *_previous;
    NSMutableDictionary *_primaryCache;
    NSMutableDictionary *_secondaryCache;
    UITransitionView *_transition;
}

@property(retain) UIView<UIFormPeripheral> *_nextPeripheral; /* unknown property attribute: V_nextPeripheral */
@property(retain) UIView<UIFormPeripheral> *_peripheral; /* unknown property attribute: V_peripheral */
@property(retain) <UIFormControl> *_nextControl; /* unknown property attribute: V_nextControl */
@property(retain) <UIFormControl> *_control; /* unknown property attribute: V_control */

+ (id)_navigationImage;
+ (double)defaultTransitionDuration;
+ (BOOL)isShowing;
+ (id)sharedFormAssistant;

- (void)_cachePeripheral:(id)arg1 withClass:(Class)arg2;
- (id)_control;
- (id)_getPeripheralFromCache:(Class)arg1;
- (id)_nextControl;
- (id)_nextPeripheral;
- (id)_peripheral;
- (void)advanceToNextFormControl:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)completeFormControlTransition;
- (void)dealloc;
- (void)done:(id)arg1;
- (id)formControl;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTransitioning;
- (BOOL)isTransitioningToNextPeripheral;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })peripheralFrame;
- (void)recedeToPreviousFormControl:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })remainingDeviceRect;
- (id)sessionDelegate;
- (void)setFormControl:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setUpAnimation:(id)arg1;
- (void)set_control:(id)arg1;
- (void)set_nextControl:(id)arg1;
- (void)set_nextPeripheral:(id)arg1;
- (void)set_peripheral:(id)arg1;
- (void)synchronizeOrientationWithAnimation:(BOOL)arg1;
- (void)transitionViewDidComplete:(id)arg1;

@end