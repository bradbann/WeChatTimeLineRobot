/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "MMTableViewInfoDelegate.h"
#import "UIAlertViewDelegate.h"
#import "IContactLabelMgrExt.h"

@class MMTableViewInfo, UIView, NSString;

@interface ContactTagMgrViewController : MMUIViewController <IContactLabelMgrExt, UIAlertViewDelegate, MMTableViewInfoDelegate> {
	MMTableViewInfo* m_tableViewInfo;
	unsigned long _uiJobID;
	UIView* _headerView;
	UIView* _footerView;
	BOOL _bNeedReload;
	BOOL _bNeedGetTagFromServer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onDeleteContactLabel:(id)label withRetCode:(int)retCode andEventId:(unsigned long)anId;
-(void)onAllContactLabelUpdated:(id)updated withRetCode:(int)retCode andEventId:(unsigned long)anId;
-(void)commitEditingForRowAtIndexPath:(id)indexPath Cell:(id)cell;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)onDismiss:(id)dismiss;
-(void)reloadDataAndView;
-(id)makeNoSeparatorLineFooterView:(id)view;
-(id)makeExistTagHeaderView;
-(void)onCreateContactLabel;
-(void)onEditContactLabel:(id)label;
-(void)dealloc;
-(id)init;
@end
