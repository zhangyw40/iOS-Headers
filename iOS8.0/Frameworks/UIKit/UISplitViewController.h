//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, UIBarButtonItem, UIGestureRecognizer, UIPopoverController, UIResponder, UISnapshotView, UIView;

@interface UISplitViewController : UIViewController <UIGestureRecognizerDelegate>
{
    id _delegate;
    UIBarButtonItem *_barButtonItem;
    UIBarButtonItem *_displayModeButtonItem;
    NSString *_buttonTitle;
    UIPopoverController *_hiddenPopoverController;
    UIView *_rotationSnapshotView;
    UIResponder *_postTransitionResponder;
    UISnapshotView *_collapsingMasterSnapshotView;
    UISnapshotView *_collapsingDetailSnapshotView;
    float _masterColumnWidth;
    float _gutterWidth;
    float _cornerRadius;
    int _rotatingFromOrientation;
    int _lastPresentedOrientation;
    struct CGRect _rotatingFromMasterViewFrame;
    struct CGRect _rotatingToMasterViewFrame;
    NSArray *_cornerImageViews;
    UIView *_underBarSeparatorView;
    unsigned int _slideTransitionCount;
    UIView *_masterBackgroundView;
    BOOL _presentsInFadingPopover;
    BOOL _presentsWithGesture;
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;
    int _preferredDisplayMode;
    int _effectiveTargetDisplayMode;
    int _pendingDisplayModeChangeCount;
    BOOL _useChangingBoundsLayout;
    struct {
        unsigned int validDelegateHiddenMasterOrientations:5;
        unsigned int delegateHiddenMasterOrientations:5;
        unsigned int delegateImplementsShouldHide:1;
        unsigned int hidden:3;
        unsigned int delegateHandlesTogglingMaster:1;
        unsigned int delegateProvidesBackgroundView:1;
        unsigned int delegateWantsUnSlideCallback:1;
        unsigned int masterOnSlide:1;
        unsigned int delegateWantsWillShowCallback:1;
        unsigned int delegateWantsWillHideCallback:1;
        unsigned int delegateWantsWillPresentCallback:1;
        unsigned int delegateWantsNavigationRequests:1;
        unsigned int resizesDetailOnSlide:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int disableDetailFrameChanges:1;
        unsigned int delegateWantsShowViewController:1;
        unsigned int delegateWantsPrivateShowViewController:1;
        unsigned int delegateWantsShowDetailViewController:1;
        unsigned int delegateWantsPrivateShowDetailViewController:1;
        unsigned int delegateWantsCollapseSecondaryViewController:1;
        unsigned int delegateWantsPrivateCollapseSecondaryViewController:1;
        unsigned int delegateWantsSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrivateSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrivatePrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrimaryViewControllerForExpanding:1;
        unsigned int delegateWantsPrivatePrimaryViewControllerForExpanding:1;
        unsigned int collapsedState:2;
        unsigned int primaryHidingState:2;
        unsigned int primaryHidingStateForCurrentOrientation:2;
        unsigned int delegateWantsWillChangeToDisplayMode:1;
        unsigned int delegateWantsTargetDisplayModeForAction:1;
        unsigned int pendingPresentMasterViewController:1;
        unsigned int pendingUpdateTargetDisplayMode:1;
        unsigned int collapsingClockwise:1;
    } _splitViewControllerFlags;
    BOOL _resizeForKeyboard;
    NSString *_displayModeButtonItemTitle;
    float _preferredPrimaryColumnWidthFraction;
    float _minimumPrimaryColumnWidth;
    float _maximumPrimaryColumnWidth;
    UIViewController *__preservedDetailController;
    CDUnknownBlockType __didChangeBoundsBlock;
    CDUnknownBlockType __clearPreventRotationHook;
}

