//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (ADCoreExtensions)
+ (int)minServerTime;
+ (int)maxServerTime;
+ (id)dateFromServerTime:(int)arg1;
- (id)doubleDateTimeAsString;
- (id)universalDateTimeAsString;
- (id)localDateTimeAsString;
- (int)toServerTime;
@end
