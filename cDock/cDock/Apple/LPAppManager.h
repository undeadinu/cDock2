//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LPRoot, LPStorage, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_xpc_object>, NSSet;

@interface LPAppManager : NSObject
{
    LPStorage *_storage;
    LPRoot *_lproot;
    LPRoot *_dbroot;
    LPRoot *_lpversroot;
    NSMutableArray *_rootWaitingBlocks;
    NSMutableArray *_sources;
    NSMutableDictionary *_sourcesByUUID;
    NSMutableDictionary *_runnablesByBundleID;
    NSMutableDictionary *_appsByUUID;
    NSMutableDictionary *_widgetsByUUID;
    NSMutableDictionary *_stashedVersionApps;
    NSMutableDictionary *_storeAppsByStoreID;
    NSMutableSet *_appPathsBeingProcessed;
    NSSet *_appVersionExceptions;
    NSObject<OS_dispatch_queue> *_scanningQueue;
    id _uninstallabilityObserver;
    NSObject<OS_xpc_object> *_appstore_connection;
    struct AuthorizationOpaqueRef *_authorizationRef;
    unsigned int _scanIdentifier;
    NSObject<OS_dispatch_source> *_rescanTimer;
    BOOL _readOnly;
    BOOL _stillScanning;
    BOOL _addingSources;
    BOOL _widgetSourceShouldRescan;
    BOOL _invalidated;
}

+ (id)sharedManager;
@property(readonly, nonatomic) BOOL readonly; // @synthesize readonly=_readOnly;
@property(nonatomic) BOOL sourcesStillScanning; // @synthesize sourcesStillScanning=_stillScanning;
@property(readonly, nonatomic) LPStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)_checkForMissingApplications:(BOOL)arg1 atPath:(id)arg2 withLatestScanIdentifier:(unsigned int)arg3 withCompletion:(id)arg4;
- (void)_checkRunnablePossibleMissingRunnable:(id)arg1 withCompletion:(id)arg2;
- (void)_scanForApplicationsAtPath:(id)arg1 symlinkUnresolvedPath:(id)arg2 fromSource:(id)arg3 linksFollowed:(id)arg4 recurse:(BOOL)arg5 withContext:(id)arg6;
- (void)_scanForWidgetsAtPath:(id)arg1 fromSource:(id)arg2 withContext:(id)arg3;
- (void)_processScannedWidgetURL:(struct __CFURL *)arg1 fromSource:(id)arg2 allowRecursion:(char *)arg3 withContext:(id)arg4;
- (void)_processScannedApplicationURL:(struct __CFURL *)arg1 unresolvedSymlinkPath:(id)arg2 fromSource:(id)arg3 isLink:(char *)arg4 preventRecursion:(char *)arg5 withContext:(id)arg6;
- (void)_newRunnbleFound:(id)arg1 withExistingRunnable:(id)arg2 isApplication:(_Bool)arg3;
- (void)_updateExistingRunnable:(id)arg1 withNewRunnable:(id)arg2 context:(id)arg3;
- (void)_checkForOlderAppsToReplace:(id)arg1 withApp:(id)arg2 version:(unsigned long long)arg3 context:(id)arg4;
- (void)_addNewRunnable:(id)arg1 isApplication:(_Bool)arg2;
- (void)_source:(id)arg1 foundApplication:(BOOL)arg2 atURL:(id)arg3 withContext:(id)arg4;
- (void)_updateUninstallableStatus;
- (void)_bundleIDForRunnable:(id)arg1 changedFrom:(id)arg2 to:(id)arg3;
- (void)_swapRunnable:(id)arg1 withRunnable:(id)arg2 stashExisting:(_Bool)arg3;
- (void)_stashUnusedAppVersion:(id)arg1;
- (void)_cacheStashedApp:(id)arg1;
- (void)_cacheRunnable:(id)arg1;
- (id)_downloadingStoreAppMatchingApp:(id)arg1;
- (void)_findExistingRunnableMatching:(id)arg1 atPath:(id)arg2 resolveURLs:(BOOL)arg3 withExisting:(CDUnknownBlockType)arg4;
- (void)_matchRunnable:(id)arg1 withPath:(id)arg2 toRunnables:(id)arg3 checked:(id)arg4 withURLS:(id)arg5 returnBlock:(CDUnknownBlockType)arg6;
- (void)_processInitialSources:(id)arg1;
- (void)_processRootPages;
- (void)cancelDownloadingApp:(id)arg1;
- (void)resumeDownloadingApp:(id)arg1;
- (void)pauseDownloadingApp:(id)arg1;
- (BOOL)_addResumeAuthorizationToMessage:(id)arg1;
- (void)_sendStoreXPCMessage:(id)arg1;
- (id)appsMatchingBundleID:(id)arg1;
- (void)checkMissingAliasesFromSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notePathMissing:(id)arg1 fromSource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scanForApplicationsAtPath:(id)arg1 fromSource:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)roots:(CDUnknownBlockType)arg1;
- (BOOL)pathValidForApplications:(id)arg1;
- (void)forgetRunnable:(id)arg1;
- (void)_removeSource:(id)arg1;
- (void)_addSource:(id)arg1;
- (void)addWidgetSourceURL:(id)arg1;
- (void)addApplicationSourceURL:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isStillScanning;
@property(readonly, nonatomic) NSArray *widgetSources;
@property(readonly, nonatomic) NSArray *applicationSources;
@property(readonly, nonatomic) NSArray *sources;
- (void)invalidate;
- (void)dealloc;
- (id)initAtPath:(id)arg1 readOnly:(BOOL)arg2;
- (void)_appStoreXPCCredentialsRequestedMessage:(id)arg1 dictionary:(id)arg2;
- (void)_appStoreXPCSPurchaseCompleteMessage:(id)arg1 dictionary:(id)arg2;
- (void)_appStoreXPCSPurchaseUpdateMessage:(id)arg1 dictionary:(id)arg2;
- (void)_appStoreXPCSPurchaseInitialMessage:(id)arg1 dictionary:(id)arg2;
- (id)_appStoreUnknownAppThroughXPCInterface:(id)arg1;
- (void)_appStoreAppCancelledOrError:(id)arg1;
- (void)_pingStoreForUpdates;
- (void)_acceptStoreConnection:(id)arg1;
- (void)_setupAppStoreXPCService;

@end

