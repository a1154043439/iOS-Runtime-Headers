/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABCardGroupItem, CNContactStyle, NSArray;

@interface ABContactCell : UITableViewCell {
    ABCardGroupItem *_cardGroupItem;
    CNContactStyle *_contactStyle;
    double _leftContentMargin;
    double _rightContentMargin;
    NSArray *_variableConstraints;
    bool_addedConstantsConstraints;
    bool_hasBeenDisplayed;
}

@property(retain) ABCardGroupItem * cardGroupItem;
@property(retain) CNContactStyle * contactStyle;
@property bool hasBeenDisplayed;
@property double leftContentMargin;
@property double rightContentMargin;
@property bool showSeparator;

- (id)cardGroupItem;
- (id)constantConstraints;
- (id)contactStyle;
- (void)dealloc;
- (bool)hasBeenDisplayed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)leftContentMargin;
- (double)minCellHeight;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (void)prepareForReuse;
- (double)rightContentMargin;
- (void)setCardGroupItem:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setHasBeenDisplayed:(bool)arg1;
- (void)setLeftContentMargin:(double)arg1;
- (void)setRightContentMargin:(double)arg1;
- (void)setShowSeparator:(bool)arg1;
- (bool)shouldPerformAccessoryAction;
- (bool)shouldPerformDefaultAction;
- (bool)showSeparator;
- (void)updateConstraints;
- (id)variableConstraints;

@end
