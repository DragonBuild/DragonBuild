//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class HUQuickControlViewController;

@interface HUQuickControlCollectionViewCellContainerViewController : UIViewController
{
    NSUInteger _titlePosition;
    HUQuickControlViewController *_contentViewController;
    UIEdgeInsets _preferredContentLayoutFrameInset;
}

+ (id)intrinsicSizeDescriptorControlSizeDescriptor:(id)arg1 titlePosition:(NSUInteger)arg2;
@property(readonly, nonatomic) HUQuickControlViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) UIEdgeInsets preferredContentLayoutFrameInset; // @synthesize preferredContentLayoutFrameInset=_preferredContentLayoutFrameInset;
@property(nonatomic) NSUInteger titlePosition; // @synthesize titlePosition=_titlePosition;
// - (void).cxx_destruct;
- (id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (id)initWithContentViewController:(id)arg1;

@end
