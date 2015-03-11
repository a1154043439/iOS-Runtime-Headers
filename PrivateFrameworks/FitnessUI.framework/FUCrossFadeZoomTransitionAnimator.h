/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIView;

@interface FUCrossFadeZoomTransitionAnimator : NSObject <FUViewControllerAnimatedTransitioning> {
    id _animationCompletionBlock;
    id _context;
    UIView *_largeView;
    UIView *_smallView;
    bool_transitionCompleted;
    bool_zoomingUp;
}

@property(retain) id context;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) UIView * largeView;
@property(retain) UIView * smallView;
@property(readonly) Class superclass;
@property bool zoomingUp;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)completeTransitionImmediately;
- (id)context;
- (id)largeView;
- (void)setContext:(id)arg1;
- (void)setLargeView:(id)arg1;
- (void)setSmallView:(id)arg1;
- (void)setZoomingUp:(bool)arg1;
- (id)smallView;
- (double)transitionDuration:(id)arg1;
- (bool)zoomingUp;

@end
