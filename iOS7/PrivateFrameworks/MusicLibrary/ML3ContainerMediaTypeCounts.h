/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface ML3ContainerMediaTypeCounts : NSObject
{
    struct __CFDictionary *_map;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)enumerateMediaTypesWithBlock:(id)arg1;
- (void)addMediaType:(unsigned int)arg1 count:(unsigned long long)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

