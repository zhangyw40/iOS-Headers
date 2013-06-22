/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject
{
    NSMutableDictionary *_displayBundlesById;
}

+ (id)sharedLoader;
- (void)_lookForDisplayBundles;
- (id)init;
- (Class)loadDisplayBundle:(id)arg1;
- (Class)displayBundleClassForDocumentType:(id)arg1;
- (id)copyDisplayBundleWithPreviewItem:(id)arg1 owner:(id)arg2;

@end
