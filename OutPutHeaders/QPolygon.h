/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "QOverlay.h"
#import "QMultiPoint.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QPolygon : QMultiPoint <QOverlay> {
}
@property(readonly, assign, nonatomic) XXStruct_Yvvv9D boundingMapRect;
@property(readonly, assign, nonatomic) XXStruct_gLbvpC coordinate;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)polygonWithPoints:(XXStruct_gLbvpC*)points count:(unsigned)count;
+(id)polygonWithCoordinates:(XXStruct_gLbvpC*)coordinates count:(unsigned)count;
-(id)initWithPoints:(XXStruct_gLbvpC*)points count:(unsigned)count;
-(id)initWithWithCoordinates:(XXStruct_gLbvpC*)coordinates count:(unsigned)count;
@end

