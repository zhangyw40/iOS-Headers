//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardCandidateListDelegate.h"
#import "_UIIVCResponseDelegateImpl.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<UIKeyboardRecording><UIApplicationEventRecording>, NSString, TIKeyboardCandidateResultSet, TIKeyboardInputManagerState, TIKeyboardInputManagerStub, TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent, UIAlertView, UIAutocorrectInlinePrompt, UIDelayedAction, UIKeyboardAutocorrectionController, UIKeyboardLayout, UIKeyboardScheduledTask, UIKeyboardTaskQueue, UIPhysicalKeyboardEvent, UIResponder, UIResponder<UIKeyInput>, UIResponder<UITextInput>, UIResponder<UITextInputPrivate>, UIResponder<UIWKInteractionViewProtocol>, UITextInputArrowKeyHistory, UITextInputTraits, _UIActionWhenIdle;

@interface UIKeyboardImpl : UIView <_UIIVCResponseDelegateImpl, UIKeyboardCandidateListDelegate>
{
    id <UIKeyInput> m_delegate;
    UIKeyboardTaskQueue *m_taskQueue;
    CDUnknownBlockType m_externalTask;
    TIKeyboardState *m_keyboardState;
    TIKeyboardInputManagerState *m_inputManagerState;
    UIView *m_languageIndicator;
    NSString *m_previousInputString;
    UIKeyboardAutocorrectionController *m_autocorrectionController;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    TIKeyboardCandidateResultSet *m_candidateResultSet;
    id <UIKeyboardCandidateList> m_candidateList;
    UIView *m_markedTextOverlay;
    id <UIKeyboardImplGeometryDelegate> m_geometryDelegate;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    UIKeyboardLayout *m_layout;
    NSMutableDictionary *m_keyedLayouts;
    UIKeyboardScheduledTask *m_autoDeleteTask;
    unsigned int m_autoDeleteCount;
    double m_autoDeleteLastDelete;
    double m_autoDeleteInterval;
    unsigned long m_autoDeleteShiftCharacter;
    UIDelayedAction *m_longPressAction;
    int m_orientation;
    int m_originalOrientation;
    struct CGPoint m_inputPoint;
    int m_changeCount;
    double m_changeTime;
    id m_changedDelegate;
    struct __CFRunLoopObserver *m_observer;
    unsigned int m_textInputChangingCount;
    BOOL m_textInputChangingText;
    BOOL m_textInputChangingDirection;
    BOOL m_textInputChangesIgnored;
    BOOL m_insideKeyInputDelegateCall;
    UITextInputTraits *m_defaultTraits;
    UITextInputTraits *m_traits;
    int m_returnKeyState;
    int m_currentDirection;
    BOOL m_autoDeleteOK;
    BOOL m_autocapitalizationPreference;
    BOOL m_autocorrectionPreference;
    BOOL m_autoshift;
    BOOL m_caretShowingNow;
    BOOL m_changeNotificationDisabled;
    BOOL m_correctionLearningAllowed;
    BOOL m_delegateIsSMSTextView;
    BOOL m_delegateRequiresKeyEvents;
    BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;
    BOOL m_doubleSpacePeriodPreference;
    BOOL m_hardwareKeyboardAttached;
    BOOL m_inDealloc;
    BOOL m_initializationDone;
    BOOL m_performanceLoggingEnabled;
    BOOL m_selecting;
    BOOL m_shift;
    BOOL m_shiftLocked;
    BOOL m_shiftLockedEnabled;
    BOOL m_settingShift;
    BOOL m_suggestionsShownForCurrentDeletion;
    BOOL m_originalShouldSkipCandidateSelection;
    BOOL m_updatingPreferences;
    BOOL m_changingGeometryWithSameOrientation;
    BOOL m_suppressGeometryChangeNotifications;
    BOOL m_acceptingCandidate;
    BOOL m_didAutomaticallyInsertSpace;
    BOOL m_didSyncDocumentStateToInputDelegate;
    BOOL m_userChangedSelection;
    BOOL m_shouldChargeKeys;
    BOOL m_longPress;
    BOOL m_replacingWord;
    BOOL m_shiftNeedsUpdate;
    BOOL m_shiftPreventAutoshift;
    BOOL m_shiftHeldDownNeedsUpdated;
    BOOL m_delegateAdoptsTextInput;
    BOOL m_delegateAdoptsTextInputPrivate;
    BOOL m_delegateAdoptsKeyboardInput;
    BOOL m_delegateAdoptsWKInteraction;
    BOOL m_clientVariantSupportEnabled;
    BOOL m_clientVariantSupportEnabledEver;
    NSMutableArray *m_keyplaneNamesPreviousDelegate;
    NSMutableArray *m_keyplaneNamesCurrentDelegate;
    UITextInputArrowKeyHistory *m_arrowKeyHistory;
    BOOL m_preRotateShift;
    BOOL m_preRotateShiftLocked;
    BOOL m_showInputModeIndicator;
    BOOL m_suppressUpdateCandidateView;
    BOOL m_shouldUpdateCacheOnInputModesChange;
    BOOL m_shouldSetInputModeInNextRun;
    BOOL m_rivenCenterFilled;
    float m_splitProgress;
    BOOL m_needsCandidates;
    BOOL m_shouldSkipCandidateGeneration;
    BOOL m_updateLayoutOnShowKeyboard;
    BOOL m_receivedCandidatesInCurrentInputMode;
    int _currentAlertReason;
    BOOL m_scrolling;
    BOOL m_hasInputOnAcceptCandidate;
    BOOL m_maximizing;
    unsigned int m_previousSpaceKeyBehavior;
    unsigned int m_previousReturnKeyBehavior;
    BOOL m_usesCandidateSelection;
    BOOL m_UsedCandidateSelection;
    CDUnknownBlockType m_keyInputCompletionHandler;
    BOOL m_updatingLayout;
    BOOL m_showsCandidateBar;
    BOOL m_showsCandidateInline;
    BOOL committingCandidate;
    BOOL geometryIsChanging;
    BOOL m_softwareKeyboardShownByTouch;
    BOOL _handlingKeyCommandFromHardwareKeyboard;
    TIKeyboardTouchEvent *m_touchEventWaitingForKeyInputEvent;
    _UIActionWhenIdle *m_delayedCandidateRequest;
    _UIActionWhenIdle *m_deferredDidSetDelegateAction;
    UIPhysicalKeyboardEvent *m_hardwareRepeatEvent;
    UIKeyboardScheduledTask *m_hardwareRepeatTask;
    UIAlertView *keyboardAlertView;
    NSDictionary *_candidateRequestInfo;
    UIKeyboardScheduledTask *_autocorrectPromptTask;
}

