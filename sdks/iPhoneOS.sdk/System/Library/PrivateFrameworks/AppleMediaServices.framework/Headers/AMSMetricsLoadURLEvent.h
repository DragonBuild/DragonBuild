//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSArray, NSString;

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent
{
}

+ (double)_timingDataMetricToServerTimeInterval:(id)arg1;
+ (id)_resolvedIPAddressFromTask:(id)arg1;
+ (double)_randomDouble;
+ (id)_metricsDictionaryFromConfig:(id)arg1;
+ (id)_fetchNetworkQualityReports;
+ (id)_DNSServerIPAddresses;
+ (BOOL)shouldCollectMetricsForContext:(id)arg1;
@property(retain, nonatomic) NSString *xxdc;
@property(nonatomic) double xpSamplingPercentageCachedResponses;
@property(nonatomic) double xpSamplingPercentageUsers;
@property(nonatomic) BOOL xpSamplingForced;
@property(nonatomic) double xpSessionDuration;
@property(retain, nonatomic) NSString *wt;
@property(nonatomic) BOOL TLSSessionTickets;
@property(retain, nonatomic) NSString *TIDState;
@property(nonatomic) BOOL TFOEnabled;
@property(nonatomic) long long statusCode;
@property(nonatomic) double secureConnectionStartTime;
@property(nonatomic) double responseStartTime;
@property(nonatomic) NSUInteger responseMessageSize;
@property(nonatomic) double responseEndTime;
@property(retain, nonatomic) NSString *responseDate;
@property(retain, nonatomic) NSString *resolvedIPAddress;
@property(retain, nonatomic) NSString *requestURL;
@property(nonatomic) NSUInteger requestMessageSize;
@property(nonatomic) double requestStartTime;
@property(nonatomic) double redirectStartTime;
@property(nonatomic) double redirectEndTime;
@property(nonatomic) NSUInteger redirectCount;
@property(retain, nonatomic) NSString *radioType;
@property(retain, nonatomic) NSString *radioTechnology;
@property(retain, nonatomic) NSString *originalApp;
@property(retain, nonatomic) NSArray *networkQualityReports;
@property(nonatomic) double fetchStartTime;
@property(retain, nonatomic) NSString *environmentDataCenter;
@property(retain, nonatomic) NSString *edgeNodeCacheStatus;
@property(nonatomic) double domainLookupStartTime;
@property(nonatomic) double domainLookupEndTime;
@property(retain, nonatomic) NSString *DNSServers;
@property(retain, nonatomic) NSString *connectionType;
@property(nonatomic) double connectionStartTime;
@property(nonatomic) NSUInteger connectionStopNStatTXBytes;
@property(nonatomic) NSUInteger connectionStopNStatRXBytes;
@property(nonatomic) NSUInteger connectionStartNStatTXBytes;
@property(nonatomic) NSUInteger connectionStartNStatRXBytes;
@property(nonatomic) BOOL connectionReused;
@property(retain, nonatomic) NSString *connectionInterface;
@property(nonatomic) double connectionEndTime;
@property(retain, nonatomic) NSString *clientError;
@property(retain, nonatomic) NSString *clientCorrelationKey;
@property(nonatomic) BOOL cachedResponse;
@property(nonatomic) BOOL apsRelaySucceeded;
@property(nonatomic) BOOL apsRelayDidFallback;
@property(nonatomic) BOOL apsRelayAttempted;
@property(retain, nonatomic) NSString *appleTimingApp;
- (void)_prepareEventWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
