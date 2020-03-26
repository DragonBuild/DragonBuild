//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICStoreRequestContext, NSData, NSString;

@interface ICAuthorizeMachineRequest : NSObject <NSCopying>
{
    NSString *_keybagPath;
    long long _qualityOfService;
    NSString *_reason;
    ICStoreRequestContext *_requestContext;
    NSData *_tokenData;
}

@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) NSString *keybagPath; // @synthesize keybagPath=_keybagPath;
// - (void).cxx_destruct;
- (void)performWithResponseHandler:(id /* CDUnknownBlockType */)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRequestContext:(id)arg1;

@end
