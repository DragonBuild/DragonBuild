//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBCrossblurDosidoSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    NSUInteger _direction;
}

// - (void).cxx_destruct;
- (BOOL)_isToAppLayoutAtIndex:(NSUInteger)arg1;
- (BOOL)_isFromAppLayoutAtIndex:(NSUInteger)arg1;
- (id)opacitySettings;
- (id)layoutSettings;
- (NSUInteger)numberOfAppLayoutsToCacheSnapshots;
- (id)topMostAppLayouts;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (UIRectCornerRadii)cardCornerRadiiForIndex:(NSUInteger)arg1;
- (double)opacityForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)transitionDidEnd;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double )arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 direction:(NSUInteger)arg4;

@end
