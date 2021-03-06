//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CorePDF/CPRegion.h>

@class CPListItem;

@interface CPParagraph : CPRegion
{
    BOOL noIndentation;
    BOOL below;
    unsigned int alignment;
    BOOL hasDropCap;
    id flowProperties;
    CPListItem *listItem;
    float preformatWidth;
}

@property(retain, nonatomic) CPListItem *listItem; // @synthesize listItem;
- (BOOL)isPreformattedWithUnitWidth:(float *)arg1;
- (void)setAlignment:(unsigned int)arg1;
- (unsigned int)alignment;
- (BOOL)below;
- (void)setBelow:(BOOL)arg1;
- (float)selectionBottom;
- (struct CGRect)reducedBounds;
- (void)explode;
- (void)setHasDropCap:(BOOL)arg1;
- (BOOL)hasDropCap;
- (BOOL)noIndentation;
- (void)setNoIndentation:(BOOL)arg1;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (void)setIsTextRegion:(BOOL)arg1;
- (BOOL)isTextRegion;
- (unsigned int)index;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (void)accept:(id)arg1;
- (void)setFlowProperties:(id)arg1;
- (id)flowProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

