//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_interpretedCategory;
    NSString *_matchedDisplayName;
    NSString *_normalizedQuery;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    BOOL _isDefaultName;
    struct {
        unsigned int has_isDefaultName:1;
        unsigned int read_unknownFields:1;
        unsigned int read_interpretedCategory:1;
        unsigned int read_matchedDisplayName:1;
        unsigned int read_normalizedQuery:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_interpretedCategory:1;
        unsigned int wrote_matchedDisplayName:1;
        unsigned int wrote_normalizedQuery:1;
        unsigned int wrote_isDefaultName:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *interpretedCategory;
@property(readonly, nonatomic) BOOL hasInterpretedCategory;
- (void)_readInterpretedCategory;
@property(retain, nonatomic) NSString *normalizedQuery;
@property(readonly, nonatomic) BOOL hasNormalizedQuery;
- (void)_readNormalizedQuery;
@property(nonatomic) BOOL hasIsDefaultName;
@property(nonatomic) BOOL isDefaultName;
@property(retain, nonatomic) NSString *matchedDisplayName;
@property(readonly, nonatomic) BOOL hasMatchedDisplayName;
- (void)_readMatchedDisplayName;
- (id)initWithData:(id)arg1;
- (id)init;

@end
