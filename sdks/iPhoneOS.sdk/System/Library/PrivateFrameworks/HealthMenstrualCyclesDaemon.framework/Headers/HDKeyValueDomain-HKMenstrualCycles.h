//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDKeyValueDomain.h>

@interface HDKeyValueDomain (HKMenstrualCycles)
+ (id)hdmc_menstrualCyclesDefaultsDomainWithProfile:(id)arg1;
- (id)hdmc_lastLoggedInCycleTrackingDateWithError:(id )arg1;
- (BOOL)hdmc_setLastLoggedInCycleTrackingDate:(id)arg1 error:(id )arg2;
- (id)hdmc_onboardingFirstCompletedDateWithError:(id )arg1;
- (id)hdmc_isOnboardingCompletedWithError:(id )arg1;
@end
