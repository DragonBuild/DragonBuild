//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying>
{
    int _placeLevel;
    NSString *_placeName;
}

@property(retain, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(nonatomic) int placeLevel; // @synthesize placeLevel=_placeLevel;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)init;

@end
