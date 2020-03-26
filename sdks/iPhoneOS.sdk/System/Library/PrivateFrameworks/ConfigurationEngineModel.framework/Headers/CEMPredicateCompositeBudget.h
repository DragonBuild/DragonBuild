//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPredicateBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMPredicateCompositeBudget_Monitors, NSArray, NSString;

@interface CEMPredicateCompositeBudget : CEMPredicateBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCalendarIdentifier;
    CEMPredicateCompositeBudget_Monitors *_payloadMonitors;
    NSArray *_payloadNotificationTimes;
    NSArray *_payloadTimeBudget;
}

+ (id)buildRequiredOnlyWithMonitors:(id)arg1 withTimeBudget:(id)arg2;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitors:(id)arg2 withNotificationTimes:(id)arg3 withTimeBudget:(id)arg4;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadTimeBudget; // @synthesize payloadTimeBudget=_payloadTimeBudget;
@property(copy, nonatomic) NSArray *payloadNotificationTimes; // @synthesize payloadNotificationTimes=_payloadNotificationTimes;
@property(copy, nonatomic) CEMPredicateCompositeBudget_Monitors *payloadMonitors; // @synthesize payloadMonitors=_payloadMonitors;
@property(copy, nonatomic) NSString *payloadCalendarIdentifier; // @synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end
