/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOMapItem>, GEOPlaceResult, NSArray, NSData, NSString;

@interface _GEOPlaceResultCompletionItem : NSObject <GEOCompletionItem, _GEOCompletionSearchHint> {
    NSData *_completionMetaData;
    GEOPlaceResult *_placeResult;
    NSString *_query;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSArray * displayLines;
@property(readonly) NSData * entryMetadata;
@property(readonly) <GEOMapItem> * geoMapItem;
@property(readonly) unsigned int hash;
@property(readonly) NSData * metadata;
@property(readonly) Class superclass;

- (id)calloutTitle;
- (id)completionLocation;
- (void)dealloc;
- (id)description;
- (id)displayLines;
- (id)entryMetadata;
- (id)geoMapItem;
- (BOOL)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (unsigned int)hash;
- (id)highlightsForLine:(unsigned int)arg1;
- (id)initWithPlaceResult:(id)arg1 query:(id)arg2 completion:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)metadata;
- (id)query;
- (id)queryLine;
- (void)sendFeedback;
- (id)suggestionsOptions;

@end
