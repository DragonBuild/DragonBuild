//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerPropertiesProtobuf;

@interface MRGameControllerPropertiesMessage : MRProtocolMessage
{
}

- (NSUInteger)type;
@property(readonly, nonatomic) NSUInteger controllerID;
@property(readonly, nonatomic) _MRGameControllerPropertiesProtobuf *properties;
- (id)initWithGameControllerProperties:(id)arg1 controllerID:(NSUInteger)arg2;

@end