+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;
+ (float)_defaultGutterWidthInView:(id)arg1;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)_forcePresentsWithGesture;
+ (BOOL)_forcePresentsInSlidingPopover;
@property(copy, nonatomic, setter=_setClearPreventRotationHook:) CDUnknownBlockType _clearPreventRotationHook; // @synthesize _clearPreventRotationHook=__clearPreventRotationHook;
@property(copy, nonatomic, getter=_didChangeBoundsBlock, setter=_setDidChangeBoundsBlock:) CDUnknownBlockType _didChangeBoundsBlock; // @synthesize _didChangeBoundsBlock=__didChangeBoundsBlock;
@property(retain, nonatomic, getter=_preservedDetailController, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // @synthesize _preservedDetailController=__preservedDetailController;
@property(nonatomic) BOOL resizeForKeyboard; // @synthesize resizeForKeyboard=_resizeForKeyboard;
@property(nonatomic) float maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property(nonatomic) float minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property(nonatomic) float preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property(copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle; // @synthesize _displayModeButtonItemTitle;
@property(nonatomic) BOOL presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property(nonatomic) id <UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2;
- (void)_popoverController:(id)arg1 willAnimateToFrame:(struct CGRect)arg2;
- (struct CGRect)_detailViewFrameWithPopoverControllerFrame:(struct CGRect)arg1;
@property(nonatomic, setter=_setResizesDetailOnSlide:) BOOL _resizesDetailOnSlide;
- (void)_getRotationContentSettings:(CDStruct_19ba41f1 *)arg1;
- (void)__viewWillLayoutSubviews;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateMasterViewControllerFrame;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)snapshotForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (void)snapshotAllViews;
- (void)snapshotMasterView;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_invalidateHidesMasterViewInOrientation:(int)arg1;
- (BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (BOOL)_isRotating;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations:(id)arg1;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (float)_contentMarginForChildViewController:(id)arg1;
- (void)_updateChildContentMargins;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(char *)arg2;
- (void)popoverWillAppear:(id)arg1;
- (void)_presentGestureAttemptedWithPresentedPopoverController:(id)arg1;
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (void)toggleMasterVisible:(id)arg1;
- (void)_dismissMasterViewController:(BOOL)arg1;
- (void)_presentMasterViewController:(BOOL)arg1;
- (BOOL)_isMasterPopoverVisible;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (BOOL)_shouldPreventAutorotation;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)displayModeButtonItem;
- (void)_updateDisplayModeButtonItem;
- (void)_triggerDisplayModeAction:(id)arg1;
- (int)_effectiveTargetDisplayMode;
- (void)_cacheEffectiveTargetDisplayMode;
- (void)_updateTargetDisplayMode;
- (void)_displayModeDidChange;
- (void)_displayModeWillChangeTo:(int)arg1;
- (void)_changeToDisplayMode:(int)arg1 forCurrentOrientationOnly:(BOOL)arg2;
- (BOOL)_shouldModifyDisplayModeWhenRotating;
- (int)_defaultTargetDisplayMode;
- (id)_defaultDisplayModes;
@property(readonly, nonatomic) int displayMode;
@property(nonatomic) int preferredDisplayMode;
- (BOOL)_effectivePresentsWithGesture;
@property(nonatomic, setter=_setPresentsInFadingPopover:) BOOL _presentsInFadingPopover;
@property(nonatomic) float gutterWidth;
- (float)preferredLeftColumnWidth;
- (void)setPreferredLeftColumnWidth:(float)arg1;
@property(nonatomic) float masterColumnWidth;
- (void)_showMasterViewAnimated:(BOOL)arg1;
@property(nonatomic) BOOL hidesMasterViewInPortrait;
@property(readonly, nonatomic) BOOL hidesMasterViewInLandscape;
- (id)detailViewController;
- (id)masterViewController;
- (BOOL)_hasMasterViewController;
- (void)_setupUnderBarSeparatorView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)_removeCollapsingSnapshotViews;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)_didTransitionTraitCollection;
- (void)_transitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_invokeDidChangeBoundsBlock;
- (void)_willTransitionToWindowSize:(struct CGSize)arg1 oldWidthClass:(int)arg2 newWidthClass:(int)arg3;
- (void)_prepareForInitialCompactLayout;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)_primaryContentResponder;
- (id)_childContainingSender:(id)arg1;
- (void)_setMasterOverrideTraitCollectionActive:(BOOL)arg1;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)_slideIn:(BOOL)arg1 viewController:(id)arg2 animated:(BOOL)arg3 totalDuration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)_canSlideMaster;
- (BOOL)_canDisplayHostedMaster;
- (BOOL)_delegateUsesLegacySlideSPI;
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;
- (id)_secondaryViewControllerForCollapsing;
- (id)_primaryViewControllerForExpanding;
- (id)_primaryViewControllerForCollapsing;
- (void)_setCollapsedState:(int)arg1;
- (BOOL)_isCollapsed;
@property(readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
- (float)_primaryColumnWidthForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) float primaryColumnWidth;
- (float)leftColumnWidth;
- (void)_viewControllerHiding:(id)arg1;
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;
- (void)_removeRoundedCorners;
- (void)_setupRoundedCorners;
- (struct CGRect)_detailViewFrame;
- (struct CGRect)_detailViewFrame:(struct CGRect)arg1;
- (struct CGRect)_masterViewFrame;
- (struct CGRect)_masterViewFrame:(struct CGRect)arg1;
- (void)_addOrRemovePopoverPresentationGestureRecognizer;
- (void)_calculateDelegateHiddenMasterOrientations;
- (BOOL)_isHidesMasterInLandscapeValid;
- (BOOL)_isHidesMasterInPortraitValid;
- (id)_primaryDimmingView;
- (BOOL)_isMasterViewShown;
- (void)_setPrimaryHidingStateForCurrentOrientation:(int)arg1;
- (int)_primaryHidingStateForCurrentOrientation;
- (void)_setPrimaryHidingState:(int)arg1;
- (int)_primaryHidingState;
- (int)_effectivePrimaryHidingState;
- (void)unloadViewForced:(BOOL)arg1;
- (BOOL)_isLandscape;
- (void)loadView;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)_loadNewSubviews:(id)arg1;
- (void)loadSubviews;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonInit;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_allContainedViewControllers;
- (id)_additionalViewControllersToCheckForUserActivity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
