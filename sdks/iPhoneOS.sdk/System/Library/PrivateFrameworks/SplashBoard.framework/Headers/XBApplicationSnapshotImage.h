//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage
{
    XBApplicationSnapshot *_snapshot;
    long long _interfaceOrientation;
}

@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
// - (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;

@end
