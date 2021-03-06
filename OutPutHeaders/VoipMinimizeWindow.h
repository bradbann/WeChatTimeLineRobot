/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIWindow.h"
#import "MultitalkMinimizeViewControllerDelegate.h"

@class SequenceAnimationObject, NSString, VoipMinimizeViewController;
@protocol VoipMinimizeWindowDelegate;

@interface VoipMinimizeWindow : MMUIWindow <MultitalkMinimizeViewControllerDelegate> {
	BOOL m_isMinimizeMode;
	SequenceAnimationObject* m_animationObject;
	VoipMinimizeViewController* m_viewController;
	id<VoipMinimizeWindowDelegate> _m_delegate;
	SequenceAnimationObject* _m_animationObjectForAlpha;
	int _m_startOrientation;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int m_startOrientation;
@property(assign, nonatomic) BOOL m_isMinimizeMode;
@property(retain, nonatomic) VoipMinimizeViewController* m_viewController;
@property(retain, nonatomic) SequenceAnimationObject* m_animationObjectForAlpha;
@property(retain, nonatomic) SequenceAnimationObject* m_animationObject;
@property(assign, nonatomic) __weak id<VoipMinimizeWindowDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onMultitalkMinimizeViewControllerTap;
-(CGRect)fullScreenRect;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)showMinimizeWindow;
-(void)hideMinimizeWindow;
-(BOOL)isAudioMode;
-(CGRect)vaildFrame;
-(void)showGrayDesc:(id)desc;
-(void)showGreenDesc:(id)desc;
-(void)startTimer;
-(BOOL)isMinimizeMode;
-(void)setBackgroundColor:(id)color;
-(id)init;
@end

