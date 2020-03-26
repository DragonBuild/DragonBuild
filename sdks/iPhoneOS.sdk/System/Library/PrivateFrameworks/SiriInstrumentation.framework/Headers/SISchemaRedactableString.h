//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaRedactableString : PBCodable
{
    int _redactionState;
    NSUInteger _which_String;
    NSString *_value;
}

@property(readonly, nonatomic) NSUInteger which_String; // @synthesize which_String=_which_String;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) int redactionState; // @synthesize redactionState=_redactionState;

@end
