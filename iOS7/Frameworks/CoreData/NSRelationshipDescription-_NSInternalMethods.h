/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSRelationshipDescription.h>

@interface NSRelationshipDescription (_NSInternalMethods)
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)_updateInverse:(id)arg1;
- (_Bool)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (_Bool)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2;
- (void)_setLazyDestinationEntityName:(id)arg1;
- (_Bool)_isToManyRelationship;
- (_Bool)_isRelationship;
- (unsigned long long)_propertyType;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2 proxyContext:(id)arg3;
- (void)_createCachesAndOptimizeState;
@end
