/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class NSString;

@interface GKShowSettingsRequest : GKDataRequest
{
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (BOOL)authenticationRequired;
- (id)request;
- (id)key;
- (void)dealloc;

@end

