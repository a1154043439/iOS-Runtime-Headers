/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayOccurrenceContentView, EKDayOccurrenceTravelTimeView, EKDayOccurrenceView, EKEvent, NSString, UIColor, UIImageView, UIView;

@interface EKDayOccurrenceView : UIView <NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    unsigned int _touchKeptInsideOccurrence : 1;
    unsigned int _offsetContentForLandscape : 1;
    double _bottomPinningProximity;
    unsigned long long _bottomPinningState;
    double _cappedColorBarHeight;
    UIColor *_color;
    EKDayOccurrenceContentView *_content;
    id _delegate;
    UIView *_endResizeHandle;
    UIImageView *_eventBackgroundView;
    } _margin;
    EKEvent *_occurrence;
    int _occurrenceBackgroundStyle;
    double _originalXBeforeOffset;
    } _padding;
    UIView *_pinFadeView;
    EKDayOccurrenceView *_selectedCopy;
    UIView *_startResizeHandle;
    UIImageView *_travelBackgroundView;
    double _travelTime;
    EKDayOccurrenceTravelTimeView *_travelTimeContentView;
    double _travelTimeSubviewHeightInPoints;
    } _unpinnedEventBackgroundFrame;
    } _unpinnedTravelBackgroundFrame;
    double _visibleHeight;
    bool_allDay;
    bool_allDayDrawingStyle;
    bool_declined;
    bool_dimmed;
    bool_drawsResizeHandles;
    bool_hideBackgroundImage;
    bool_hideText;
    bool_isSelectedCopyView;
    bool_needsBackgroundImageUpdate;
    bool_needsContentCalc;
    bool_needsReply;
    bool_reduceLayoutProcessingForAnimation;
    bool_selected;
    bool_showsTravelTime;
    bool_tentative;
    bool_visibleHeightLocked;
}

@property(getter=isAllDay) bool allDay;
@property bool allDayDrawingStyle;
@property(getter=isBirthday) bool birthday;
@property double bottomPinningProximity;
@property(getter=isCancelled) bool cancelled;
@property double cappedColorBarHeight;
@property(copy) UIColor * color;
@property(copy,readonly) NSString * debugDescription;
@property(getter=isDeclined) bool declined;
@property id delegate;
@property(copy,readonly) NSString * description;
@property bool dimmed;
@property bool drawsResizeHandles;
@property(getter=isFacebook) bool facebook;
@property(readonly) unsigned long long hash;
@property bool hideBackgroundImage;
@property bool hideText;
@property bool isSelectedCopyView;
@property(copy) NSString * location;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property bool needsReply;
@property(retain) EKEvent * occurrence;
@property int occurrenceBackgroundStyle;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property bool reduceLayoutProcessingForAnimation;
@property long long routingMode;
@property(retain) UIColor * secondaryTextColor;
@property bool selected;
@property EKDayOccurrenceView * selectedCopy;
@property bool showsTravelTime;
@property(readonly) Class superclass;
@property(getter=isTentative) bool tentative;
@property(retain) UIColor * textBackgroundColor;
@property(retain) UIColor * timeTextColor;
@property(copy) NSString * title;
@property(retain) UIColor * titleTextColor;
@property double travelTime;
@property double travelTimeSubviewHeightInPoints;
@property bool usesSmallText;
@property(readonly) bool visibleHeightLocked;

