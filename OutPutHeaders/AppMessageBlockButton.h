/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "ITemplateMsgRecvExt.h"
#import "UIAlertViewDelegate.h"
#import "MMUIButton.h"

@class MMUIViewController, NSString, CMessageWrap;

@interface AppMessageBlockButton : MMUIButton <WCActionSheetDelegate, UIAlertViewDelegate, ITemplateMsgRecvExt> {
	CMessageWrap* _messageWrap;
	MMUIViewController* _baseViewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CMessageWrap* messageWrap;
-(void).cxx_destruct;
-(void)onTemplateMsgConnectionChange:(unsigned long)change;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onBlockTemplateMsg;
-(void)onReport;
-(id)combineBaseUrl:(id)url withParams:(id)params;
-(void)showActionSheet;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)showAlertView;
-(void)changeMessageState;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
