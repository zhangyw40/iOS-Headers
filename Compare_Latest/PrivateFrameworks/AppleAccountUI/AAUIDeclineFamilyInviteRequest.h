//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AAFamilyRequest.h"

@class NSString;

@interface AAUIDeclineFamilyInviteRequest : AAFamilyRequest
{
    NSString *_inviteCode;
}

@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (BOOL)isUserInitiated;

@end

