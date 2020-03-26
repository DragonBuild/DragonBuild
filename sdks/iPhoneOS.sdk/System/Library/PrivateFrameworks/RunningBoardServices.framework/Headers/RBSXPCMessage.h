//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSXPCCoder, NSError, RBSXPCMessageReply;
@protocol OS_xpc_object;

@interface RBSXPCMessage : NSObject
{
    NSObject<OS_xpc_object> *_xpc_message;
    BSXPCCoder *_payload;
    SEL _method;
}

+ (id)messageForXPCMessage:(id)arg1;
+ (id)messageForMethod:(SEL)arg1 varguments:(id)arg2;
+ (id)messageForMethod:(SEL)arg1 arguments:(id)arg2;
+ (id)messageWithEncoder:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) SEL method; // @synthesize method=_method;
// - (void).cxx_destruct;
- (id)decodeArgumentCollection:(Class)arg1 withClass:(Class)arg2 atIndex:(NSUInteger)arg3 allowNil:(BOOL)arg4 error:(out id )arg5;
- (id)decodeArgumentWithClass:(Class)arg1 atIndex:(NSUInteger)arg2 allowNil:(BOOL)arg3 error:(out id )arg4;
- (id)invokeOnConnection:(id)arg1 withReturnClass:(Class)arg2 error:(out id )arg3;
- (id)invokeOnConnection:(id)arg1 withReturnCollectionClass:(Class)arg2 entryClass:(Class)arg3 error:(out id )arg4;
- (oneway void)sendToConnection:(id)arg1 replyQueue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (oneway void)sendToConnection:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)sendToConnection:(id)arg1 error:(out id )arg2;
- (oneway void)sendToConnection:(id)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) RBSXPCMessageReply *reply;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)_initWithMessage:(id)arg1;
- (id)init;

@end