+ (void)hardwareKeyboardAvailabilityChanged;
+ (Class)layoutClassForInputMode:(id)arg1 keyboardType:(int)arg2;
+ (int)interfaceOrientationForSize:(struct CGSize)arg1;
+ (struct CGPoint)persistentDictationWindowOffset;
+ (void)setPersistentDictationWindowOffset:(struct CGPoint)arg1;
+ (void)setPersistentDictationTargetZone:(int)arg1;
+ (int)persistentDictationTargetZone;
+ (struct CGPoint)persistentOffset;
+ (struct CGPoint)normalizedPersistentOffset;
+ (void)setPersistentOffset:(struct CGPoint)arg1;
+ (void)suppressSetPersistentOffset:(BOOL)arg1;
+ (void)setPersistentSplitProgress:(float)arg1;
+ (float)splitProgress;
+ (float)persistentSplitProgress;
+ (BOOL)supportsSplit;
+ (BOOL)isSplit;
+ (BOOL)rivenTranslationPreference;
+ (BOOL)rivenPreference;
+ (BOOL)rivenInstalled;
+ (void)refreshRivenStateWithTraits:(id)arg1 isKeyboard:(BOOL)arg2;
+ (float)additionalInstanceHeightLoadingForInterfaceOrientation:(int)arg1;
+ (float)additionalInstanceHeightLoading;
+ (float)additionalInstanceHeight;
+ (float)additionalInstanceHeightForInterfaceOrientation:(int)arg1;
+ (id)normalizedInputModesFromPreference;
+ (struct CGSize)keyboardSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize)sizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize)_defaultSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize)defaultSizeForInterfaceOrientation:(int)arg1;
+ (Class)layoutClassForCurrentInputMode;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationWillSuspend:(id)arg1;
+ (void)releaseSharedInstance;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (void)sendPerformanceNotification:(id)arg1;
+ (void)markElapsed:(id)arg1;
+ (void)markPerformance:(id)arg1;
+ (void)setParentTestForProfiling:(id)arg1;
+ (void)_clearHardwareKeyboardMinimizationPreference;
+ (id)keyboardScreen;
@property(nonatomic) BOOL handlingKeyCommandFromHardwareKeyboard; // @synthesize handlingKeyCommandFromHardwareKeyboard=_handlingKeyCommandFromHardwareKeyboard;
@property(retain, nonatomic) UIKeyboardScheduledTask *autocorrectPromptTask; // @synthesize autocorrectPromptTask=_autocorrectPromptTask;
@property(retain, nonatomic) NSDictionary *candidateRequestInfo; // @synthesize candidateRequestInfo=_candidateRequestInfo;
@property(nonatomic) BOOL softwareKeyboardShownByTouch; // @synthesize softwareKeyboardShownByTouch=m_softwareKeyboardShownByTouch;
@property(nonatomic) BOOL geometryIsChanging; // @synthesize geometryIsChanging;
@property(nonatomic) BOOL committingCandidate; // @synthesize committingCandidate;
@property(retain, nonatomic) UIAlertView *keyboardAlertView; // @synthesize keyboardAlertView;
@property(nonatomic) BOOL showsCandidateInline; // @synthesize showsCandidateInline=m_showsCandidateInline;
@property(nonatomic) BOOL receivedCandidatesInCurrentInputMode; // @synthesize receivedCandidatesInCurrentInputMode=m_receivedCandidatesInCurrentInputMode;
@property(nonatomic) BOOL showsCandidateBar; // @synthesize showsCandidateBar=m_showsCandidateBar;
@property(nonatomic) BOOL shouldSetInputModeInNextRun; // @synthesize shouldSetInputModeInNextRun=m_shouldSetInputModeInNextRun;
@property(nonatomic) BOOL showInputModeIndicator; // @synthesize showInputModeIndicator=m_showInputModeIndicator;
@property(retain, nonatomic) UIKeyboardScheduledTask *hardwareRepeatTask; // @synthesize hardwareRepeatTask=m_hardwareRepeatTask;
@property(retain, nonatomic) UIPhysicalKeyboardEvent *hardwareRepeatEvent; // @synthesize hardwareRepeatEvent=m_hardwareRepeatEvent;
@property(retain, nonatomic) id changedDelegate; // @synthesize changedDelegate=m_changedDelegate;
@property(retain, nonatomic) _UIActionWhenIdle *deferredDidSetDelegateAction; // @synthesize deferredDidSetDelegateAction=m_deferredDidSetDelegateAction;
@property(retain, nonatomic) _UIActionWhenIdle *delayedCandidateRequest; // @synthesize delayedCandidateRequest=m_delayedCandidateRequest;
@property(retain, nonatomic) TIKeyboardTouchEvent *touchEventWaitingForKeyInputEvent; // @synthesize touchEventWaitingForKeyInputEvent=m_touchEventWaitingForKeyInputEvent;
@property(readonly, nonatomic) UIKeyboardAutocorrectionController *autocorrectionController; // @synthesize autocorrectionController=m_autocorrectionController;
@property(retain, nonatomic) TIKeyboardInputManagerState *inputManagerState; // @synthesize inputManagerState=m_inputManagerState;
@property(copy, nonatomic) CDUnknownBlockType externalTask; // @synthesize externalTask=m_externalTask;
@property(nonatomic) id <UIKeyboardImplGeometryDelegate> geometryDelegate; // @synthesize geometryDelegate=m_geometryDelegate;
@property(retain, nonatomic) UITextInputArrowKeyHistory *arrowKeyHistory; // @synthesize arrowKeyHistory=m_arrowKeyHistory;
@property(retain, nonatomic) id <UIKeyboardRecording><UIApplicationEventRecording> recorder;
- (void)trackUsageForCandidateAcceptedAction:(id)arg1;
- (void)trackUsageForPromptedCorrection:(id)arg1 inputString:(id)arg2 previousPrompt:(id)arg3;
- (void)trackUsageForAcceptedAutocorrection:(id)arg1 promptWasShowing:(BOOL)arg2;
- (BOOL)isAutoFillMode;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)needsKeyHitTestResults;
- (BOOL)canHandleKeyHitTest;
- (void)updateNoContentViews;
- (id)dynamicCaretList;
- (void)clearSelection;
- (BOOL)caretVisible;
- (BOOL)caretBlinks;
- (void)setCaretVisible:(BOOL)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)startCaretBlinkIfNeeded;
- (BOOL)canHandleEvent:(id)arg1;
- (void)_moveWithEvent:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)showKeyboardIfNeeded;
- (void)ejectKeyDown;
- (void)toggleSoftwareKeyboard;
- (void)completeHandleKeyEvent:(id)arg1;
- (void)handleKeyWithString:(id)arg1 forKeyEvent:(id)arg2 executionContext:(id)arg3;
- (void)handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)handleKeyEvent:(id)arg1;
- (void)_handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)flushTouchEventWaitingForKeyInputEventIfNecessary;
- (void)_remapKeyEvent:(id)arg1 withKeyEventMap:(id)arg2;
- (void)_handleWebKeyEvent:(id)arg1 withInputString:(id)arg2 executionContext:(id)arg3;
- (void)_continueHandleWebKeyEventWithTask:(CDUnknownBlockType)arg1 executionContext:(id)arg2;
- (void)_handleWebKeyEvent:(id)arg1 withIndex:(unsigned int)arg2 inInputString:(id)arg3 executionContext:(id)arg4;
- (void)_handleWebKeyEvent:(id)arg1 withEventType:(int)arg2 withInputString:(id)arg3 withInputStringIgnoringModifiers:(id)arg4;
- (void)updateKeyboardEventsLagging:(id)arg1;
- (BOOL)isValidKeyInput:(id)arg1;
- (void)cancelAllKeyEvents;
- (void)dismissKeyboard;
@property(nonatomic, getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)firstHardwareAutoRepeatWithExecutionContext:(id)arg1;
- (void)hardwareKeyboardAvailabilityChanged;
- (void)updateHardwareKeyboardLayout;
- (int)changeCount;
- (void)updateChangeTimeAndIncrementCount;
- (void)clearChangeTimeAndCount;
- (void)clearTimers;
- (BOOL)isLongPress;
- (void)longPressAction;
- (void)handleDelayedActionLongPress;
- (void)clearLongPressTimer;
- (void)touchLongPressTimer;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)stopAutoDelete;
- (void)startAutoDeleteTimer;
- (void)completeHandleAutoDelete;
- (void)handleAutoDeleteWithExecutionContext:(id)arg1;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (void)clearAutoDeleteTimer;
- (id)generateAutocorrectionReplacements:(id)arg1;
- (void)generateCandidatesFromReplacements;
- (id)replacementsFromSelectedText;
- (void)generateCandidatesWithOptions:(int)arg1;
- (void)generateCandidates;
- (BOOL)delegateSuggestionsForCurrentInput;
- (id)autocorrectionRecordForWord:(id)arg1;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)fadeAutocorrectPrompt;
- (void)animateAutocorrectionToRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2;
- (void)animateAutocorrectionToText:(id)arg1 fromRect:(struct CGRect)arg2;
- (BOOL)applyAutocorrection:(id)arg1;
- (void)updateAutocorrectPrompt:(id)arg1 correctionRects:(id)arg2;
- (id)autocorrectPromptRectsForInput:(id)arg1;
- (void)updateAutocorrectPrompt:(id)arg1 executionContext:(id)arg2;
- (void)updateAutocorrectPrompt:(id)arg1;
- (id)autocorrectPromptRectsFromFirstDelegateRect:(struct CGRect)arg1 lastDelegateRect:(struct CGRect)arg2;
- (id)_rangeForAutocorrectionText:(id)arg1;
- (void)clearAutocorrectPromptTimer;
- (void)touchAutocorrectPromptTimer;
- (struct CGRect)convertRectToAutocorrectRect:(struct CGRect)arg1 delegateView:(id)arg2 container:(id)arg3;
- (void)updateTextCandidateView;
- (id)inputOverlayContainer;
- (void)updateKeyboardConfigurations;
- (id)updateKeyBehaviors:(id)arg1 withBehaviors:(id)arg2 forState:(id)arg3;
- (id)_keyboardBehaviorState;
- (void)performKeyBehaviorConfirmFirstCandidate;
- (void)performKeyBehaviorConfirm;
- (void)_handleKeyBehavior:(unsigned int)arg1 forKeyType:(id)arg2;
- (void)_nop;
- (void)updateReturnKey:(BOOL)arg1;
- (void)updateReturnKey;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (BOOL)returnKeyEnabled;
- (id)returnKeyDisplayName;
- (int)returnKeyType;
- (BOOL)noContent;
- (void)setCandidates:(id)arg1;
- (void)removeAutocorrectPromptAndCandidateList;
- (void)removeCandidateList;
- (void)removeAutocorrectPrompt;
- (id)autocorrectPrompt;
- (void)setAutocorrectionList:(id)arg1;
- (void)setAutocorrection:(id)arg1;
- (void)responseContextDidChange;
- (BOOL)isMinimized;
- (void)resizeCandidateBarWithDelta:(float)arg1;
- (void)updateCandidateDisplay;
- (BOOL)needsToDeferUpdateTextCandidateView;
- (void)updateCandidateDisplayAsyncWithCandidateSet:(id)arg1;
- (BOOL)displaysCandidates;
- (void)setCandidateList:(id)arg1 updateCandidateView:(BOOL)arg2;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2 forInput:(id)arg3;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)replaceText:(id)arg1;
- (void)clearDelegate;
- (void)clearAnimations;
- (void)clearTransientState;
- (void)completeAcceptCandidateBeforeAddingInputObject:(id)arg1 executionContext:(id)arg2;
- (void)addInputObject:(id)arg1 executionContext:(id)arg2;
- (void)addInputObject:(id)arg1;
- (void)clearInput;
- (id)candidateList;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)revealHiddenCandidates;
- (void)jumpToCompositions;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidates;
- (void)completeAcceptCandidate:(id)arg1;
- (void)acceptCurrentCandidateIfSelectedWithExecutionContext:(id)arg1;
- (void)acceptCurrentCandidateIfSelected;
- (void)setUserSelectedCurrentCandidate:(BOOL)arg1;
- (BOOL)userSelectedCurrentCandidate;
- (void)acceptFirstCandidate;
- (void)acceptCurrentCandidateForInput:(id)arg1 executionContext:(id)arg2;
- (void)acceptCurrentCandidateWithExecutionContext:(id)arg1;
- (void)acceptCurrentCandidateForInput:(id)arg1;
- (void)acceptCurrentCandidate;
- (void)acceptCandidate:(id)arg1 forInput:(id)arg2;
- (void)acceptCandidate:(id)arg1;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned int)arg2 executionContext:(id)arg3;
- (void)acceptPredictiveInput:(id)arg1 executionContext:(id)arg2;
- (void)acceptPredictiveInput:(id)arg1;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeAutocorrection;
- (void)acceptAutocorrection;
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;
- (void)completeDeleteFromInput;
- (void)deleteFromInputWithExecutionContext:(id)arg1;
- (void)deleteFromInput;
- (void)didHandleWebKeyEvent;
- (void)completeDeleteOnceFromInputWithCharacterBefore:(unsigned long)arg1;
- (void)scheduleReplacementsAfterDeletionToEndOfWord;
- (void)moveSelectionToEndOfWord;
- (void)collapseSelectionAndAdjustByOffset:(int)arg1;
- (void)collapseSelection;
- (BOOL)selectionIsEndOfWord;
- (BOOL)nextCharacterIsWordCharacter;
- (void)deleteOnceFromInputWithExecutionContext:(id)arg1;
- (void)updateLayoutAndSetShift;
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)arg1;
- (void)movePhraseBoundaryToDirection:(int)arg1;
- (unsigned int)phraseBoundary;
- (void)didChangePhraseBoundary;
- (void)completeAddInputString:(id)arg1 generateCandidates:(BOOL)arg2;
- (void)completeAddInputString:(id)arg1;
- (void)addWordTerminator:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3 executionContext:(id)arg4;
- (void)didApplyAutocorrection:(id)arg1 autocorrectPromptFrame:(struct CGRect)arg2;
- (BOOL)shouldApplyAcceptedAutocorrection:(id)arg1;
- (void)acceptAutocorrection:(id)arg1 executionContextPassingTIKeyboardCandidate:(id)arg2;
- (void)syncInputManagerToAcceptedAutocorrection:(id)arg1 forInput:(id)arg2;
- (void)didAcceptAutocorrection:(id)arg1 wordTerminator:(id)arg2;
- (id)inputWordForTerminatorAtSelection;
- (void)acceptAutocorrectionForWordTerminator:(id)arg1 executionContextPassingTIKeyboardCandidate:(id)arg2;
- (id)acceptAutocorrectionForWordTerminator:(id)arg1;
- (void)addInputEvent:(id)arg1 executionContext:(id)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2 executionContext:(id)arg3;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2;
- (BOOL)shouldAcceptCandidate:(id)arg1 beforeInputString:(id)arg2;
- (id)handleReplacement:(id)arg1 forSpaceAndInput:(id)arg2;
- (id)handleDeleteAutospaceForInputString:(id)arg1 afterSpace:(BOOL)arg2;
- (BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (id)handleDoubleSpacePeriodForInputString:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3;
- (void)updateDoubleSpacePeriodStateForString:(id)arg1;
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned long)arg1;
- (id)inputEventForInputString:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)addInputString:(id)arg1;
- (void)deleteBackward;
- (void)deleteForwardAndNotify:(BOOL)arg1;
- (void)updateKeyboardStateForDeletion;
- (void)deleteBackwardAndNotify:(BOOL)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)updateKeyboardStateForInsertion:(id)arg1;
- (void)insertText:(id)arg1;
- (void)setPreviousInputString:(id)arg1;
- (BOOL)acceptInputString:(id)arg1;
- (void)handleStringInput:(id)arg1 withFlags:(unsigned int)arg2 executionContext:(id)arg3;
- (void)handleClearWithExecutionContext:(id)arg1;
- (void)handleClear;
- (void)handleDelete;
- (void)handleDeleteWithExecutionContext:(id)arg1;
- (void)handleDeleteAsRepeat:(BOOL)arg1 executionContext:(id)arg2;
- (void)setInputPoint:(struct CGPoint)arg1;
- (void)keyDeactivated;
- (void)keyActivated;
- (BOOL)supportsNumberKeySelection;
- (BOOL)suppliesCompletions;
- (BOOL)usesAutocorrectionLists;
- (void)setUsesCandidateSelection:(BOOL)arg1;
- (BOOL)usesCandidateSelection;
@property(nonatomic) BOOL shouldSkipCandidateSelection;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (void)forceShiftUpdate;
- (void)clearShiftState;
- (BOOL)shiftLockedEnabled;
- (BOOL)isShiftLocked;
- (BOOL)isAutoShifted;
- (BOOL)isShifted;
- (void)setShiftLockedForced:(BOOL)arg1;
- (void)setShiftLocked:(BOOL)arg1;
- (void)setShiftNeedsUpdate;
- (void)setShiftPreventAutoshift:(BOOL)arg1;
- (void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2;
- (void)setShift:(BOOL)arg1;
- (void)toggleShift;
- (void)setShiftOffIfNeeded;
- (BOOL)isSelectionAtSentenceAutoshiftBoundary;
- (void)updateStylingTraitsIfNeeded;
- (void)updateShiftState;
- (void)notifyShiftState;
- (void)updateInputManagerAutocapitalizationType;
- (void)recomputeActiveInputModesWithExtensions:(BOOL)arg1;
- (id)desirableInputModesFromList:(id)arg1 forTraits:(id)arg2;
- (BOOL)shouldSwitchInputMode:(id)arg1;
- (BOOL)shouldForceASCIICapable;
- (void)releaseInputManagerIfInactive;
- (void)releaseInputManager;
- (void)setInputManagerFromCurrentInputMode;
@property(readonly, nonatomic) TIKeyboardInputManagerStub *inputManager;
- (void)removeAllDynamicDictionaries;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 executionContext:(id)arg2;
- (void)performHitTestForTouchEvent:(id)arg1 executionContextPassingNSNumber:(id)arg2;
- (void)skipHitTestForTouchEvent:(id)arg1 delayed:(BOOL)arg2;
- (void)skipHitTestForTouchEvent:(id)arg1;
- (void)generateReplacementsForString:(id)arg1 candidatesHandler:(CDUnknownBlockType)arg2 executionContext:(id)arg3;
- (void)handleAcceptedCandidate:(id)arg1 executionContext:(id)arg2;
- (void)inputManagerDidGenerateAutocorrections:(id)arg1 executionContext:(id)arg2;
- (void)generateAutocorrectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)generateAutocorrectionWithExecutionContext:(id)arg1;
- (void)inputManagerDidGenerateCandidatesForRequest:(id)arg1 resultSet:(id)arg2;
- (void)cancelCandidateRequests;
- (void)generateCandidatesAsynchronouslyWithRange:(struct _NSRange)arg1 selectedCandidate:(id)arg2;
- (void)generateCandidatesAsynchronously;
- (void)performKeyboardOutput:(id)arg1;
- (void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)syncKeyboardToConfiguration:(id)arg1;
- (void)syncInputManagerToKeyboardStateWithExecutionContext:(id)arg1;
- (void)syncInputManagerToKeyboardState;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (void)completeUpdateForChangedSelection:(BOOL)arg1;
- (BOOL)shouldGenerateCandidatesAfterSelectionChange;
- (void)updateForChangedSelectionWithExecutionContext:(id)arg1;
- (void)updateForChangedSelection;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)prepareForSelectionChange;
- (void)syncDocumentStateToInputDelegateWithExecutionContext:(id)arg1;
- (void)syncDocumentStateToInputDelegate;
- (id)inputStringFromPhraseBoundary;
- (id)searchStringForMarkedText;
- (id)markedTextOverlay;
- (id)markedText;
- (BOOL)hasEditableMarkedText;
- (BOOL)hasMarkedText;
- (void)unmarkText:(id)arg1;
- (void)unmarkText;
- (void)clearInputForMarkedText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 inputString:(id)arg3 searchString:(id)arg4;
- (int)_clipCornersOfView:(id)arg1;
- (void)_resizeForKeyplaneSize:(struct CGSize)arg1 splitWidthsChanged:(BOOL)arg2;
- (void)didMoveToSuperview;
- (int)interfaceOrientation;
- (void)updateLayout;
- (void)finishLayoutChangeWithArguments:(id)arg1;
@property(readonly, nonatomic) BOOL shouldShowCandidateBar;
- (BOOL)currentKeyboardTraitsAllowCandidateBar;
- (struct CGRect)subtractKeyboardFrameFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)geometryChangeDone:(BOOL)arg1;
- (void)prepareForGeometryChange;
- (void)releaseSuppressUpdateCandidateView;
- (void)updateLayoutIfNeeded;
- (BOOL)handleKeyCommand:(id)arg1 repeatOkay:(char *)arg2;
- (void)handleObserverCallback;
- (void)updateObserverState;
- (void)setChangeNotificationDisabled:(BOOL)arg1;
- (BOOL)changeNotificationDisabled;
- (void)setChanged;
- (void)textFrameChanged:(id)arg1;
- (void)callChanged;
- (void)callChangedSelection;
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2;
- (BOOL)usesAutoDeleteWord;
- (BOOL)callShouldReplaceExtendedRange:(unsigned int)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3;
- (BOOL)callShouldInsertText:(id)arg1;
- (void)_requestInputManagerSync;
- (void)_performInputViewControllerOutput:(id)arg1;
- (BOOL)_shouldRequestInputManagerSyncForKeyboardOutputCallbacks:(id)arg1;
- (void)enable;
- (id)textInputTraits;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)finishTextChanged;
- (void)textChanged:(id)arg1 executionContext:(id)arg2;
- (void)textChanged:(id)arg1;
- (void)layoutHasChanged;
- (void)textWillChange:(id)arg1;
- (void)storeDelegateConformance;
- (BOOL)autocorrectSpellingEnabled;
- (void)setAutocorrectSpellingEnabled:(BOOL)arg1;
- (BOOL)delegateSupportsCorrectionUI;
- (BOOL)delegateIsSMSTextView;
- (void)didSetDelegate;
- (void)setDelegate:(id)arg1 force:(BOOL)arg2;
@property(retain, nonatomic) UIResponder<UIKeyInput> *delegate;
@property(readonly, nonatomic) UIResponder *delegateAsResponder;
@property(readonly, nonatomic) UIResponder<UIWKInteractionViewProtocol> *asynchronousInputDelegate;
@property(readonly, nonatomic) UIResponder<UITextInput> *inputDelegate;
@property(readonly, nonatomic) UIResponder<UITextInputPrivate> *privateInputDelegate;
@property(readonly, nonatomic) id <UIKeyboardInput> legacyInputDelegate;
- (void)takeTextInputTraitsFromDelegate;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
- (void)finishLayoutToCurrentInterfaceOrientation;
- (void)updateLayoutToCurrentInterfaceOrientation;
- (void)prepareLayoutForInterfaceOrientation:(int)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOrientation;
- (void)_updateSoundPreheatingForWindow:(id)arg1;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (void)finishSetInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (void)showInternationalKeyInfoAlertIfNeeded;
- (void)showInformationalAlertIfNeededForReason:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1 preserveIfPossible:(BOOL)arg2;
- (void)setInputModeFromPreferences;
- (void)finishSetInputMode:(id)arg1 didChangeDirection:(BOOL)arg2;
- (void)finishSetExtensionInputMode:(id)arg1 didChangeDirection:(BOOL)arg2;
- (void)finishSetKeyboardInputMode:(id)arg1 didChangeDirection:(BOOL)arg2;
- (void)reinitializeAfterInputModeSwitch:(BOOL)arg1;
- (void)cleanUpBeforeInputModeSwitch;
- (void)setKeyboardInputMode:(id)arg1 userInitiated:(BOOL)arg2 updateIndicator:(BOOL)arg3 executionContext:(id)arg4;
- (void)setKeyboardInputMode:(id)arg1 userInitiated:(BOOL)arg2;
- (void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 updateIndicator:(BOOL)arg3 executionContext:(id)arg4;
- (void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2;
- (void)setInputMode:(id)arg1;
- (BOOL)shiftLockPreference;
- (void)setHardwareKeyboardsSeenPreference:(id)arg1;
- (id)hardwareKeyboardsSeenPreference;
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)arg1;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (void)updateInputModeLastChosenPreference;
- (id)inputModeLastUsedPreference;
- (id)inputModePreference;
- (void)saveInputModesPreference:(id)arg1;
- (void)setAutomaticMinimizationEnabled:(BOOL)arg1;
- (BOOL)automaticMinimizationEnabled;
- (BOOL)keyboardsExpandedPreference;
- (id)UILanguagePreference;
- (BOOL)doubleSpacePeriodPreference;
- (BOOL)swipeToTabPreference;
- (BOOL)checkSpellingPreferenceForTraits;
- (BOOL)checkSpellingPreference;
- (BOOL)autocapitalizationPreference;
- (BOOL)predictionPreferenceForTraits;
- (BOOL)predictionForTraits;
- (BOOL)autocorrectionPreferenceForTraits;
- (BOOL)keyboardIsKeyPad;
- (BOOL)autocorrectionPreference;
- (BOOL)performanceLoggingPreference;
- (void)cancelSplitTransition;
- (BOOL)hideAccessoryViewsDuringSplit;
- (void)setSplitProgress:(float)arg1;
- (void)setInSplitKeyboardMode:(BOOL)arg1;
@property(readonly, nonatomic) BOOL splitTransitionInProgress;
@property(readonly) unsigned int minimumTouchesForTranslation;
@property BOOL rivenSplitLock;
- (void)refreshRivenPreferences;
- (struct CGSize)dragGestureSize;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
@property(readonly) BOOL centerFilled;
- (void)defaultsDidChange;
- (void)selectionScrolling:(id)arg1;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (void)removeFromSuperview;
- (void)clearLayouts;
@property(retain, nonatomic) TIKeyboardLayout *layoutForKeyHitTest;
- (void)refreshKeyboardState;
- (id)layoutState;
- (void)dealloc;
- (void)detach;
- (void)keyboardDidHide:(id)arg1;
- (void)delayedInit;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL hardwareKeyboardIsSeen;
- (void)callLayoutUpdateAllLocalizedKeys;
- (void)callLayoutUpdateLocalizedKeys;
- (void)callLayoutLongPressAction;
- (void)callLayoutSetAutoshift:(BOOL)arg1;
- (void)callLayoutSetShift:(BOOL)arg1;
- (BOOL)callLayoutIsShiftKeyBeingHeld;
- (BOOL)callLayoutIsShiftKeyPlaneChooser;
- (BOOL)callLayoutIgnoresShiftState;
- (BOOL)callLayoutUsesAutoShift;
- (void)callLayoutUpdateReturnKey;
- (void)timeElapsed:(unsigned int)arg1 message:(id)arg2;
- (void)timeMark:(unsigned int)arg1;
- (void)timeMark:(unsigned int)arg1 message:(id)arg2;
- (void)logHandwritingData;
- (BOOL)isAutoDeleteActive;
- (void)testAutocorrectionPromptWithCorrection:(id)arg1;
- (int)textInputChangingCount;
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;
- (void)updateFromTextInputTraits;
- (BOOL)hasAutoRepeat;
- (void)_setShiftLockedEnabled:(BOOL)arg1;
- (void)_setInputManager:(id)arg1;
- (void)composeTypologyRadar;
- (void)moveCursorRightShifted:(BOOL)arg1;
- (void)moveCursorLeftShifted:(BOOL)arg1;
- (void)acceptAutocorrectionAndEndComposition;
- (id)_layout;
- (BOOL)isUsingDictationLayout;
- (void)setTextInputChangesIgnored:(BOOL)arg1;
- (void)finishSplitTransitionWithProgress:(float)arg1;
- (void)setSplit:(BOOL)arg1 animated:(BOOL)arg2;
- (id)selectionView;
- (void)setInitialDirection;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (void)clearLanguageIndicator;
- (BOOL)keyboardDrawsOpaque;
- (void)clearExcessKeyboardMemory;
- (BOOL)_needsCandidates;
- (void)_setNeedsCandidates:(BOOL)arg1;
- (int)_positionInCandidateList:(id)arg1;
- (BOOL)_hasCandidates;
- (id)_getAutocorrection;
- (void)_setAutocorrects:(BOOL)arg1;
- (id)_getLocalizedInputMode;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (void)stopKeyboardRecording;
- (void)startKeyboardRecording;
- (void)installRecorder;
- (BOOL)keyboardRecordingEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

