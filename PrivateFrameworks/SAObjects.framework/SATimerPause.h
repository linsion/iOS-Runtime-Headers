/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SATimerPause : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;

+ (id)pauseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pause;

- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end