/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface PBBridgeResponsePerformanceMonitor : NSObject {
    NSMutableDictionary *_macroActivities;
    NSMutableArray *_measurements;
    NSMutableDictionary *_milestones;
    NSDictionary *_remoteMacroActivities;
    NSArray *_remoteMeasurements;
    NSDictionary *_remoteMilestones;
}

@property(readonly) NSMutableDictionary * macroActivities;
@property(readonly) NSMutableArray * measurements;
@property(readonly) NSMutableDictionary * milestones;
@property(retain) NSDictionary * remoteMacroActivities;
@property(retain) NSArray * remoteMeasurements;
@property(retain) NSDictionary * remoteMilestones;

+ (id)shareMonitor;

- (void).cxx_destruct;
- (void)_logLocalMeasurements:(BOOL)arg1;
- (void)_logMacroActivitiesLocal:(BOOL)arg1;
- (void)_logMeasurements;
- (void)_logMilestones;
- (void)addMeasurement:(double)arg1 timeSent:(double)arg2 activityType:(id)arg3 activityIdentifier:(id)arg4;
- (void)addMilestone:(double)arg1 activityType:(id)arg2 activityIdentifier:(id)arg3;
- (void)beginMacroActivity:(id)arg1 beginTime:(double)arg2;
- (void)beginMonitorTransaction;
- (double)endMacroActivity:(id)arg1 beginTime:(double)arg2;
- (void)endMonitorTransaction;
- (id)macroActivities;
- (id)measurements;
- (id)milestones;
- (id)remoteMacroActivities;
- (id)remoteMeasurements;
- (id)remoteMilestones;
- (void)setRemoteMacroActivities:(id)arg1;
- (void)setRemoteMeasurements:(id)arg1;
- (void)setRemoteMilestones:(id)arg1;

@end
