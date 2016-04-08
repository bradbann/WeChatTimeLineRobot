/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextFieldDelegate.h"

@class TenpayPasswordView, NSMutableArray, UIView, NSString, TPIDKeyboardView;
@protocol TenpayPasswordCtrlDelegate;

@interface TenpayPasswordCtrl : XXUnknownSuperclass <UITextFieldDelegate> {
	NSMutableArray* _inputEncData;
	UIView* _keyboard;
	TenpayPasswordView* _pswView;
	TPIDKeyboardView* _iPadKeyboard;
	id<TenpayPasswordCtrlDelegate> ctrlDelegate;
	NSString* _saltVal;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* saltVal;
@property(assign, nonatomic) id<TenpayPasswordCtrlDelegate> ctrlDelegate;
-(id)GetHashData;
-(id)GetRsaEncryptData;
-(unsigned)GetInputLen;
-(void)SetSalt:(id)salt;
-(void)ClearInput;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)onChange;
-(void)appendPsw:(id)psw;
-(void)numberKeyBoardClicked:(id)clicked;
-(void)UseKeyboardWithImageNumNormal:(id)imageNumNormal ImageNumPress:(id)press ImageDelNormal:(id)normal ImageDelPess:(id)pess;
-(void)setKeyboradOrientation:(int)orientation;
-(id)customOverlayContainer;
-(CGRect)caretRectForPosition:(id)position;
-(id)initWithFrame:(CGRect)frame AndImage:(id)image;
-(void)dealloc;
@end
