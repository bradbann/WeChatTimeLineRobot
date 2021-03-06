/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, BaseResponse;

@interface HardDeviceAuthResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned cryptMethod;
@property(assign, nonatomic) unsigned blockTimeout;
@property(assign, nonatomic) unsigned cacheTimeout;
@property(retain, nonatomic) SKBuiltinBuffer_t* keyBuffer;
@property(retain, nonatomic) SKBuiltinBuffer_t* sessionBuffer;
@property(retain, nonatomic) SKBuiltinBuffer_t* sessionKey;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

