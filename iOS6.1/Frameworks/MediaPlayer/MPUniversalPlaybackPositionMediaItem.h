/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MZUniversalPlaybackPositionMediaItem-Protocol.h"

@class MPMediaItem;

@interface MPUniversalPlaybackPositionMediaItem : NSObject <MZUniversalPlaybackPositionMediaItem>
{
    MPMediaItem *_mediaItem;
}

+ (id)mzPropertyValueForMediaProperty:(id)arg1 mediaValue:(id)arg2;
+ (id)mediaPropertiesToMZProperties;
+ (id)mzPropertiesToMediaProperties;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;

@end
