//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@protocol SXViewControllerPresenting;

@interface SXCloseActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXViewControllerPresenting> _viewControllerPresenting;
}

@property(readonly, nonatomic) id <SXViewControllerPresenting> viewControllerPresenting; // @synthesize viewControllerPresenting=_viewControllerPresenting;
// - (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithViewControllerPresenting:(id)arg1;

@end
