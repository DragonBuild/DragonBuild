//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGCoordinatableSuggester-Protocol.h>

@class NSArray, NSEnumerator, NSMutableDictionary, PGSuggestionOptions, PLPhotoEditPersistenceManager, PLPhotoEffect;

@interface PGStudioLightSuggester : PGAbstractSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
    PLPhotoEditPersistenceManager *_photoEditPersistenceManager;
    NSMutableDictionary *_compositionControllerByAssetUUID;
    NSMutableDictionary *_assetMasterSizeByAssetUUID;
    PLPhotoEffect *_studioLightPhotoEffect;
    NSMutableDictionary *_recipeReasonByAssetUUID;
}

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
// - (void).cxx_destruct;
- (id)reasonsForSuggestion:(id)arg1;
- (id)suggestionWithAsset:(id)arg1;
- (id)studioLightRecipeWithAsset:(id)arg1;
- (id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2;
- (id)suggestedAssetsInAssets:(id)arg1;
- (id)compositionControllerForAsset:(id)arg1 baseVersion:(out long long )arg2;
- (id)portraitsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (void)reset;
- (id)nextSuggestion;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* CDUnknownBlockType */)arg2;
- (id)initWithSession:(id)arg1;

@end
