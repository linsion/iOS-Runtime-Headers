/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SACalendar, SALocalSearchRating, SAUIAppPunchOut;

@interface SALocalSearchReview : AceObject <SAAceSerializable> {
}

@property(copy) NSString * author;
@property(copy) NSString * comment;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * identifier;
@property(retain) SACalendar * lastUpdated;
@property(copy) NSString * publication;
@property(retain) SAUIAppPunchOut * reviewPunchOut;
@property(retain) SALocalSearchRating * reviewRating;
@property(readonly) Class superclass;

+ (id)review;
+ (id)reviewWithDictionary:(id)arg1 context:(id)arg2;

- (id)author;
- (id)comment;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)lastUpdated;
- (id)publication;
- (id)reviewPunchOut;
- (id)reviewRating;
- (void)setAuthor:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setPublication:(id)arg1;
- (void)setReviewPunchOut:(id)arg1;
- (void)setReviewRating:(id)arg1;

@end