+ (id)_adjustedOccurrenceColorForDarkBackground:(id)arg1 opaque:(bool)arg2;
+ (id)_adjustedStripeColorForDarkBackground:(id)arg1;
+ (id)_cachedImageForCalendarColor:(id)arg1 selected:(bool)arg2 declined:(bool)arg3 cancelled:(bool)arg4 tentative:(bool)arg5 needsReply:(bool)arg6 colorBarStyle:(long long)arg7 dayViewBackgroundStyle:(int)arg8;
+ (void)_clearViewCache;
+ (id)_color:(id)arg1 lightenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBarStyle:(long long)arg3;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(double)arg4 colorBarStyle:(long long)arg5;
+ (id)_lightColorForColor:(id)arg1 opaque:(bool)arg2;
+ (id)_lightStripeColorForColor:(id)arg1;
+ (id)_viewCache;
+ (double)barToBarGapWidth;
+ (double)barToBarHorizontalDistanceIncludingBarWidth;
+ (double)bottomShadowMargin;
+ (void)clearCaches;
+ (double)colorBarThickness;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentStretchRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultMargin;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultPadding;
+ (double)minimumHeightForOrientation:(long long)arg1 isAllDay:(bool)arg2 usesSmallText:(bool)arg3;
+ (double)minimumHeightForOrientation:(long long)arg1 isAllDay:(bool)arg2;
+ (double)minimumHeightForOrientation:(long long)arg1;
+ (id)occurrenceViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (void)_addTravelTimeSubviews;
- (id)_backgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeTravelTimeContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameMutatedForProximityToHourLine:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_invalidateContentBounds;
- (bool)_isTimedOccurrenceDrawingStyle;
- (id)_newResizeHandleView;
- (void)_removeTravelTimeSubviews;
- (void)_resetContentViewPosition;
- (bool)_shouldShowTimeString;
- (id)_timedEventBackgroundColor;
- (void)_updateColors;
- (void)_updateResizeHandleLocations;
- (double)_verticalContentInset;
- (bool)allDayDrawingStyle;
- (void)animateToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isAllDay:(bool)arg2 beginFromCurrentState:(bool)arg3 whenFinished:(id)arg4;
- (id)arrayOfResizeHandles;
- (double)bottomPinningProximity;
- (void)bringResizeHandlesToFront;
- (double)cappedColorBarHeight;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToSuperview;
- (bool)dimmed;
- (int)dragTypeFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)drawsResizeHandles;
- (double)enoughHeightForOneLine;
- (void)fadeInContentViewAt:(double)arg1 minWidth:(double)arg2 animated:(bool)arg3;
- (bool)hasIcon;
- (bool)hideBackgroundImage;
- (bool)hideText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateTravelTimeHeight;
- (bool)isAllDay;
- (bool)isBirthday;
- (bool)isCancelled;
- (bool)isDeclined;
- (bool)isFacebook;
- (bool)isSelectedCopyView;
- (bool)isTentative;
- (void)layoutSubviews;
- (id)location;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (bool)needsReply;
- (id)occurrence;
- (int)occurrenceBackgroundStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (bool)reduceLayoutProcessingForAnimation;
- (void)removeFromSuperview;
- (bool)resetContentViewToOriginalState:(bool)arg1;
- (long long)routingMode;
- (id)secondaryTextColor;
- (bool)selected;
- (id)selectedCopy;
- (void)setAllDay:(bool)arg1;
- (void)setAllDayDrawingStyle:(bool)arg1 animated:(bool)arg2;
- (void)setAllDayDrawingStyle:(bool)arg1;
- (void)setBirthday:(bool)arg1;
- (void)setBottomPinningProximity:(double)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCappedColorBarHeight:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setDeclined:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setDrawsResizeHandles:(bool)arg1;
- (void)setFacebook:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setHideBackgroundImage:(bool)arg1;
- (void)setHideText:(bool)arg1 animate:(bool)arg2;
- (void)setHideText:(bool)arg1;
- (void)setIsSelectedCopyView:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNeedsReply:(bool)arg1;
- (void)setOccurrence:(id)arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setReduceLayoutProcessingForAnimation:(bool)arg1;
- (void)setRoutingMode:(long long)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedCopy:(id)arg1;
- (void)setShowsTravelTime:(bool)arg1;
- (void)setTentative:(bool)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeSubviewHeightInPoints:(double)arg1;
- (void)setUsesSmallText:(bool)arg1;
- (void)setVisibleHeight:(double)arg1;
- (bool)showsTravelTime;
- (id)textBackgroundColor;
- (id)time;
- (id)timeTextColor;
- (id)title;
- (id)titleTextColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)travelTime;
- (double)travelTimeSubviewHeightInPoints;
- (double)unconstrainedWidth;
- (bool)usesSmallText;
- (double)viewMaxNaturalTextHeight;
- (bool)visibleHeightLocked;

@end
