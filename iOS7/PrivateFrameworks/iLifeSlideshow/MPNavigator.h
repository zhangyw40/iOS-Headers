/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPActionSupport-Protocol.h"
#import "MPActionableSupport-Protocol.h"
#import "MPAnimationSupport-Protocol.h"
#import "MPGeometrySupport-Protocol.h"
#import "MPLayerableSupport-Protocol.h"
#import "MPNavigatorSupport-Protocol.h"
#import "MPTimingSupport-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCContainerNavigator, MCPlug, MPNavigatorInternal, NSMutableDictionary, NSString;

@interface MPNavigator : NSObject <NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport>
{
    MPNavigatorInternal *_internal;
    NSMutableDictionary *_layers;
    NSMutableDictionary *_actions;
    MCPlug *_plug;
    MCContainerNavigator *_navigator;
    id _parent;
    NSMutableDictionary *_animationPaths;
}

- (void)removeActionForKey:(id)arg1;
- (void)setAction:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (id)actions;
- (void)setStartsPaused:(_Bool)arg1;
- (_Bool)startsPaused;
- (void)setIsTriggered:(_Bool)arg1;
- (_Bool)isTriggered;
- (void)setNumberOfLoops:(double)arg1;
- (double)numberOfLoops;
- (void)setPhaseOutDuration:(double)arg1;
- (double)phaseOutDuration;
- (void)setPhaseInDuration:(double)arg1;
- (double)phaseInDuration;
- (void)setDuration:(double)arg1;
- (double)duration;
- (void)setTimeIn:(double)arg1;
- (double)timeIn;
- (void)setZIndex:(long long)arg1;
- (long long)zIndex;
- (void)setScale:(double)arg1;
- (double)scale;
- (void)setYRotationAngle:(double)arg1;
- (double)yRotationAngle;
- (void)setXRotationAngle:(double)arg1;
- (double)xRotationAngle;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setRotationAngle:(double)arg1;
- (double)rotationAngle;
- (void)setZPosition:(double)arg1;
- (double)zPosition;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (void)setOpacity:(double)arg1;
- (double)opacity;
- (void)removeAnimationPathForKey:(id)arg1;
- (void)setAnimationPath:(id)arg1 forKey:(id)arg2;
- (id)animationPathForKey:(id)arg1;
- (id)animationPaths;
- (id)layers;
@property(copy, nonatomic) NSString *initialLayer; // @dynamic initialLayer;
- (void)removeAllLayers;
- (void)removeLayerForKey:(id)arg1;
- (void)setLayer:(id)arg1 forKey:(id)arg2;
- (id)layerForKey:(id)arg1;
- (id)layerKey;
- (id)parent;
- (id)navigatorKey;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

