//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError;

@protocol CTCellularPlanClientDelegate <NSObject>
- (void)subscriptionDetailsRequestDidFail:(NSError *)arg1;
- (void)subscriptionDetailsForCompletion:(NSArray *)arg1;
- (void)subscriptionDetailsDidUpdate:(NSArray *)arg1;
@end
