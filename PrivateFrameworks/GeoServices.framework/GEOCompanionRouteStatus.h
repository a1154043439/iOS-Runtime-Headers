/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, GEOLocation, NSData;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int distanceRemainingOnRoute : 1; 
        unsigned int distanceToManeuver : 1; 
        unsigned int distanceToRoute : 1; 
        unsigned int feedbackType : 1; 
        unsigned int remainingTime : 1; 
        unsigned int routeLocationIndex : 1; 
        unsigned int routeLocationOffset : 1; 
        unsigned int stepID : 1; 
    unsigned int _distanceRemainingOnRoute;
    unsigned int _distanceToManeuver;
    unsigned int _distanceToRoute;
    int _feedbackType;
    } _has;
    GEOLocation *_location;
    unsigned int _remainingTime;
    NSData *_routeID;
    unsigned int _routeLocationIndex;
    float _routeLocationOffset;
    GEOLatLng *_routeMatchCoordinate;
    unsigned int _stepID;
    double _timestamp;
}

@property unsigned int distanceRemainingOnRoute;
@property unsigned int distanceToManeuver;
@property unsigned int distanceToRoute;
@property(readonly) unsigned int effectiveDistanceToManeuver;
@property(readonly) unsigned int effectiveStepID;
@property int feedbackType;
@property bool hasDistanceRemainingOnRoute;
@property bool hasDistanceToManeuver;
@property bool hasDistanceToRoute;
@property(readonly) bool hasEffectiveDistanceToManeuver;
@property(readonly) bool hasEffectiveStepID;
@property bool hasFeedbackType;
@property(readonly) bool hasLocation;
@property bool hasRemainingTime;
@property(readonly) bool hasRouteID;
@property bool hasRouteLocationIndex;
@property bool hasRouteLocationOffset;
@property(readonly) bool hasRouteMatchCoordinate;
@property bool hasStepID;
@property bool hasTimestamp;
@property(readonly) bool isNavigating;
@property(readonly) bool isPreviewingNavigation;
@property(retain) GEOLocation * location;
@property unsigned int remainingTime;
@property(retain) NSData * routeID;
@property unsigned int routeLocationIndex;
@property float routeLocationOffset;
@property(retain) GEOLatLng * routeMatchCoordinate;
@property unsigned int stepID;
@property double timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceRemainingOnRoute;
- (unsigned int)distanceToManeuver;
- (unsigned int)distanceToRoute;
- (unsigned int)effectiveDistanceToManeuver;
- (unsigned int)effectiveStepID;
- (int)feedbackType;
- (bool)hasDistanceRemainingOnRoute;
- (bool)hasDistanceToManeuver;
- (bool)hasDistanceToRoute;
- (bool)hasEffectiveDistanceToManeuver;
- (bool)hasEffectiveStepID;
- (bool)hasFeedbackType;
- (bool)hasLocation;
- (bool)hasRemainingTime;
- (bool)hasRouteID;
- (bool)hasRouteLocationIndex;
- (bool)hasRouteLocationOffset;
- (bool)hasRouteMatchCoordinate;
- (bool)hasStepID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRouteID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNavigating;
- (bool)isPreviewingNavigation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)remainingTime;
- (id)routeID;
- (unsigned int)routeLocationIndex;
- (float)routeLocationOffset;
- (id)routeMatchCoordinate;
- (void)setDistanceRemainingOnRoute:(unsigned int)arg1;
- (void)setDistanceToManeuver:(unsigned int)arg1;
- (void)setDistanceToRoute:(unsigned int)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasDistanceRemainingOnRoute:(bool)arg1;
- (void)setHasDistanceToManeuver:(bool)arg1;
- (void)setHasDistanceToRoute:(bool)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setHasRemainingTime:(bool)arg1;
- (void)setHasRouteLocationIndex:(bool)arg1;
- (void)setHasRouteLocationOffset:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setRemainingTime:(unsigned int)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteLocationIndex:(unsigned int)arg1;
- (void)setRouteLocationOffset:(float)arg1;
- (void)setRouteMatchCoordinate:(id)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned int)stepID;
- (double)timestamp;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(bool)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5;
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;
- (void)writeTo:(id)arg1;

@end
