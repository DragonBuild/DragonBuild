//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal
{
    NSString *_reason;
    NSString *_reason2;
    unsigned int _rid;
    int _source;
}

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) unsigned int rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSString *reason2; // @synthesize reason2=_reason2;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (int)defaultFamiliarity;
- (void)dealloc;

@end
