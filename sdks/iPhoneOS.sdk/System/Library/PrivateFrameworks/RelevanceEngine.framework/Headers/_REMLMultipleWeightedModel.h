//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/_REMLWeightedModel.h>

#import <RelevanceEngine/_REMLMultipleWeightedModelProperties-Protocol.h>

@class NSDictionary, NSMutableDictionary, REFeature, REFeatureSet;

@interface _REMLMultipleWeightedModel : _REMLWeightedModel <_REMLMultipleWeightedModelProperties>
{
    REFeature *_identificationFeature;
    REFeatureSet *_featureSet;
    float _priorMean;
    float _varianceEpsilon;
    NSMutableDictionary *_models;
//     struct os_unfair_lock_s _lock;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *models;
- (BOOL)loadModelFromURL:(id)arg1 error:(id )arg2;
- (BOOL)saveModelToURL:(id)arg1 error:(id )arg2;
- (id)predictWithFeatures:(id)arg1;
- (void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2;
- (id)_modelForKey:(id)arg1;
- (id)_modelForFeatureMap:(id)arg1;
- (void)enumerateModels:(id /* CDUnknownBlockType */)arg1;
- (id)initWithFeature:(id)arg1 featureSet:(id)arg2 priorMean:(float)arg3 biasFeature:(id)arg4 modelVarianceEpsilon:(float)arg5;

@end
