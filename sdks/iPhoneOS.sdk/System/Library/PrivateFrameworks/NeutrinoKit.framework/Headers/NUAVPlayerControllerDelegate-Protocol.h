//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NUAVPlayerController;

@protocol NUAVPlayerControllerDelegate <NSObject>
- (void)playerController:(NUAVPlayerController *)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3;
- (void)playerControllerDidFinishPlaying:(NUAVPlayerController *)arg1 duration:(double)arg2;
- (void)playerControllerIsReadyForPlayback:(NUAVPlayerController *)arg1;
@end
