/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface MSPauseManager : NSObject
{
    NSMutableDictionary *_UUIDToTimerMap;
    id <MSPauseManagerDelegate> _delegate;
}

+ (id)sharedManager;
@property(nonatomic) id <MSPauseManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unpauseUUID:(id)arg1;
- (void)_timerDidFire:(id)arg1;
- (void)_removeTimerUUID:(id)arg1;
- (void)pingPauseUUID:(id)arg1;
- (void)_addPauseUUID:(id)arg1;
- (BOOL)isPaused;
- (void)dealloc;
- (id)init;

@end

