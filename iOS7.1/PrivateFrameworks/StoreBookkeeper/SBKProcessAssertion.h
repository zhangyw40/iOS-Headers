//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface SBKProcessAssertion : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _expirationBlock;
    unsigned int _identifier;
    BKSProcessAssertion *_bkProcessAssertion;
    id _expirationObserver;
}

@property(retain) id expirationObserver; // @synthesize expirationObserver=_expirationObserver;
@property(readonly) unsigned int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_expireBackgroundTask;
@property(retain) BKSProcessAssertion *bkProcessAssertion; // @synthesize bkProcessAssertion=_bkProcessAssertion;
- (void)_onQueueSetBkProcessAssertion:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithExpirationBlock:(CDUnknownBlockType)arg1 debugDescription:(id)arg2;

@end

