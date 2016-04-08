/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "IGroupMgrExt.h"
#import "WCAccountBindPhoneControlLogicDelegate.h"
#import "UIAlertViewDelegate.h"
#import "IWCPayControlLogicExt.h"

@class WCAccountBindPhoneControlLogic, CContact, NSArray, NSString, WCPayAddPayCardLogic;

@interface ChatRoomBindCardUpgradeViewController : MMUIViewController <IWCPayControlLogicExt, IGroupMgrExt, UIAlertViewDelegate, WCAccountBindPhoneControlLogicDelegate> {
	CContact* m_chatRoomContact;
	unsigned long m_scene;
	unsigned long m_status;
	unsigned long m_phoneQuota;
	unsigned long m_maxCount;
	WCPayAddPayCardLogic* m_cardLogic;
	unsigned long m_upgradeRet;
	NSArray* m_presentArray;
	BOOL m_upgradeDirect;
	WCAccountBindPhoneControlLogic* m_bindLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnChatRoomUpgrade:(id)upgrade rspCode:(int)code restQuota:(unsigned long)quota maxCount:(unsigned long)count;
-(void)OnGetChatRoomUpgradeStatus:(unsigned long)status quota:(unsigned long)quota maxCount:(unsigned long)count;
-(void)OnFinishedWCPayLogic:(id)logic CompleteStatus:(int)status;
-(void)bindPhoneReturn;
-(void)onWCAccountBindPhoneControlLogicStop;
-(void)upgradeChatRoom;
-(void)checkBindPhone;
-(void)startBindCard;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)startUpgrade:(BOOL)upgrade;
-(void)confirmAction;
-(void)getUpgradeStatus;
-(void)openInfoPage;
-(id)makeFooterSection:(unsigned long)section;
-(id)makeProductSection:(unsigned long)section;
-(id)makeUpgraderView:(id)view upgrader:(id)upgrader maxCount:(unsigned long)count;
-(BOOL)shouldNotShowConfirmPage;
-(id)getUpgrader;
-(id)getUpgraderText;
-(void)initUpgraderView:(id)view upgrader:(id)upgrader maxCount:(unsigned long)count;
-(void)initUpgraderView;
-(id)dismissWithAnim;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithChatRoomContact:(id)chatRoomContact forScene:(unsigned long)scene;
@end
