/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/MFRegion.h>

@class NSBezierPathStub;

@interface MFCocoaRegion : MFRegion
{
    NSBezierPathStub *m_path;
    struct CGRect m_bounds;
}

- (id)initWithRects:(id)arg1:(struct CGRect)arg2:(id)arg3;
- (id)initWithPath:(id)arg1:(struct CGRect)arg2;
- (void)dealloc;
- (int)setClip:(id)arg1:(int)arg2;
- (int)fill:(id)arg1:(id)arg2;
- (int)frame:(id)arg1:(id)arg2;
- (int)invert:(id)arg1;

@end
