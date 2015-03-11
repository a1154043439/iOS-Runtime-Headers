/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class <HKAuthorizationSettingsViewControllerDelegate>, HKDataCategoryController, HKHealthStore, HKSource, HKSourceAuthorizationController, NSString, UIBarButtonItem;

@interface HKAuthorizationSettingsViewController : UITableViewController <HKSwitchTableViewCellDelegate> {
    UIBarButtonItem *_cancelButtonItem;
    HKDataCategoryController *_dataCategoryController;
    <HKAuthorizationSettingsViewControllerDelegate> *_delegate;
    UIBarButtonItem *_doneButtonItem;
    HKHealthStore *_healthStore;
    NSString *_shareDescription;
    HKSource *_source;
    HKSourceAuthorizationController *_sourceAuthorizationController;
    long long _style;
    NSString *_updateDescription;
}

@property(retain) UIBarButtonItem * cancelButtonItem;
@property(retain) HKDataCategoryController * dataCategoryController;
@property <HKAuthorizationSettingsViewControllerDelegate> * delegate;
@property(retain) UIBarButtonItem * doneButtonItem;
@property(readonly) HKHealthStore * healthStore;
@property(copy) NSString * shareDescription;
@property(retain) HKSource * source;
@property(retain) HKSourceAuthorizationController * sourceAuthorizationController;
@property(readonly) long long style;
@property(copy) NSString * updateDescription;

- (void).cxx_destruct;
- (void)_addCancelAndDoneButtons;
- (void)_addHeaderView;
- (void)_addMessageLabelWithMessage:(id)arg1 size:(double)arg2;
- (long long)_authorizationSectionForSection:(long long)arg1;
- (id)_authorizationSettingCellForRowAtIndexPath:(id)arg1;
- (void)_configurationFailedWithError:(id)arg1;
- (void)_done:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (bool)_isPrompting;
- (bool)_isTypeEnabledAtIndexPath:(id)arg1;
- (bool)_shouldDisplayReadingSection;
- (bool)_shouldDisplaySharingSection;
- (id)_typeForIndexPath:(id)arg1 section:(long long*)arg2;
- (id)cancelButtonItem;
- (id)dataCategoryController;
- (id)delegate;
- (id)doneButtonItem;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1 style:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadAuthorizationSettings;
- (void)setCancelButtonItem:(id)arg1;
- (void)setDataCategoryController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setShareDescription:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceAuthorizationController:(id)arg1;
- (void)setUpdateDescription:(id)arg1;
- (id)shareDescription;
- (id)source;
- (id)sourceAuthorizationController;
- (long long)style;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)updateDescription;
- (void)viewDidLoad;

@end
