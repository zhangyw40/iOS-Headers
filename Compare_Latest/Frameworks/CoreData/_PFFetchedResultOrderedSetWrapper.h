/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOrderedSet.h"

@class NSArray;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet
{
    int _cd_rc;
    NSArray *_underlyingArray;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned int)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (void)willRead;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)array;
- (id)objectEnumerator;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)getObjects:(id *)arg1;
- (Class)classForCoder;
- (Class)classForArchiver;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)allObjects;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;

@end
