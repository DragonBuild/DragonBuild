//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PBMutableData;

@interface PBDataWriter : NSObject
{
    PBMutableData *_data;
}

- (void)writeTag:(unsigned int)arg1 andType:(unsigned char)arg2;
- (void)writeBareVarint:(NSUInteger)arg1;
- (void)writeUint8:(unsigned char)arg1;
- (void)writeInt8:(BOOL)arg1;
- (void)writeProtoBuffer:(id)arg1;
- (void)writeBigEndianShortThenString:(id)arg1;
- (void)writeBigEndianFixed32:(unsigned int)arg1;
- (void)writeBigEndianFixed16:(unsigned short)arg1;
- (BOOL)writeData:(id)arg1;
- (NSUInteger)write:(const char )arg1 maxLength:(NSUInteger)arg2;
- (void)writeData:(id)arg1 forTag:(unsigned int)arg2;
- (void)writeString:(id)arg1 forTag:(unsigned int)arg2;
- (void)writeSfixed64:(long long)arg1 forTag:(unsigned int)arg2;
- (void)writeSfixed32:(int)arg1 forTag:(unsigned int)arg2;
- (void)writeFixed64:(NSUInteger)arg1 forTag:(unsigned int)arg2;
- (void)writeFixed32:(unsigned int)arg1 forTag:(unsigned int)arg2;
- (void)writeFloat:(float)arg1 forTag:(unsigned int)arg2;
- (void)writeDouble:(double)arg1 forTag:(unsigned int)arg2;
- (void)writeSint64:(long long)arg1 forTag:(unsigned int)arg2;
- (void)writeSint32:(int)arg1 forTag:(unsigned int)arg2;
- (void)writeBOOL:(BOOL)arg1 forTag:(unsigned int)arg2;
- (void)writeUint64:(NSUInteger)arg1 forTag:(unsigned int)arg2;
- (void)writeUint32:(unsigned int)arg1 forTag:(unsigned int)arg2;
- (void)writeInt64:(long long)arg1 forTag:(unsigned int)arg2;
- (void)writeInt32:(int)arg1 forTag:(unsigned int)arg2;
- (id)immutableData;
- (id)data;
- (void)dealloc;
- (id)init;

@end
