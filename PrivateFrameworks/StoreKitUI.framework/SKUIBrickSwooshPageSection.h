/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIBrickSwooshArtworkLoader, SKUIBrickSwooshViewController, SKUIMissingItemLoader, SKUISwooshPageComponent;

@interface SKUIBrickSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {
    SKUIBrickSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIBrickSwooshViewController *_swooshViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) SKUISwooshPageComponent * pageComponent;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addImpressionForIndex:(int)arg1 toSession:(id)arg2;
- (id)_artworkLoader;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (id)_missingItemLoader;
- (id)_swooshViewController;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (int)numberOfCells;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(int)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(int)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(int)arg2;
- (void)willAppearInContext:(id)arg1;

@end
