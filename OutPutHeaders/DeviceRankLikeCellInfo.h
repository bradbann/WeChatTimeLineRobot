/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface DeviceRankLikeCellInfo : MMObject {
	NSString* nsUserName;
	unsigned long uiScore;
	unsigned long uiRankNum;
	unsigned long uiLikeCount;
	unsigned long uiLikeState;
}
@property(assign, nonatomic) unsigned long uiLikeState;
@property(assign, nonatomic) unsigned long uiLikeCount;
@property(assign, nonatomic) unsigned long uiRankNum;
@property(assign, nonatomic) unsigned long uiScore;
@property(retain, nonatomic) NSString* nsUserName;
-(void).cxx_destruct;
@end
