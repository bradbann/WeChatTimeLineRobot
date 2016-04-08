/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "MMTableViewInfoDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "IContactLabelMgrExt.h"

@class UILabel, UIView, MMTableViewInfo, NSString, UIButton;

@interface ContactTagHelloWorldViewController : MMUIViewController <IContactLabelMgrExt, MMTableViewInfoDelegate, MultiSelectContactsViewControllerDelegate> {
	MMTableViewInfo* m_tableViewInfo;
	UILabel* m_labelTipTitle;
	UILabel* m_labelTip;
	UIButton* m_btnTip;
	UIView* _headerView;
	UIView* _footerView;
	BOOL _bNeedReload;
	BOOL _bNeedGetTagFromServer;
	BOOL _bNewTagBtnEnable;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onAllContactLabelUpdated:(id)updated withRetCode:(int)retCode andEventId:(unsigned long)anId;
-(void)onMultiSelectContactReturn:(id)aReturn;
-(void)setNeedReload;
-(void)selectContacts;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)makeNewContactTag:(id)tag;
-(void)UpdateViewForNoContactTag;
-(void)ResetViews;
-(void)onDismiss:(id)dismiss;
-(void)reloadDataAndView;
-(id)makeNoSeparatorLineFooterView:(id)view;
-(id)makeExistTagHeaderView;
-(void)onEditContactLabel:(id)label;
-(void)dealloc;
-(id)init;
@end
