/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPickerControllerDelegate>, CNContactStyle, TKTonePickerViewController;

@interface ABTonePickerController : UINavigationController {
    CNContactStyle *_contactStyle;
    TKTonePickerViewController *_tonePicker;
}

@property(retain) CNContactStyle * contactStyle;
@property <ABPickerControllerDelegate> * delegate;
@property(retain) TKTonePickerViewController * tonePicker;

- (void)cancelButton:(id)arg1;
- (id)contactStyle;
- (void)dealloc;
- (void)doneButton:(id)arg1;
- (id)initWithAlertType:(int)arg1 selectedToneIdentifier:(id)arg2 selectedVibrationIdentifier:(id)arg3;
- (void)setContactStyle:(id)arg1;
- (void)setTonePicker:(id)arg1;
- (id)tonePicker;

@end
