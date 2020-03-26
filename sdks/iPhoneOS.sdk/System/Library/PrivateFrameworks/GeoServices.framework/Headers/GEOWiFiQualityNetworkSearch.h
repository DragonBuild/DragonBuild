//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityNetworkSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_ess;
    GEOLocation *_location;
    NSUInteger _radius;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_radius:1;
        unsigned int read_ess:1;
        unsigned int read_location:1;
        unsigned int wrote_ess:1;
        unsigned int wrote_location:1;
        unsigned int wrote_radius:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)essType;
// - (void).cxx_destruct;
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
@property(nonatomic) BOOL hasRadius;
@property(nonatomic) NSUInteger radius;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)_readLocation;
- (id)essAtIndex:(NSUInteger)arg1;
- (NSUInteger)essCount;
- (void)_addNoFlagsEss:(id)arg1;
- (void)addEss:(id)arg1;
- (void)clearEss;
@property(retain, nonatomic) NSMutableArray *ess;
- (void)_readEss;
- (id)initWithData:(id)arg1;
- (id)init;

@end
