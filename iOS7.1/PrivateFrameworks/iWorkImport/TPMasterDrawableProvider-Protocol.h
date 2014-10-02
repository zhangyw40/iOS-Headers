//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, TSDDrawableInfo, TSKAddedToDocumentContext;

@protocol TPMasterDrawableProvider <NSObject>
- (void)removeMasterDrawable:(TSDDrawableInfo *)arg1 suppressDOLC:(BOOL)arg2;
- (void)addMasterDrawables:(NSArray *)arg1 atIndex:(unsigned int)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(BOOL)arg4;
- (void)addMasterDrawable:(TSDDrawableInfo *)arg1 atIndex:(unsigned int)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(BOOL)arg4;
- (unsigned int)indexOfMasterDrawable:(TSDDrawableInfo *)arg1;
- (NSArray *)masterDrawablesSortedByZOrder:(NSSet *)arg1;
- (NSArray *)masterDrawables;
- (unsigned int)countOfMasterDrawables;
@end
