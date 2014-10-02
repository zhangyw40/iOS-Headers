//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

#import "TSWPColumnMetrics.h"
#import "TSWPFootnoteMarkProvider.h"
#import "TSWPLayoutParent.h"

@class NSString, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPFootnoteMarkProvider>
{
    float _width;
    float _maxFootnoteHeight;
    float _footnoteSpacing;
    BOOL _includeFootnoteSeparatorLine;
    id <TSWPFootnoteMarkProvider> _footnoteMarkProvider;
}

@property(nonatomic) BOOL includeFootnoteSeparatorLine; // @synthesize includeFootnoteSeparatorLine=_includeFootnoteSeparatorLine;
- (id)markStringForFootnoteReferenceStorage:(id)arg1;
- (BOOL)textIsVertical;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 target:(id)arg3 outWidth:(float *)arg4 outGap:(float *)arg5;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) unsigned int columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (float)maxAutoGrowHeightForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (BOOL)shouldProvideSizingGuides;
- (Class)repClassOverride;
- (id)computeLayoutGeometry;
- (void)validate;
@property(readonly, nonatomic) struct CGRect footnoteSeparatorLineFrame;
@property(readonly, nonatomic) float height;
@property(readonly, nonatomic) BOOL isEmpty;
- (void)trimFootnoteLayoutsFromIndex:(unsigned int)arg1;
- (void)setFootnoteSpacing:(int)arg1;
- (void)setWidth:(float)arg1;
- (void)removeAllFootnoteLayouts;
- (void)removeFootnoteLayoutWithInfo:(id)arg1;
- (void)removeFootnoteLayout:(id)arg1;
- (void)addFootnoteLayout:(id)arg1;
- (id)initWithFootnoteMarkProvider:(id)arg1 width:(float)arg2 maxFootnoteHeight:(float)arg3 footnoteSpacing:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) float textScaleFactor;

@end
