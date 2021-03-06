/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "WCDeviceNetworkLogicMgrDelegate.h"
#import "IWCDeviceBrandMgrExt.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, MMLoadingView, MMTableView, WCDevice;

@interface WCMyDeviceListViewController : MMUIViewController <WCDeviceNetworkLogicMgrDelegate, IWCDeviceBrandMgrExt, UIAlertViewDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource> {
	MMTableView* m_tableView;
	NSMutableArray* m_myDeviceList;
	WCDevice* m_deviceToDeleted;
	MMLoadingView* m_loadingView;
	unsigned m_scene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onWCDeviceUnbindEnd:(id)end Error:(id)error;
-(void)onWCDeviceGetBoundDevices:(id)devices;
-(void)onFinishedEditTableView:(id)view;
-(void)onEditTableView:(id)view;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)makeAddDeviceCell:(id)cell;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)updateRightBarButton;
-(void)updateView;
-(void)initLoadingView;
-(void)initHeaderView;
-(void)initView;
-(void)reloadData;
-(void)requestDataFromDB;
-(void)dealloc;
-(id)initWithScene:(unsigned)scene;
-(id)init;
@end

