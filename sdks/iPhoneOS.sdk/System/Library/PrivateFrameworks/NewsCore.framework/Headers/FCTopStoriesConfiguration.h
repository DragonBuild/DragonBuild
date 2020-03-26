//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, NTPBTopStoriesConfig;

@interface FCTopStoriesConfiguration : NSObject <NSCopying>
{
    NTPBTopStoriesConfig *_pbConfig;
    NSDictionary *_configDict;
    BOOL _promotingEnabled;
    NSString *_channelID;
    NSDictionary *_styleConfigurations;
    long long _storyTypeTimeout;
}

@property(readonly, nonatomic) long long storyTypeTimeout; // @synthesize storyTypeTimeout=_storyTypeTimeout;
@property(readonly, nonatomic) NSDictionary *styleConfigurations; // @synthesize styleConfigurations=_styleConfigurations;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, nonatomic, getter=isPromotingEnabled) BOOL promotingEnabled; // @synthesize promotingEnabled=_promotingEnabled;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBTopStoriesConfig:(id)arg1;

@end
