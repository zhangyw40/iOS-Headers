//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCHUnretainedParent.h"

@class TSCH3DChartRep;

__attribute__((visibility("hidden")))
@interface TSCH3DChartRepLayerDelegate : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartRep *mRep;
}

- (id)rep;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)clearParent;
- (void)dealloc;
- (id)initWithRep:(id)arg1;

@end

