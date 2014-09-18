/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridSettings : PUSettings {
    double _defaultItemSideSize;
    double _maximumSpacing;
    double _minimumSpacing;
    long long _numberColumnsInDefaultGrid;
    long long _numberOfColumnsInWideGrid;
    double _sideMargins;
    bool_badgeAllItemsAsVideos;
    bool_displayAllItemsAsBursts;
    bool_forceJPEGThumbnailsInDefaultGrid;
    bool_slowBackgroundFetch;
}

@property bool badgeAllItemsAsVideos;
@property double defaultItemSideSize;
@property bool displayAllItemsAsBursts;
@property bool forceJPEGThumbnailsInDefaultGrid;
@property double maximumSpacing;
@property double minimumSpacing;
@property long long numberColumnsInDefaultGrid;
@property long long numberOfColumnsInWideGrid;
@property double sideMargins;
@property bool slowBackgroundFetch;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)badgeAllItemsAsVideos;
- (double)defaultItemSideSize;
- (bool)displayAllItemsAsBursts;
- (bool)forceJPEGThumbnailsInDefaultGrid;
- (double)maximumSpacing;
- (double)minimumSpacing;
- (long long)numberColumnsInDefaultGrid;
- (long long)numberOfColumnsInWideGrid;
- (void)setBadgeAllItemsAsVideos:(bool)arg1;
- (void)setDefaultItemSideSize:(double)arg1;
- (void)setDefaultValues;
- (void)setDisplayAllItemsAsBursts:(bool)arg1;
- (void)setForceJPEGThumbnailsInDefaultGrid:(bool)arg1;
- (void)setMaximumSpacing:(double)arg1;
- (void)setMinimumSpacing:(double)arg1;
- (void)setNumberColumnsInDefaultGrid:(long long)arg1;
- (void)setNumberOfColumnsInWideGrid:(long long)arg1;
- (void)setSideMargins:(double)arg1;
- (void)setSlowBackgroundFetch:(bool)arg1;
- (double)sideMargins;
- (bool)slowBackgroundFetch;

@end