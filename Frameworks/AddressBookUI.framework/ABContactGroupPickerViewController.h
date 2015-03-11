/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABContactGroupPickerDelegate>, CNContactStyle, NSArray, NSString, UITableView;

@interface ABContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    CNContactStyle *_contactStyle;
    <ABContactGroupPickerDelegate> *_groupPickerDelegate;
    NSArray *_pickableGroups;
    UITableView *_tableView;
}

@property(retain) CNContactStyle * contactStyle;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property <ABContactGroupPickerDelegate> * groupPickerDelegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)pickableGroupsWithPickedGroups:(id)arg1;
+ (bool)propertiesLeftToPickWithPickedGroups:(id)arg1;
+ (id)propertySections;

- (id)_loadPickableGroupsWithPickedGroups:(id)arg1;
- (void)cancel:(id)arg1;
- (id)contactStyle;
- (void)dealloc;
- (id)groupPickerDelegate;
- (id)initWithGroups:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setGroupPickerDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
