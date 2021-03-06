/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWifiHardwareVersion : PBCodable <NSCopying> {
    NSString *_hardwareVersion;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property(retain) NSString * hardwareVersion;
@property(readonly) BOOL hasHardwareVersion;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hardwareVersion;
- (BOOL)hasHardwareVersion;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHardwareVersion:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
