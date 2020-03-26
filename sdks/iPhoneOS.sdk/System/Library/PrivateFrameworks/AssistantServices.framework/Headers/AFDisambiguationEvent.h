//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString;

@interface AFDisambiguationEvent : NSObject <NSSecureCoding>
{
    NSString *_itemIdentifier;
    long long _selectionType;
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long selectionType; // @synthesize selectionType=_selectionType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
