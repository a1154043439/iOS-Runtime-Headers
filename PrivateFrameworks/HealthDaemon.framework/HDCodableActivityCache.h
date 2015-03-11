/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HDCodableSample;

@interface HDCodableActivityCache : PBCodable <NSCopying> {
    struct { 
        unsigned int activeEnergyBurnedAnchor : 1; 
        unsigned int activeHours : 1; 
        unsigned int activeHoursAnchor : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int briskMinutesAnchor : 1; 
        unsigned int cacheIndex : 1; 
        unsigned int calorieGoalAnchor : 1; 
        unsigned int energyBurned : 1; 
        unsigned int energyBurnedGoal : 1; 
        unsigned int energyBurnedGoalAnchor : 1; 
        unsigned int energyBurnedGoalDate : 1; 
        unsigned int stepCount : 1; 
        unsigned int stepCountAnchor : 1; 
        unsigned int walkingAndRunningDistance : 1; 
        unsigned int walkingAndRunningDistanceAnchor : 1; 
        unsigned int workoutAnchor : 1; 
    long long _activeEnergyBurnedAnchor;
    double _activeHours;
    long long _activeHoursAnchor;
    double _briskMinutes;
    long long _briskMinutesAnchor;
    long long _cacheIndex;
    long long _calorieGoalAnchor;
    double _energyBurned;
    double _energyBurnedGoal;
    long long _energyBurnedGoalAnchor;
    double _energyBurnedGoalDate;
    } _has;
    HDCodableSample *_sample;
    long long _stepCount;
    long long _stepCountAnchor;
    double _walkingAndRunningDistance;
    long long _walkingAndRunningDistanceAnchor;
    long long _workoutAnchor;
}

@property long long activeEnergyBurnedAnchor;
@property double activeHours;
@property long long activeHoursAnchor;
@property double briskMinutes;
@property long long briskMinutesAnchor;
@property long long cacheIndex;
@property long long calorieGoalAnchor;
@property double energyBurned;
@property double energyBurnedGoal;
@property long long energyBurnedGoalAnchor;
@property double energyBurnedGoalDate;
@property bool hasActiveEnergyBurnedAnchor;
@property bool hasActiveHours;
@property bool hasActiveHoursAnchor;
@property bool hasBriskMinutes;
@property bool hasBriskMinutesAnchor;
@property bool hasCacheIndex;
@property bool hasCalorieGoalAnchor;
@property bool hasEnergyBurned;
@property bool hasEnergyBurnedGoal;
@property bool hasEnergyBurnedGoalAnchor;
@property bool hasEnergyBurnedGoalDate;
@property(readonly) bool hasSample;
@property bool hasStepCount;
@property bool hasStepCountAnchor;
@property bool hasWalkingAndRunningDistance;
@property bool hasWalkingAndRunningDistanceAnchor;
@property bool hasWorkoutAnchor;
@property(retain) HDCodableSample * sample;
@property long long stepCount;
@property long long stepCountAnchor;
@property double walkingAndRunningDistance;
@property long long walkingAndRunningDistanceAnchor;
@property long long workoutAnchor;

- (void).cxx_destruct;
- (long long)activeEnergyBurnedAnchor;
- (double)activeHours;
- (long long)activeHoursAnchor;
- (double)briskMinutes;
- (long long)briskMinutesAnchor;
- (long long)cacheIndex;
- (long long)calorieGoalAnchor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedEnergyBurnedGoalQuantity;
- (id)decodedEnergyBurnedQuantity;
- (id)decodedWalkingAndRunningDistanceQuantity;
- (id)description;
- (id)dictionaryRepresentation;
- (double)energyBurned;
- (double)energyBurnedGoal;
- (long long)energyBurnedGoalAnchor;
- (double)energyBurnedGoalDate;
- (bool)hasActiveEnergyBurnedAnchor;
- (bool)hasActiveHours;
- (bool)hasActiveHoursAnchor;
- (bool)hasBriskMinutes;
- (bool)hasBriskMinutesAnchor;
- (bool)hasCacheIndex;
- (bool)hasCalorieGoalAnchor;
- (bool)hasEnergyBurned;
- (bool)hasEnergyBurnedGoal;
- (bool)hasEnergyBurnedGoalAnchor;
- (bool)hasEnergyBurnedGoalDate;
- (bool)hasSample;
- (bool)hasStepCount;
- (bool)hasStepCountAnchor;
- (bool)hasWalkingAndRunningDistance;
- (bool)hasWalkingAndRunningDistanceAnchor;
- (bool)hasWorkoutAnchor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setActiveEnergyBurnedAnchor:(long long)arg1;
- (void)setActiveHours:(double)arg1;
- (void)setActiveHoursAnchor:(long long)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setBriskMinutesAnchor:(long long)arg1;
- (void)setCacheIndex:(long long)arg1;
- (void)setCalorieGoalAnchor:(long long)arg1;
- (void)setEnergyBurned:(double)arg1;
- (void)setEnergyBurnedGoal:(double)arg1;
- (void)setEnergyBurnedGoalAnchor:(long long)arg1;
- (void)setEnergyBurnedGoalDate:(double)arg1;
- (void)setHasActiveEnergyBurnedAnchor:(bool)arg1;
- (void)setHasActiveHours:(bool)arg1;
- (void)setHasActiveHoursAnchor:(bool)arg1;
- (void)setHasBriskMinutes:(bool)arg1;
- (void)setHasBriskMinutesAnchor:(bool)arg1;
- (void)setHasCacheIndex:(bool)arg1;
- (void)setHasCalorieGoalAnchor:(bool)arg1;
- (void)setHasEnergyBurned:(bool)arg1;
- (void)setHasEnergyBurnedGoal:(bool)arg1;
- (void)setHasEnergyBurnedGoalAnchor:(bool)arg1;
- (void)setHasEnergyBurnedGoalDate:(bool)arg1;
- (void)setHasStepCount:(bool)arg1;
- (void)setHasStepCountAnchor:(bool)arg1;
- (void)setHasWalkingAndRunningDistance:(bool)arg1;
- (void)setHasWalkingAndRunningDistanceAnchor:(bool)arg1;
- (void)setHasWorkoutAnchor:(bool)arg1;
- (void)setSample:(id)arg1;
- (void)setStepCount:(long long)arg1;
- (void)setStepCountAnchor:(long long)arg1;
- (void)setWalkingAndRunningDistance:(double)arg1;
- (void)setWalkingAndRunningDistanceAnchor:(long long)arg1;
- (void)setWorkoutAnchor:(long long)arg1;
- (long long)stepCount;
- (long long)stepCountAnchor;
- (double)walkingAndRunningDistance;
- (long long)walkingAndRunningDistanceAnchor;
- (long long)workoutAnchor;
- (void)writeTo:(id)arg1;

@end
