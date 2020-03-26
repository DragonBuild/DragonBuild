//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader, PBUnknownFields;

@interface GEOSource : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sourceId;
    NSString *_sourceName;
    NSString *_sourceVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_sourceId:1;
        unsigned int read_sourceName:1;
        unsigned int read_sourceVersion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sourceId:1;
        unsigned int wrote_sourceName:1;
        unsigned int wrote_sourceVersion:1;
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
@property(retain, nonatomic) NSString *sourceVersion;
@property(readonly, nonatomic) BOOL hasSourceVersion;
- (void)_readSourceVersion;
@property(retain, nonatomic) NSString *sourceId;
- (void)_readSourceId;
@property(retain, nonatomic) NSString *sourceName;
- (void)_readSourceName;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithAttributionID:(id)arg1;

@end
