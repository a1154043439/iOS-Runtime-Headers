/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassSnapshotter, UIColor, UIImageView, UILabel;

@interface PKPaymentOptionGroupItemCardCell : PKPaymentOptionGroupItemCell {
    UIImageView *_cardArtView;
    UILabel *_censoredPANLabel;
    UILabel *_displayLabel;
    UIColor *_highlightColor;
    UIColor *_mainLabelColor;
    PKPassSnapshotter *_passSnapshotter;
    UIColor *_subTextLabelColor;
}

@property UIColor * highlightColor;
@property(retain) UIColor * mainLabelColor;
@property(retain) PKPassSnapshotter * passSnapshotter;
@property(retain) UIColor * subTextLabelColor;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cardArtFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_censoredPANLabelFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_displayLabelFrame;
- (void)_updateCellContent;
- (void)dealloc;
- (id)highlightColor;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)mainLabelColor;
- (id)passSnapshotter;
- (void)setHighlightColor:(id)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPassSnapshotter:(id)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (id)subTextLabelColor;

@end
