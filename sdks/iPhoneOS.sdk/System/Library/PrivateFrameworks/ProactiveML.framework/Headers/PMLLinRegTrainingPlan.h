//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLLinRegTrackerProtocol, PMLNoiseStrategy;

@interface PMLLinRegTrainingPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    id <PMLLinRegTrackerProtocol> _tracker;
    id <PMLNoiseStrategy> _noiseStrategy;
    double _skew;
    NSUInteger _positiveLabel;
    PMLSessionDescriptor *_sessionDescriptor;
    NSUInteger _maxSessionsLimit;
    NSUInteger _sessionsInBatch;
    BOOL _useOnlyAppleInternalSessions;
    NSString _planId;
}

+ (id)_objectiveFeaturesWithNoiseFromCovariates:(id)arg1 objectives:(id)arg2;
+ (id)featureMatrixWithNoiseFromCovariates:(id)arg1;
@property(readonly, nonatomic) BOOL useOnlyAppleInternalSessions; // @synthesize useOnlyAppleInternalSessions=_useOnlyAppleInternalSessions;
@property(readonly, nonatomic) NSUInteger maxSessionsLimit; // @synthesize maxSessionsLimit=_maxSessionsLimit;
@property(readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
@property(readonly, nonatomic) id <PMLLinRegTrackerProtocol> tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) PMLTrainingStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
// - (void).cxx_destruct;
- (void)runUntilDoneForTesting;
- (id)runWhile:(id /* CDUnknownBlockType */)arg1 didFinish:(BOOL )arg2;
@property(readonly, copy) NSString *description;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)normalizeRegressor:(id)arg1;
- (void)loadSessionsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)train;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(NSString )arg4 positiveLabel:(NSUInteger)arg5 skew:(double)arg6 sessionDescriptor:(id)arg7 maxSessionsLimit:(NSUInteger)arg8 sessionsInBatch:(NSUInteger)arg9 useOnlyAppleInternalSessions:(BOOL)arg10;
- (id)init;

@end
