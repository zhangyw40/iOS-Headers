/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<MBConnectionHandler>, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface MBConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<MBConnectionHandler> *_handler;
}

@property(nonatomic) NSObject<MBConnectionHandler> *messageHandler; // @synthesize messageHandler=_handler;
- (id)eventQueue;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (id)sendMessageWithReplyAndSync:(id)arg1 error:(id *)arg2;
- (void)sendMessage:(id)arg1;
- (void)dealloc;
- (void)_handleXPCError:(id)arg1;
- (void)_handleXPCEvent:(id)arg1;
- (void)_setEventHandlerForXPCConnection;
- (id)initWithServiceName:(id)arg1 eventQueue:(id)arg2;
- (id)initWithXPCConnection:(id)arg1 eventQueue:(id)arg2;

@end
