/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ICertInfoMgrExt.h"
#import "LocationRetrieveDelegate.h"
#import "MMObject.h"
#import "MessageObserverDelegate.h"
#import "PBMessageObserverDelegate.h"

@class NSRecursiveLock, LocationRetriever, CLLocation, NSString, LbsContactInfoList;
@protocol SeePeopleNearByUIDelegate;

@interface SeePeopleNearByLogicController : MMObject <MessageObserverDelegate, ICertInfoMgrExt, LocationRetrieveDelegate, PBMessageObserverDelegate> {
	unsigned long m_uiEventID;
	unsigned long m_lbsEventID;
	unsigned long m_uiTryCount;
	NSRecursiveLock* m_oLock;
	LbsContactInfoList* m_lbsContactList;
	LocationRetriever* m_locationRetrieve;
	id<SeePeopleNearByUIDelegate> m_delegate;
	unsigned long m_uiCurOpCode;
	CLLocation* m_location;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CLLocation* m_location;
@property(retain, nonatomic) LocationRetriever* m_locationRetrieve;
@property(retain, nonatomic) LbsContactInfoList* m_lbsContactList;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(BOOL)CreateJoinLBSRoomEvent:(id)event;
-(void)tryJoinChatRoom;
-(void)OnUpdateCertInfo;
-(void)onSelectedWithLbsPoiItem:(id)lbsPoiItem;
-(void)onSelectedWithLbsContactInfo:(id)lbsContactInfo;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(BOOL)CreateLBSFindEvent:(id)event;
-(BOOL)CreateLBSPoiListEvent:(id)event;
-(BOOL)CreateClearLBSDataEvent;
-(void)onRetrieveLocationError:(int)error;
-(void)onRetrieveLocationTimeOut:(id)anOut;
-(void)onRetrieveLocationOK:(id)ok;
-(BOOL)clearMyLbsData;
-(void)cancelUpdateLbsContactInfo;
-(void)updateLbsContactInfo;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
-(id)init;
@end
