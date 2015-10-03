//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Springboard.h"

#import "DOCKExtraDelegate.h"
#import "DOCKGestureHandler.h"

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_source>, NSString, WALayerKitWindow;

@interface LPSpringboard : Springboard <DOCKExtraDelegate, DOCKGestureHandler>
{
    WALayerKitWindow *_dragWindow;
    NSMutableDictionary *_runningProcessLabels;
    NSMutableDictionary *_pushLabels;
    NSMapTable *_dragAcceptanceMap;
    NSObject<OS_dispatch_source> *_notificationTimer;
    NSObject<OS_dispatch_source> *_animationTimer;
    double _lastAnimateTime;
    double _velocity;
    double _startVisibility;
    _Bool _allowBounce;
    _Bool _animateShow;
    _Bool _animatingToEndPosition;
    _Bool _showLaunchpadGestureEnabled;
}

@property(nonatomic) _Bool showLaunchpadGestureEnabled; // @synthesize showLaunchpadGestureEnabled=_showLaunchpadGestureEnabled;
- (void).cxx_destruct;
- (void)uninstallRunnable:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)_uninstallClearNotificationObservers:(id)arg1;
- (BOOL)performDropForItem:(id)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (BOOL)canAcceptDropForItem:(id)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (void)_postChangedNotification;
- (void)initialSetupComplete;
- (void)bounceDockIcon;
- (id)zoomFactorsPrefKey;
- (void)iconSizesChanged;
- (BOOL)unregisterObservationOfItem:(id)arg1;
- (BOOL)registerObservationOfItem:(id)arg1;
- (BOOL)handleRunnableOpen:(id)arg1 atURL:(id)arg2 fromFrame:(struct CGRect)arg3 toFrame:(struct CGRect *)arg4;
- (void)_appExtraPluginStateChanged:(id)arg1;
- (void)_removeAppDockExtra:(id)arg1;
- (void)_addAppDockExtra:(id)arg1;
- (void)setStatusLabel:(id)arg1 forPushNotificationWithBundleID:(id)arg2;
- (void)setStatusLabel:(id)arg1 forRunningProcess:(struct CPSProcessSerNum)arg2;
- (void)setStatusLabel:(id)arg1 forProcessWithBundleIdentifier:(id)arg2;
- (void)dockExtraSetCustomIconImage:(id)arg1 withContext:(id)arg2;
- (void)dockExtraSetBadgeLabel:(id)arg1 withContext:(id)arg2;
- (void)_animateToVisibility:(float)arg1;
- (double)_animateFluidToDone:(_Bool *)arg1;
- (void)_gestureEndedShow:(_Bool)arg1 velocity:(double)arg2;
- (_Bool)isFluidGesturing;
- (void)fluidGestureProgress:(id)arg1;
- (void)fluidGestureEnd:(id)arg1;
- (_Bool)fluidGestureStart:(id)arg1;
- (void)markAppAsLaunched:(id)arg1;
- (BOOL)isStoreAppForThisLaunchpad:(id)arg1;
- (void)endDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
- (void)beginDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
- (void)clearDragAcceptanceMap;
- (void)importURLs:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)filtersWithBlacklist;
- (unsigned int)springboardType;
- (id)rootLayerForDragging;
- (void)setVisible:(BOOL)arg1 slow:(BOOL)arg2;
- (BOOL)showsDock;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

