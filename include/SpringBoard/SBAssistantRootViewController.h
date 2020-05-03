//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBFluidGestureDismissable-Protocol.h>

@class SBFHomeGrabberSettings, SBFluidDismissalState, SBHomeGrabberView, SBKeyboardHomeAffordanceAssertion, SiriPresentationSpringBoardMainScreenViewController, UIScreen, UIView;

@interface SBAssistantRootViewController : UIViewController <SBFluidGestureDismissable>
{
    SiriPresentationSpringBoardMainScreenViewController *_assistantViewController;
    UIView *_contentView;
    UIView *_clippingView;
    SBFluidDismissalState *_fluidDismissalState;
    UIScreen *_screen;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    BOOL _keyboardPresented;
    BOOL _keyboardStashed;
    BOOL _ownsHomeGesture;
    SBHomeGrabberView *_homeAffordanceView;
}

@property(retain, nonatomic) SBHomeGrabberView *homeAffordanceView; // @synthesize homeAffordanceView=_homeAffordanceView;
@property(nonatomic) BOOL ownsHomeGesture; // @synthesize ownsHomeGesture=_ownsHomeGesture;
@property(retain, nonatomic) SiriPresentationSpringBoardMainScreenViewController *assistantController; // @synthesize assistantController=_assistantViewController;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_updateKeyboardForHomeGesture;
- (void)_updateHomeAffordance;
- (BOOL)_canShowWhileLocked;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (NSUInteger)supportedInterfaceOrientations;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)wantsFullScreenLayout;
- (void)viewWillLayoutSubviews;
- (void)loadView;
@property(readonly, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
- (id)initWithScreen:(id)arg1;
@property(retain, nonatomic) SBFluidDismissalState *fluidDismissalState;

@end
