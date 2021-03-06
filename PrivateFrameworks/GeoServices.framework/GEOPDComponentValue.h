/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDAddress, GEOPDAmenities, GEOPDBounds, GEOPDBusinessClaim, GEOPDETA, GEOPDEntity, GEOPDFlyover, GEOPDHours, GEOPDPhoto, GEOPDPlaceInfo, GEOPDRating, GEOPDRawAttribute, GEOPDReview, GEOPDRoadAccessInfo, GEOPDStyleAttributes;

@interface GEOPDComponentValue : PBCodable <NSCopying> {
    GEOPDRoadAccessInfo *_accessInfo;
    GEOPDAddress *_address;
    GEOPDAmenities *_amenities;
    GEOPDBounds *_bounds;
    GEOPDBusinessClaim *_businessClaim;
    GEOPDEntity *_entity;
    GEOPDETA *_eta;
    GEOPDFlyover *_flyover;
    GEOPDHours *_hours;
    GEOPDPhoto *_photo;
    GEOPDPlaceInfo *_placeInfo;
    GEOPDRating *_rating;
    GEOPDRawAttribute *_rawAttribute;
    GEOPDReview *_review;
    GEOPDStyleAttributes *_styleAttributes;
}

@property(retain) GEOPDRoadAccessInfo * accessInfo;
@property(retain) GEOPDAddress * address;
@property(retain) GEOPDAmenities * amenities;
@property(retain) GEOPDBounds * bounds;
@property(retain) GEOPDBusinessClaim * businessClaim;
@property(retain) GEOPDEntity * entity;
@property(retain) GEOPDETA * eta;
@property(retain) GEOPDFlyover * flyover;
@property(readonly) BOOL hasAccessInfo;
@property(readonly) BOOL hasAddress;
@property(readonly) BOOL hasAmenities;
@property(readonly) BOOL hasBounds;
@property(readonly) BOOL hasBusinessClaim;
@property(readonly) BOOL hasEntity;
@property(readonly) BOOL hasEta;
@property(readonly) BOOL hasFlyover;
@property(readonly) BOOL hasHours;
@property(readonly) BOOL hasPhoto;
@property(readonly) BOOL hasPlaceInfo;
@property(readonly) BOOL hasRating;
@property(readonly) BOOL hasRawAttribute;
@property(readonly) BOOL hasReview;
@property(readonly) BOOL hasStyleAttributes;
@property(retain) GEOPDHours * hours;
@property(retain) GEOPDPhoto * photo;
@property(retain) GEOPDPlaceInfo * placeInfo;
@property(retain) GEOPDRating * rating;
@property(retain) GEOPDRawAttribute * rawAttribute;
@property(retain) GEOPDReview * review;
@property(retain) GEOPDStyleAttributes * styleAttributes;

- (id)accessInfo;
- (id)address;
- (id)amenities;
- (id)bounds;
- (id)businessClaim;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entity;
- (id)eta;
- (id)flyover;
- (BOOL)hasAccessInfo;
- (BOOL)hasAddress;
- (BOOL)hasAmenities;
- (BOOL)hasBounds;
- (BOOL)hasBusinessClaim;
- (BOOL)hasEntity;
- (BOOL)hasEta;
- (BOOL)hasFlyover;
- (BOOL)hasHours;
- (BOOL)hasPhoto;
- (BOOL)hasPlaceInfo;
- (BOOL)hasRating;
- (BOOL)hasRawAttribute;
- (BOOL)hasReview;
- (BOOL)hasStyleAttributes;
- (unsigned int)hash;
- (id)hours;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photo;
- (id)placeInfo;
- (id)rating;
- (id)rawAttribute;
- (BOOL)readFrom:(id)arg1;
- (id)review;
- (void)setAccessInfo:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setAmenities:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setBusinessClaim:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setEta:(id)arg1;
- (void)setFlyover:(id)arg1;
- (void)setHours:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setPlaceInfo:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setRawAttribute:(id)arg1;
- (void)setReview:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (id)styleAttributes;
- (void)writeTo:(id)arg1;

@end
