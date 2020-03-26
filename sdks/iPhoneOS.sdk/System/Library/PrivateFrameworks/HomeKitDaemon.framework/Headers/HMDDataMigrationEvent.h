//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitDataModelMigration;

@interface HMDDataMigrationEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitDataModelMigration *_metric;
    NSUInteger _migrationStart;
    NSUInteger _migrationEnd;
}

+ (id)uuid;
@property(readonly, nonatomic) NSUInteger migrationEnd; // @synthesize migrationEnd=_migrationEnd;
@property(readonly, nonatomic) NSUInteger migrationStart; // @synthesize migrationStart=_migrationStart;
@property(readonly, nonatomic) AWDHomeKitDataModelMigration *metric; // @synthesize metric=_metric;
// - (void).cxx_destruct;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (NSUInteger)migrationDurationInMilliseconds;
- (void)migrationCompleted;
- (id)init;

@end
