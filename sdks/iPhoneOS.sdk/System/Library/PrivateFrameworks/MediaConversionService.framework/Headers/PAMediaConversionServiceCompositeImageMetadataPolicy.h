//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSArray;

@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    NSArray *_policies;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithPolicies:(id)arg1;
@property(retain) NSArray *policies; // @synthesize policies=_policies;
// - (void).cxx_destruct;
- (id)processMetadata:(id)arg1;
- (BOOL)metadataNeedsProcessing:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
