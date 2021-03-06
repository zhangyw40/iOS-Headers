//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CLLocation, NSDate;

__attribute__((visibility("hidden")))
@interface EKTravelPrediction : NSObject <NSSecureCoding>
{
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    CLLocation *_startingLocation;
    double _validRadius;
    NSDate *_predictionDate;
    double _ttl;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(readonly, nonatomic) NSDate *predictionDate; // @synthesize predictionDate=_predictionDate;
@property(readonly, nonatomic) double validRadius; // @synthesize validRadius=_validRadius;
@property(readonly, nonatomic) CLLocation *startingLocation; // @synthesize startingLocation=_startingLocation;
@property(readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(readonly, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) id <EKTravelAdvice> advice;
- (BOOL)isExpiredWithLocation:(id)arg1 date:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 predictionDate:(id)arg4 pollAggressively:(BOOL)arg5;
- (id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 validRadius:(double)arg4 predictionDate:(id)arg5 ttl:(double)arg6;

@end

