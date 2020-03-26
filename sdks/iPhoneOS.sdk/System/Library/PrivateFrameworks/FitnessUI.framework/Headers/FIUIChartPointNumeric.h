//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface FIUIChartPointNumeric : NSObject <FIUIChartPoint>
{
    NSDate *_xValue;
    NSNumber *_yValue;
}

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;
@property(copy, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(copy, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *maxYValue;
@property(readonly, nonatomic) NSNumber *minYValue;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;

@end
