/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBCFBundle : NSObject
{
    struct __CFBundle *_cfBundle;
}

- (id)initWithPath:(id)arg1;
- (id)initWithCFBundle:(struct __CFBundle *)arg1;
- (void)dealloc;
- (id)executablePath;
- (id)bundleIdentifier;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)infoDictionary;
- (id)localizedInfoDictionary;
- (struct __CFBundle *)cfBundle;

@end

