//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKObject.h>

#import <CoreDuet/_DKHasComparableValue-Protocol.h>
#import <CoreDuet/_DKHasObjectType-Protocol.h>
#import <CoreDuet/_DKHasPrimaryValue-Protocol.h>

@class NSString, _DKQuantityType;

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>
{
    double _doubleValue;
    _DKQuantityType *_quantityType;
}

+ (BOOL)supportsSecureCoding;
+ (id)quantityWithDouble:(double)arg1 type:(id)arg2;
+ (id)fromPBCodable:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3;
+ (id)entityName;
@property(retain) _DKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property double doubleValue; // @synthesize doubleValue=_doubleValue;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)stringValue;
- (id)primaryValue;
- (long long)compareValue:(id)arg1;
- (id)objectType;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1 type:(id)arg2;
- (id)toPBCodable;
- (BOOL)copyToManagedObject:(id)arg1;
- (long long)typeCode;

@end
