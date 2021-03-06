/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCGroupMgrExt.h"


@protocol WCFacadeExt <WCGroupMgrExt>
@optional
-(void)onHomepageTotalCountChanged:(int)changed;
-(void)onHomepageUpdate:(int)update withAdded:(id)added andChanged:(id)changed andDeleted:(id)deleted;
-(void)onAddDownloadQueue:(id)queue downloadType:(int)type;
-(void)onBeginDownload:(id)download downloadType:(int)type;
-(void)onCancelDownloadSuccess:(id)success downloadType:(int)type;
-(void)onDownloadFinish:(id)finish downloadType:(int)type;
-(void)onDownloadMediaProcessChange:(id)change downloadType:(int)type current:(int)current total:(int)total;
-(void)onWCPostPrivacyChanged;
-(void)onNotificationShowSettingChanged;
-(void)onDatabaseReloaded;
-(void)onNetworkActivityStatusChanged;
-(void)onBGStorageUpdated;
-(void)onWCBackgroundChanged;
-(void)onCommentReturn:(id)aReturn;
-(void)onDataItemExposeFinisehd:(int)finisehd dataItem:(id)item;
-(void)onChangeHBFeedBrowseStatus:(BOOL)status bOpen:(BOOL)open;
-(void)onDeleteUploadFailedHBDataItem:(id)item;
-(void)onSetHBDataItemFreeFinished:(int)finished dataItemID:(id)anId;
-(void)onSetDataItemPublicFinished:(int)finished dataItemID:(id)anId;
-(void)onSetDataItemPrivateFinished:(int)finished dataItemID:(id)anId;
-(void)onCommentItemDeleteFinished:(int)finished commentItemID:(id)anId dataItemID:(id)anId3;
-(void)onDataItemDeleteFinished:(int)finished dataItemID:(id)anId;
-(void)onUpdateDataItemDetailFinisehd:(int)finisehd dataItem:(id)item;
-(void)onReveiceWCDeleteMessage:(id)message;
-(void)onMessageUnReadCountChanged;
-(void)onReveiceWCMessage:(id)message;
-(void)onLatestWCObjectChanged:(id)changed;
-(void)onNoMoreTimelineData;
-(void)onDataChangedWithAdded:(id)added andChanged:(id)changed andDeleted:(id)deleted;
@end

