/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <RURadioViewControllerDelegate>, MPUBorderDrawingCache, MPUTextButton, NSArray, NSMapTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_source>, NSString, RUMiniPlayerCoordinator, RUPlaceholderView, RURadioCollectionView, RURadioPlaybackCoordinator, RUSearchViewController, RUSignInViewController, RUTermsViewController, RUWelcomeViewController, RadioStation, UIAlertView, UILabel, UIScrollView, UISearchDisplayController, UIView;

@interface RURadioViewController : MPUDataSourceViewController <MPUMiniPlayerParticipant, MPUTextDrawingCacheInvalidationObserver, RUCreateStationViewControllerDelegate, RUEditStationsViewControllerDelegate, RUHistoryViewControllerDelegate, RURadioCollectionViewDelegate, RUSearchViewControllerDelegate, RUSignInViewControllerDelegate, RUStationActionsViewControllerDelegate, RUStationTreeViewControllerDelegate, RUTermsViewControllerDelegate, RUWelcomeViewControllerDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    NSMutableArray *_authenticationResponseHandlers;
    NSMapTable *_cachedStationArtworkCollections;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deferredDeselectCompletionHandler;

    <RURadioViewControllerDelegate> *_delegate;
    int _deselectDeferralCount;
    NSMapTable *_dispatchSourceImpressionTimersByStation;
    MPUTextButton *_editButton;
    NSArray *_featuredStations;
    RURadioCollectionView *_featuredStationsCollectionView;
    UILabel *_featuredStationsLabel;
    UIAlertView *_freeloaderAlertView;
    BOOL _hasEverReceivedWillAppear;
    BOOL _hasShownFeaturedSlideIn;
    NSObject<OS_dispatch_source> *_heartbeatInvalidTimerSource;
    double _highlightedItemTimestamp;
    NSObject<OS_dispatch_group> *_initialArtworkLoadGroup;
    BOOL _isAllowedToPreHeatTextDrawingCaches;
    BOOL _isFeaturedStationSlideInProgress;
    BOOL _isVisible;
    RUMiniPlayerCoordinator *_miniPlayerCoordinator;
    NSArray *_myStations;
    RURadioCollectionView *_myStationsCollectionView;
    float _myStationsCollectionViewVerticalOffset;
    UILabel *_myStationsLabel;
    MPUTextButton *_newButton;
    NSMutableArray *_optInCompletionHandlers;
    RUPlaceholderView *_placeholderView;
    RURadioPlaybackCoordinator *_playbackCoordinator;
    RadioStation *_prospectiveStation;
    UIScrollView *_scrollView;
    UISearchDisplayController *_searchDisplayController;
    RUSearchViewController *_searchResultsViewController;
    MPUTextButton *_seeAllButton;
    BOOL _shouldScrollSearchBar;
    BOOL _shouldShowSeeAllButton;
    RUSignInViewController *_signInViewController;
    UIView *_snapshotView;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    RUTermsViewController *_termsViewController;
    RUWelcomeViewController *_welcomeViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property <RURadioViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) RUMiniPlayerCoordinator * miniPlayerCoordinator;
