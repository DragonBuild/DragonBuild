//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;

@protocol TSKChangeSourceObserver <NSObject>

@optional
- (void)asyncProcessChanges:(NSArray *)arg1 forChangeSource:(id)arg2;
- (void)syncProcessChanges:(NSArray *)arg1 forChangeSource:(id)arg2;
@end
