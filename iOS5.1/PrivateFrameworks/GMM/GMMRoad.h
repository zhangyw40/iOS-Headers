/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GMMRoad : NSObject
{
    unsigned long numPoints;
    struct Point *points;
}

- (void)getPoints:(struct Point **)arg1 count:(unsigned int *)arg2;
- (void)dealloc;
- (id)initWithPoints:(struct Point *)arg1 count:(unsigned long)arg2;

@end
