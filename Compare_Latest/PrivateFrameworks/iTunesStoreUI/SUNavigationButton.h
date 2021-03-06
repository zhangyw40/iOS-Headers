//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationButton.h"

@class UIView;

@interface SUNavigationButton : UINavigationButton
{
    UIView *_accessoryView;
    struct UIEdgeInsets _accessoryViewInsets;
}

@property(nonatomic) struct UIEdgeInsets accessoryViewInsets; // @synthesize accessoryViewInsets=_accessoryViewInsets;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (struct CGRect)_accessoryViewRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

