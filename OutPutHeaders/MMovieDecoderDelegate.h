/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "NSObject.h"


@protocol MMovieDecoderDelegate <NSObject>
@optional
-(void)mMovieDecoderOnDecodeFinished:(id)finished;
-(void)mMovieDecoder:(id)decoder onNewAudioFrameReady:(opaqueCMSampleBuffer*)ready;
-(void)mMovieDecoder:(id)decoder onNewVideoFrameReady:(opaqueCMSampleBuffer*)ready;
@end