@property(retain) RURadioPlaybackCoordinator * playbackCoordinator;
@property(readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (BOOL)MPH_supportsCoverFlow;
- (BOOL)MPU_beginPlaybackForVisibleContent;
- (id)MPU_prospectivePlaybackInformation;
- (id)_addStationTileImage;
- (void)_addStationWithDictionary:(id)arg1 fromViewController:(id)arg2;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_attemptToPlayStation:(id)arg1 withPrefixItem:(id)arg2 keepPlayingCurrentItemIfPossible:(BOOL)arg3;
- (void)_authenticateForActiveAccountWithResponseHandler:(id)arg1;
- (void)_cancelHeartbeatInvalidTimer;
- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_completeStationAdditionTransactionWithContext:(id)arg1 stationDidExistBeforeAdding:(BOOL)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_createBackdropBackgroundView;
- (void)_createPlaceholderViewIfNeeded;
- (void)_displayServiceUnavailable;
- (void)_doneAction:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_heartbeatDidChangeNotification:(id)arg1;
- (void)_historyAction:(id)arg1;
- (BOOL)_isNetworkTypeAllowed:(int)arg1;
- (BOOL)_isNoStack;
- (BOOL)_isStationNowPlaying:(id)arg1;
- (void)_layoutCell:(id)arg1;
- (void)_layoutRadioView;
- (void)_layoutScrollViews;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_newAction:(id)arg1;
- (Class)_nowPlayingViewControllerClass;
- (id)_placeholderStationArtworkImage;
- (void)_playbackCoordinatorStationDidChangeNotification:(id)arg1;
- (void)_preHeatTextDrawingCacheForNamesOfFeaturedStations;
- (void)_preHeatTextDrawingCacheForNamesOfMyStations;
- (void)_preHeatTextDrawingCacheForSubscriptionSummariesOfMyStations;
- (void)_preHeatTextDrawingCaches;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_refreshFeaturedStations;
- (void)_reloadImpressionTimersForVisibleStations;
- (void)_reloadSeeAllButtonAnimated:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_rootViewSizeForCollectionView:(id)arg1;
- (void)_scrollToAddedStationWithContext:(id)arg1 stationDidExistBeforeAdding:(BOOL)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_searchBarContentInset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_searchBarSearchingFrame;
- (id)_searchDisplayController;
- (void)_seeAllButtonAction:(id)arg1;
- (void)_setIsVisible:(BOOL)arg1;
- (void)_showWelcomeViewControllerIfNeeded;
- (id)_sortCollectionCells:(id)arg1 byDistanceFromCenter:(struct CGPoint { float x1; float x2; })arg2;
- (void)_startHeartbeatInvalidTimer;
- (struct UIOffset { float x1; float x2; })_stationsCollectionViewInsetToAccomodateStackItemsWithAttributes:(struct { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; BOOL x2; BOOL x3; struct UIOffset { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; float x6; })arg1;
- (void)_statusBarHeightChangedNotification:(id)arg1;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (id)_subscriptionSummaryForStation:(id)arg1;
- (void)_synchronizeWithService;
- (void)_updateBarButtonItems;
- (void)_updateForChangedStoreBag:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_updateScrollViewHiddenState;
- (void)_updateSearchBarFrameForced:(BOOL)arg1;
- (void)_updateViewForHorizontalSizeClassChange;
- (void)_updateViewForNetworkType:(int)arg1;
- (void)_updateVisibleCellsNowPlayingStates;
- (void)_updateZOrderingForCollectionView:(id)arg1;
- (id)_visibleFeaturedStations;
- (void)addStationWithDictionary:(id)arg1 completionHandler:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)attemptOptInWithCompletionHandler:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)completeAdditionOfStationWithContext:(id)arg1 animated:(BOOL)arg2;
- (id)contentScrollView;
- (void)createStationViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)createStationViewControllerDidFinish:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)editStationsViewControllerDidFinish:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)historyViewControllerDidFinish:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)metricsPageDescriptionForSearchViewController:(id)arg1;
- (id)metricsPageTypeForSearchViewController:(id)arg1;
- (id)miniPlayerCoordinator;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)playbackCoordinator;
- (void)prepareToAddStation;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)radioCollectionViewDidChangeContentSize:(id)arg1;
- (void)reloadData;
- (void)scrollStationToVisible:(id)arg1 withCompletionHandler:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)searchViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)searchViewControllerDidBeginSearching:(id)arg1;
- (void)searchViewControllerDidEndSearching:(id)arg1;
- (void)searchViewControllerWillBeginSearching:(id)arg1;
- (void)searchViewControllerWillEndSearching:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMiniPlayerCoordinator:(id)arg1;
- (void)setPlaybackCoordinator:(id)arg1;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2;
- (void)stationTreeViewController:(id)arg1 didSelectStationTreeNode:(id)arg2;
- (void)termsViewController:(id)arg1 didAcceptTerms:(BOOL)arg2;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)welcomeViewController:(id)arg1 didDismissFailureAlert:(id)arg2;
- (void)welcomeViewController:(id)arg1 willDisplayFailureAlert:(id)arg2;
- (void)welcomeViewControllerDidOptIn:(id)arg1;
- (void)welcomeViewControllerDidReceiveServiceUnavailable:(id)arg1;

@end
