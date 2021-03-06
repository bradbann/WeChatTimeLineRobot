/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayFacingReceiveQRCodeViewControllerDelegate.h"
#import "WCPayFacingReceiveFixedAmountViewControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCPayControlLogic.h"

@class NSString;

@interface WCPayFacingReceiveContorlLogic : WCPayControlLogic <UIViewControllerTransitioningDelegate, WCPayFacingReceiveQRCodeViewControllerDelegate, WCPayFacingReceiveFixedAmountViewControllerDelegate> {
	NSString* m_nsFacingAmountTotalMoney;
	NSString* m_nsFacingAmountDesc;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)animationControllerForPresentedController:(id)presentedController presentingController:(id)controller sourceController:(id)controller3;
-(void)OnGetFixedAmountQRCode:(id)code Error:(id)error;
-(void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)info;
-(void)OnGetBindQueryInfo:(id)info Error:(id)error;
-(void)OnGetLocalPayCardList:(id)list UsrVerifiedInfo:(id)info SwicthInfo:(id)info3 BalanceInfo:(id)info4 NoticeInfo:(id)info5 loanEntryInfo:(id)info6;
-(void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)next Description:(id)description;
-(void)WCPayFacingReceiveFixedAmountViewControllerCancel:(BOOL)cancel;
-(void)VerifyUserInfo;
-(void)WCPayFacingReceiveNoTruthNameBtnDone;
-(void)WCPayFacingReceiveWitchBalance;
-(void)WCPayFacingReceiveChangeToUnFixedAmount;
-(void)WCPayFacingReceiveChangeToFixedAmount;
-(void)WCPayFacingReceiveQRCodeViewControllerCancel;
-(void)playVibration;
-(void)dealloc;
-(void)pause;
-(void)resume;
-(void)stopLogic;
-(void)startLogic;
@end

