//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingResponse.h>

@class SASettingAudioRoute;

@interface SASettingGetAudioRouteResponse : SASettingResponse
{
}

+ (id)getAudioRouteResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getAudioRouteResponse;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SASettingAudioRoute *audioRoute;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
