//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject
{
    BOOL _autoscrolling;
    UIScrollView *_scrollView;
    int _scrollDirection;
    float _autoscrollSpeed;
}

+ (id)sharedInstance;
@property(nonatomic) float autoscrollSpeed; // @synthesize autoscrollSpeed=_autoscrollSpeed;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic, getter=isAutoscrolling) BOOL autoscrolling; // @synthesize autoscrolling=_autoscrolling;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)_autoscroll;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)decrementAutoscrollSpeed;
- (void)incrementAutoscrollSpeed;
- (void)pause;
- (int)availableAutoscrollDirections;
- (void)autoscrollInDirection:(int)arg1;
- (void)dealloc;
- (id)init;

@end
