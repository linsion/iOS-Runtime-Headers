/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSData, NSString;



@interface CKMediaObject : NSObject 
{
    NSString *_filename;
    NSData *_data;
    NSString *_mimeType;
    NSString *_exportedFilename;
    double _duration;
}

@property double duration; /* unknown property attribute: V_duration */
@property(readonly) NSString *exportedFilename; /* unknown property attribute: V_exportedFilename */
@property(readonly) NSString *mimeType; /* unknown property attribute: V_mimeType */
@property(readonly) NSString *filename; /* unknown property attribute: V_filename */
@property(readonly) NSData *data; /* unknown property attribute: V_data */

+ (id)mimeTypesToFileExtensions;
+ (id)supportedMIMETypes;
+ (id)fileExtensionForMIMEType:(id)arg1;
+ (id)previewDataMIMEType;
+ (BOOL)supportsMIMEType:(id)arg1;
+ (struct CGSize { float x1; float x2; })transcodeMaxSize;

- (NSInteger)mediaType;
- (void)cleanupAfterTranscode;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3;
- (id)initWithFilename:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3;
- (float)balloonHeightWithPreviewData:(id)arg1;
- (void)dealloc;
- (id)previewTitle;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (BOOL)shouldTranscodeForMMS;
- (id)newTranscodingForMMSWithMaxByteLength:(NSInteger)arg1;
- (id)newPreview:(NSInteger)arg1 highlight:(BOOL)arg2;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;
- (void)copyToPasteboard:(id)arg1;
- (id)dataRepresentation;
- (unsigned long long)sizeInBytes;
- (id)sizeInBytesString;
- (id)filenameForMedia;
- (id)dataForMedia;
- (id)dataFileExtensionForMedia;
- (id)optionsForMedia;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)exportedFilename;
- (id)mimeType;
- (id)filename;
- (id)data;

@end