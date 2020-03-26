//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate;

@interface GEORequestCounterProactiveTileDownloadPolicyInfo : NSObject <NSSecureCoding>
{
    unsigned char _policy;
    NSDate *_startTimestamp;
    NSDate *_endTimestamp;
    NSUInteger _tilesConsidered;
    NSUInteger _successCount;
    NSUInteger _failureCount;
    NSUInteger _bytesDownloaded;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(readonly, nonatomic) NSUInteger failureCount; // @synthesize failureCount=_failureCount;
@property(readonly, nonatomic) NSUInteger successCount; // @synthesize successCount=_successCount;
@property(readonly, nonatomic) NSUInteger tilesConsidered; // @synthesize tilesConsidered=_tilesConsidered;
@property(readonly, nonatomic) NSDate *endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) NSDate *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) unsigned char policy; // @synthesize policy=_policy;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicy:(unsigned char)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 tilesConsidered:(NSUInteger)arg4 successCount:(NSUInteger)arg5 failureCount:(NSUInteger)arg6 bytesDownloaded:(NSUInteger)arg7;

@end
