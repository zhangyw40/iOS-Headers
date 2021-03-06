/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSNumber, NSString, SUSegmentedControl, SUStorePageViewController;

@interface SUScriptSegmentedControl : SUScriptObject
{
    NSArray *_segments;
    int _style;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_setRawSegments:(id)arg1;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned int)arg3;
- (int)_sectionsStyleForString:(id)arg1;
- (void)_reloadViewControllerPageSectionGroup;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)_newNativeSegmentedControl;
@property(readonly, nonatomic) SUStorePageViewController *storePageViewController;
@property(readonly, nonatomic) NSArray *rawSegments;
@property(readonly, nonatomic) SUSegmentedControl *activeSegmentedControl;
@property(readonly) int tintStyleDefault;
@property(readonly) int tintStyleDark;
@property(readonly) NSNumber *noSegmentIndex;
@property(readonly) unsigned int controlStateSelected;
@property(readonly) unsigned int controlStateNormal;
@property(readonly) unsigned int controlStateHighlighted;
@property(readonly) unsigned int controlStateDisabled;
@property int tintStyle;
@property(copy) id tintColor;
@property(retain) NSString *style;
@property(copy) id showsMoreListAutomatically;
@property(retain) NSNumber *selectedIndex;
@property(retain) id segments;
@property(copy) NSString *moreListTitle;
@property float maximumWidth;
@property int maximumNumberOfItems;
@property(copy) NSString *cancelButtonTitle;
@property(readonly) NSNumber *selectedSegmentIndex;
- (id)_className;
- (id)titleShadowColorForControlState:(unsigned int)arg1;
- (id)titleColorForControlState:(unsigned int)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(int)arg2 animated:(BOOL)arg3;
- (void)showMoreListAnimated:(BOOL)arg1;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned int)arg2;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (void)hideMoreListAnimated:(BOOL)arg1;
@property(retain, nonatomic) SUSegmentedControl *nativeSegmentedControl;
- (id)newPageSectionGroup;
@property(readonly, nonatomic) int nativeSelectedIndex;
- (void)dealloc;
- (id)initWithPageSectionGroup:(id)arg1;

@end

