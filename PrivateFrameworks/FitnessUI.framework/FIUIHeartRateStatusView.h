/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@class UIImageView;

@interface FIUIHeartRateStatusView : UIView {
    UIImageView *_animatingImageView;
    UIImageView *_fullHeartImageView;
    double _heartRate;
    UIImageView *_reloadArrowView;
    UIImageView *_reloadOutlineView;
    unsigned long long _state;
    bool_delayedStartMeasuringAnimation;
}

@property(retain) UIImageView * animatingImageView;
@property(retain) UIImageView * fullHeartImageView;
@property(retain) UIImageView * reloadArrowView;
@property(retain) UIImageView * reloadOutlineView;

- (void).cxx_destruct;
- (void)_beatFullHeartOnce;
- (void)_finishedHeartBeat;
- (void)_startMeasuringAnimation;
- (id)animatingImageView;
- (void)appDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)fullHeartImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 heartImageNameFormat:(id)arg2 frameRateDivider:(int)arg3 resourceBundle:(id)arg4;
- (void)layoutSubviews;
- (id)reloadArrowView;
- (id)reloadOutlineView;
- (void)setAnimatingImageView:(id)arg1;
- (void)setFullHeartImageView:(id)arg1;
- (void)setHeartRate:(double)arg1;
- (void)setReloadArrowImage:(id)arg1;
- (void)setReloadArrowView:(id)arg1;
- (void)setReloadHeartOutlineImage:(id)arg1;
- (void)setReloadOutlineView:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
