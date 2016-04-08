/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString;

@interface ContactExtendCodePB : XXUnknownSuperclass <PBCoding> {
	NSString* remark;
	NSString* remarkPYFull;
	unsigned long conType;
	unsigned long certificationFlag;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long certificationFlag;
@property(assign, nonatomic) unsigned long conType;
@property(retain, nonatomic) NSString* remarkPYFull;
@property(retain, nonatomic) NSString* remark;
+(void)initialize;
-(void).cxx_destruct;
-(bool)decodeFromData:(id)data;
-(id)encodeData;
-(id)initWithContact:(id)contact;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end
