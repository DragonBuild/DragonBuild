//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAStructuredDictationFailed : SABaseClientBoundCommand
{
}

+ (id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)structuredDictationFailed;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *userFacingReasonTitle;
@property(copy, nonatomic) NSString *userFacingReasonDescription;
@property(copy, nonatomic) NSString *recognition;
@property(nonatomic) long long errorCode;
@property(copy, nonatomic) NSString *dialogIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
