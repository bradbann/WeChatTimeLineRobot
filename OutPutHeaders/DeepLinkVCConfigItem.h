/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface DeepLinkVCConfigItem : XXUnknownSuperclass {
	NSString* linkName;
	unsigned actionType;
	NSString* actionName;
}
@property(retain, nonatomic) NSString* actionName;
@property(assign, nonatomic) unsigned actionType;
@property(retain, nonatomic) NSString* linkName;
+(id)genItemWithLinkName:(id)linkName actionType:(unsigned)type actionName:(id)name;
-(void).cxx_destruct;
-(id)init;
@end

