/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSDate, PreferencesValueCell, UIDatePicker, UITableView, UITableViewCell;

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener> {
    unsigned int _updatingPicker : 1;
    NSDate *_bestInitialDate;
    PreferencesValueCell *_dateCell;
    UIDatePicker *_datePicker;
    UITableViewCell *_datePickerCell;
    NSDate *_minimumEndDate;
    NSDate *_preNeverEndDate;
    NSDate *_repeatEndDate;
    int _shorteningStatus;
    UITableView *_table;
}

@property(copy) NSDate * bestInitialDate;
@property(copy) NSDate * repeatEndDate;

- (void).cxx_destruct;
- (id)_cellForRow:(int)arg1;
- (id)_endDateStringForCurrentShorteningStatus;
- (void)_localeChanged;
- (id)_stringForEndDate;
- (void)_updateSelectionForCell:(id)arg1 atRow:(int)arg2;
- (void)applyMinimumEndDateToPicker;
- (id)bestInitialDate;
- (void)datePickerChanged:(id)arg1;
- (void)dealloc;
- (BOOL)fitsPopoverWhenKeyboardActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)repeatEndDate;
- (void)setBestInitialDate:(id)arg1;
- (void)setMinimumEndDate:(id)arg1;
- (void)setRepeatEndDate:(id)arg1;
- (void)shortenCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updatePicker;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end