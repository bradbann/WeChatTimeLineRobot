/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ILBSLifeMgrExt <NSObject>
-(void)OnAutoSearchLBSLife:(id)life Keyword:(id)keyword NextQueryInterval:(double)interval Error:(int)error IsStartFromFirst:(BOOL)first;
-(void)OnSearchLBSLife:(id)life Keyword:(id)keyword Error:(int)error IsStartFromFirst:(BOOL)first;
-(void)OnGetLBSLife:(id)life Error:(int)error;
@end

