//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBFolderControllerDelegate-Protocol.h>

@class SBIconListView, SBRootFolderController, SBViewControllerTransitionContext, UIView, UIViewPropertyAnimator;

@protocol SBRootFolderControllerDelegate <SBFolderControllerDelegate>

@optional
- (void)rootFolderController:(SBRootFolderController *)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
- (SBIconListView *)externalDockIconListViewForRootFolderController:(SBRootFolderController *)arg1;
- (void)rootFolderController:(SBRootFolderController *)arg1 willUsePropertyAnimator:(UIViewPropertyAnimator *)arg2 toTransitionToState:(long long)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 willUseTransitionContext:(SBViewControllerTransitionContext *)arg2 toTransitionToState:(long long)arg3;
- (void)rootFolderController:(SBRootFolderController *)arg1 statusBarInsetsDidChange:(UIEdgeInsets)arg2;
- (UIView *)backgroundViewForEditingDoneButtonForRootFolderController:(SBRootFolderController *)arg1;
- (UIView *)backgroundViewForDockForRootFolderController:(SBRootFolderController *)arg1;
- (double)preferredExternalDockVerticalMarginForRootFolderController:(SBRootFolderController *)arg1;
- (double)externalDockHeightForRootFolderController:(SBRootFolderController *)arg1;
- (double)maxExternalDockHeightForRootFolderController:(SBRootFolderController *)arg1;
- (double)distanceToTopOfSpotlightIconsForRootFolderController:(SBRootFolderController *)arg1;
- (void)rootFolderController:(SBRootFolderController *)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2;
- (BOOL)rootFolderControllerCanUseSeparateWindowForRotation:(SBRootFolderController *)arg1;
@end
