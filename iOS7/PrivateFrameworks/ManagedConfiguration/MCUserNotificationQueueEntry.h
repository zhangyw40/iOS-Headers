/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MCUserNotificationQueueEntry : NSObject
{
    _Bool _displayOnLockScreen;
    _Bool _displayInAppWhitelistModes;
    NSString *_title;
    NSString *_message;
    NSString *_defaultButtonText;
    NSString *_alternateButtonText;
    double _dismissAfterTimeInterval;
    id _completionBlock;
    id _notification;
}

@property(retain, nonatomic) id notification; // @synthesize notification=_notification;
@property(copy, nonatomic) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) double dismissAfterTimeInterval; // @synthesize dismissAfterTimeInterval=_dismissAfterTimeInterval;
@property(nonatomic) _Bool displayInAppWhitelistModes; // @synthesize displayInAppWhitelistModes=_displayInAppWhitelistModes;
@property(nonatomic) _Bool displayOnLockScreen; // @synthesize displayOnLockScreen=_displayOnLockScreen;
@property(retain, nonatomic) NSString *alternateButtonText; // @synthesize alternateButtonText=_alternateButtonText;
@property(retain, nonatomic) NSString *defaultButtonText; // @synthesize defaultButtonText=_defaultButtonText;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

