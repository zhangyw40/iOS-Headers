/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSError.h>

@interface NSError (NSErrorPrivate)
+ (void)_registerFormatter:(void *)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_registerBuiltInFormatters;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct **)arg3 count:(long long)arg4;
- (long long)_collectApplicableUserInfoFormatters:(struct **)arg1 max:(long long)arg2;
@end

