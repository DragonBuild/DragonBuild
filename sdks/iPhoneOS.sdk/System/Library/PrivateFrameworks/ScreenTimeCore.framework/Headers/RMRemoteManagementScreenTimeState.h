//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface RMRemoteManagementScreenTimeState : PBCodable <NSCopying>
{
    struct {
        NSUInteger list;
        NSUInteger count;
        NSUInteger size;
    } _daysSinceCreationDates;
    NSUInteger _alwaysAllowedAppsCount;
    NSUInteger _daysWithScreenTimeEnabled;
    NSUInteger _numberOfLimits;
    NSUInteger _timestamp;
    NSString *_familyMemberType;
    NSMutableArray *_limitedCategories;
    BOOL _contentPrivacyRestrictionsEnabled;
    BOOL _customDowntimeEnabled;
    BOOL _downtimeEnabled;
    BOOL _hasPasscode;
    BOOL _isManaged;
    BOOL _isManaging;
    BOOL _screenTimeEnabled;
    struct {
        unsigned int alwaysAllowedAppsCount:1;
        unsigned int daysWithScreenTimeEnabled:1;
        unsigned int numberOfLimits:1;
        unsigned int timestamp:1;
        unsigned int contentPrivacyRestrictionsEnabled:1;
        unsigned int customDowntimeEnabled:1;
        unsigned int downtimeEnabled:1;
        unsigned int hasPasscode:1;
        unsigned int isManaged:1;
        unsigned int isManaging:1;
        unsigned int screenTimeEnabled:1;
    } _has;
}

+ (Class)limitedCategoriesType;
@property(nonatomic) BOOL contentPrivacyRestrictionsEnabled; // @synthesize contentPrivacyRestrictionsEnabled=_contentPrivacyRestrictionsEnabled;
@property(nonatomic) NSUInteger alwaysAllowedAppsCount; // @synthesize alwaysAllowedAppsCount=_alwaysAllowedAppsCount;
@property(retain, nonatomic) NSMutableArray *limitedCategories; // @synthesize limitedCategories=_limitedCategories;
@property(nonatomic) NSUInteger numberOfLimits; // @synthesize numberOfLimits=_numberOfLimits;
@property(nonatomic) BOOL customDowntimeEnabled; // @synthesize customDowntimeEnabled=_customDowntimeEnabled;
@property(nonatomic) BOOL downtimeEnabled; // @synthesize downtimeEnabled=_downtimeEnabled;
@property(nonatomic) BOOL hasPasscode; // @synthesize hasPasscode=_hasPasscode;
@property(nonatomic) BOOL isManaging; // @synthesize isManaging=_isManaging;
@property(nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
@property(retain, nonatomic) NSString *familyMemberType; // @synthesize familyMemberType=_familyMemberType;
@property(nonatomic) NSUInteger daysWithScreenTimeEnabled; // @synthesize daysWithScreenTimeEnabled=_daysWithScreenTimeEnabled;
@property(nonatomic) BOOL screenTimeEnabled; // @synthesize screenTimeEnabled=_screenTimeEnabled;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasContentPrivacyRestrictionsEnabled;
@property(nonatomic) BOOL hasAlwaysAllowedAppsCount;
- (void)setDaysSinceCreationDates:(NSUInteger )arg1 count:(NSUInteger)arg2;
- (NSUInteger)daysSinceCreationDateAtIndex:(NSUInteger)arg1;
- (void)addDaysSinceCreationDate:(NSUInteger)arg1;
- (void)clearDaysSinceCreationDates;
@property(readonly, nonatomic) NSUInteger daysSinceCreationDates;
@property(readonly, nonatomic) NSUInteger daysSinceCreationDatesCount;
- (id)limitedCategoriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)limitedCategoriesCount;
- (void)addLimitedCategories:(id)arg1;
- (void)clearLimitedCategories;
@property(nonatomic) BOOL hasNumberOfLimits;
@property(nonatomic) BOOL hasCustomDowntimeEnabled;
@property(nonatomic) BOOL hasDowntimeEnabled;
@property(nonatomic) BOOL hasHasPasscode;
@property(nonatomic) BOOL hasIsManaging;
@property(nonatomic) BOOL hasIsManaged;
@property(readonly, nonatomic) BOOL hasFamilyMemberType;
@property(nonatomic) BOOL hasDaysWithScreenTimeEnabled;
@property(nonatomic) BOOL hasScreenTimeEnabled;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end
