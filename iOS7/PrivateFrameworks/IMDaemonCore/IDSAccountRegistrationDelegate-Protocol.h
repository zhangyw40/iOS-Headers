/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IDSAccountRegistrationDelegate <NSObject>

@optional
- (void)clearCallerIDCachesForAccount:(id)arg1;
- (void)activeDevicesUpdatedForAccount:(id)arg1;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
@end
