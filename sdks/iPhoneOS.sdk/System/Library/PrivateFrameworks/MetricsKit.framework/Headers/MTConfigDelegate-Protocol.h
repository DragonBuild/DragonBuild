//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTPromise, NSArray, NSString;

@protocol MTConfigDelegate <NSObject>
- (MTPromise *)sources;

@optional
- (id)configValueForKeyPath:(NSString *)arg1 sources:(NSArray *)arg2;
@end
