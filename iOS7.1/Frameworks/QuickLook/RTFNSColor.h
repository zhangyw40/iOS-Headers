//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface RTFNSColor : NSObject
{
    float _red;
    float _green;
    float _blue;
    float _alpha;
}

+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCalibratedWhite:(float)arg1 alpha:(float)arg2;
@property float alpha; // @synthesize alpha=_alpha;
@property float blue; // @synthesize blue=_blue;
@property float green; // @synthesize green=_green;
@property float red; // @synthesize red=_red;
- (id)description;
- (id)colorUsingColorSpaceName:(id)arg1;
- (void)getRed:(float *)arg1 green:(float *)arg2 blue:(float *)arg3 alpha:(float *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithCalibratedWhite:(float)arg1 alpha:(float)arg2;
- (id)init;

@end

