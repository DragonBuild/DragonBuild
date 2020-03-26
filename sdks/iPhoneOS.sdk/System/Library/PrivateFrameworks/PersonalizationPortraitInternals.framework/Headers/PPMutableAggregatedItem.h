//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDate, NSMutableSet, PPU16CountedSet;

@interface PPMutableAggregatedItem : NSObject
{
    float _maxScore;
    float _minScore;
    float _sumScore;
    unsigned int _sumDwellTimeInSeconds;
    unsigned int _recordCount;
    float _sumOfSourceDateInHours;
    float _sumOfSquaredSourceDateInHours;
    float _sumOfSquaredInterArrivalHours;
    float _decayedSum;
    float _decayRate;
    PPU16CountedSet *_algorithmCountedSet;
    PPU16CountedSet *_rankHistogram;
    NSMutableSet *_osBuildSet;
    NSMutableSet *_assetVersionSet;
    NSCountedSet *_bundleIdCountedSet;
    NSMutableSet *_groupIdSet;
    PPU16CountedSet *_sourceHourCountedSet;
    PPU16CountedSet *_sourceDayOfWeekCountedSet;
    NSDate *_maxSourceDate;
    NSDate *_minSourceDate;
}

+ (float)_decay:(float)arg1 decayRate:(float)arg2 timeElapsedSeconds:(double)arg3;
@property(readonly, nonatomic) float decayRate; // @synthesize decayRate=_decayRate;
@property(readonly, nonatomic) float decayedSum; // @synthesize decayedSum=_decayedSum;
@property(readonly, nonatomic) float sumOfSquaredInterArrivalHours; // @synthesize sumOfSquaredInterArrivalHours=_sumOfSquaredInterArrivalHours;
@property(readonly, nonatomic) float sumOfSquaredSourceDateInHours; // @synthesize sumOfSquaredSourceDateInHours=_sumOfSquaredSourceDateInHours;
@property(readonly, nonatomic) float sumOfSourceDateInHours; // @synthesize sumOfSourceDateInHours=_sumOfSourceDateInHours;
@property(readonly, nonatomic) NSDate *minSourceDate; // @synthesize minSourceDate=_minSourceDate;
@property(readonly, nonatomic) NSDate *maxSourceDate; // @synthesize maxSourceDate=_maxSourceDate;
@property(readonly, nonatomic) PPU16CountedSet *sourceDayOfWeekCountedSet; // @synthesize sourceDayOfWeekCountedSet=_sourceDayOfWeekCountedSet;
@property(readonly, nonatomic) PPU16CountedSet *sourceHourCountedSet; // @synthesize sourceHourCountedSet=_sourceHourCountedSet;
@property(readonly, nonatomic) NSMutableSet *groupIdSet; // @synthesize groupIdSet=_groupIdSet;
@property(readonly, nonatomic) NSCountedSet *bundleIdCountedSet; // @synthesize bundleIdCountedSet=_bundleIdCountedSet;
@property(readonly, nonatomic) NSMutableSet *assetVersionSet; // @synthesize assetVersionSet=_assetVersionSet;
@property(readonly, nonatomic) NSMutableSet *osBuildSet; // @synthesize osBuildSet=_osBuildSet;
@property(readonly, nonatomic) unsigned int recordCount; // @synthesize recordCount=_recordCount;
@property(readonly, nonatomic) unsigned int sumDwellTimeInSeconds; // @synthesize sumDwellTimeInSeconds=_sumDwellTimeInSeconds;
@property(readonly, nonatomic) PPU16CountedSet *rankHistogram; // @synthesize rankHistogram=_rankHistogram;
@property(readonly, nonatomic) float sumScore; // @synthesize sumScore=_sumScore;
@property(readonly, nonatomic) float minScore; // @synthesize minScore=_minScore;
@property(readonly, nonatomic) float maxScore; // @synthesize maxScore=_maxScore;
@property(readonly, nonatomic) PPU16CountedSet *algorithmCountedSet; // @synthesize algorithmCountedSet=_algorithmCountedSet;
// - (void).cxx_destruct;
- (NSUInteger)_processTopicRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 ignoreMultiplier:(BOOL)arg4;
- (id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ignoreMultiplier:(BOOL)arg5;
- (id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sorted:(BOOL)arg4;
- (NSUInteger)_processNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 perRecordDecayRate:(float)arg4;
- (id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 perRecordDecayRate:(float)arg4 decayRate:(float)arg5;
- (id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 decayRate:(float)arg4 sorted:(BOOL)arg5;
- (NSUInteger)_processRecord:(id)arg1 algorithm:(NSUInteger)arg2 previousSourceDate:(id)arg3 scoringDate:(id)arg4 perRecordDecayRate:(float)arg5 score:(float)arg6 decayedSumAddend:(float)arg7;
- (id)_sortRecordsByDescendingSourceDate:(id)arg1;
- (void)_resetPropertiesWithAlgorithmMaxValue:(NSUInteger)arg1;

@end
