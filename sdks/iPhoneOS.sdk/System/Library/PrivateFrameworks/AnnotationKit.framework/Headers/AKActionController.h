//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController;

@interface AKActionController : NSObject
{
    AKController *_controller;
}

@property __weak AKController *controller; // @synthesize controller=_controller;
// - (void).cxx_destruct;
- (BOOL)validateSender:(id)arg1 segment:(long long)arg2;
- (BOOL)validateSender:(id)arg1;
- (BOOL)_isSenderEnabled:(id)arg1 segment:(long long)arg2;
- (BOOL)isSenderEnabled:(id)arg1;
- (void)performActionForSender:(id)arg1 segment:(long long)arg2;
- (void)performActionForSender:(id)arg1;
- (id)initWithController:(id)arg1;

@end
