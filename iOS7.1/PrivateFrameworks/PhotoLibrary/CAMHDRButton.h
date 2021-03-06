//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/CAMTriStateButton.h>

@interface CAMHDRButton : CAMTriStateButton
{
    id <CAMHDRButtonDelegate> _delegate;
}

+ (id)HDRButton;
@property(nonatomic) id <CAMHDRButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDidCollapse;
- (void)_notifyWillExpand;
- (void)_notifyWasPressed;
- (void)_notifyModeDidChange;
- (id)_featureTextForLandscape;
- (id)_autoLabelTextForLandscape:(BOOL)arg1;
- (id)_onLabelTextForLandscape:(BOOL)arg1;
- (id)_offLabelTextForLandscape:(BOOL)arg1;
- (id)_iconImageName;
- (void)setHDRMode:(int)arg1 notifyDelegate:(BOOL)arg2;
@property(nonatomic) int HDRMode;
- (int)_triStateModeForHDRMode:(int)arg1;
- (int)_HDRModeForTriStateMode:(int)arg1;

// Remaining properties
@property(nonatomic, getter=isAutoDisallowed) int autoDisallowed;

@end

