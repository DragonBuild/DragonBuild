//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface CLKDate : NSDate
{
}

+ (id)unmodifiedDate;
+ (id)complicationDate;
+ (id)unmodifiedDateWithTimeIntervalSinceNow:(double)arg1;
+ (id)complicationDateWithTimeIntervalSinceNow:(double)arg1;
+ (double)timeIntervalSinceReferenceDate;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)date;
- (double)timeIntervalSinceNow;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)init;

@end
