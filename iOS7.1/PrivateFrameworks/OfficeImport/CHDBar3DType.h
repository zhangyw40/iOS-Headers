//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CHDBar2DType.h>

__attribute__((visibility("hidden")))
@interface CHDBar3DType : CHDBar2DType
{
    int mGapDepth;
    int mShapeType;
}

+ (_Bool)is3DType;
- (void)setShapeType:(int)arg1;
- (int)shapeType;
- (void)setGapDepth:(int)arg1;
- (int)gapDepth;
- (id)initWithChart:(id)arg1;

@end

