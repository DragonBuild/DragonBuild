//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICStoreResponseProtocol-Protocol.h>

@class ICStoreDialogResponse, ICURLBag, NSArray, NSData, NSDate, NSDictionary, NSError, NSString;

@interface ICMusicSubscriptionPlaybackResponse : NSObject <ICStoreResponseProtocol>
{
    NSDictionary *_responseDictionary;
    NSDate *_requestDate;
    ICURLBag *_urlBag;
}

// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *metricsDictionary;
@property(readonly, copy, nonatomic) NSData *subscriptionKeyBagData;
@property(readonly, copy, nonatomic) NSError *serverError;
@property(readonly, copy, nonatomic) NSData *leaseInfoData;
- (id)itemWithStoreAdamID:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *items;
@property(readonly, copy, nonatomic) NSDate *leaseExpirationDate;
@property(readonly, copy, nonatomic) NSString *householdID;
@property(readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3;

@end
