//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont, UIImage;

@protocol AXUIAlertStyleProvider <NSObject>
- (double)alertFadeAnimationDurationForType:(unsigned int)arg1;
- (BOOL)alertShouldBeAsWideAsScreenForType:(unsigned int)arg1;
- (int)alertPositionForType:(unsigned int)arg1;
- (struct UIEdgeInsets)alertEdgeInsetsForType:(unsigned int)arg1;
- (struct UIEdgeInsets)alertIconImageViewEdgeInsetsForType:(unsigned int)arg1;
- (float)alertSubtitleTextLabelVerticalSpacingHeightWithTextLabelForType:(unsigned int)arg1;
- (float)alertSubtitleTextLabelLineHeightOffsetForType:(unsigned int)arg1;
- (struct UIOffset)alertSubtitleTextLabelShadowOffsetForType:(unsigned int)arg1;
- (UIColor *)alertSubtitleTextLabelShadowColorForType:(unsigned int)arg1;
- (UIColor *)alertSubtitleTextLabelBackgroundColorForType:(unsigned int)arg1;
- (UIColor *)alertSubtitleTextLabelTextColorForType:(unsigned int)arg1;
- (UIFont *)alertSubtitleTextLabelFontForType:(unsigned int)arg1;
- (float)alertTextLabelLineHeightOffsetForType:(unsigned int)arg1;
- (struct UIOffset)alertTextLabelShadowOffsetForType:(unsigned int)arg1;
- (UIColor *)alertTextLabelShadowColorForType:(unsigned int)arg1;
- (UIColor *)alertTextLabelBackgroundColorForType:(unsigned int)arg1;
- (UIColor *)alertTextLabelTextColorForType:(unsigned int)arg1;
- (UIFont *)alertTextLabelFontForType:(unsigned int)arg1;
- (struct UIEdgeInsets)alertContentEdgeInsetsForType:(unsigned int)arg1;
- (struct CGSize)alertBackgroundSizeForType:(unsigned int)arg1;
- (int)alertBackgroundStyleForType:(unsigned int)arg1;

@optional
- (float)alertBackgroundCornerRadiusForType:(unsigned int)arg1;
- (struct UIEdgeInsets)alertBackgroundImageCapInsetsForType:(unsigned int)arg1;
- (UIImage *)alertBackgroundImageForType:(unsigned int)arg1;
@end

