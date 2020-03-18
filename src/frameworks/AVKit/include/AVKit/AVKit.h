/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _AVKit_H_
#define _AVKit_H_

#import <Foundation/Foundation.h>

#import <AVKit/AVCaptureControllerDelegate.h>
#import <AVKit/AVControlsContainerViewControllerContent.h>
#import <AVKit/AVExportSessionHelper.h>
#import <AVKit/AVExportSessionHelperDelegate.h>
#import <AVKit/AVFunctionBarAudioCaptureDeviceSelectionButtonViewControllerDelegate.h>
#import <AVKit/AVFunctionBarCaptureInputSourceSelectionViewControllerDelegate.h>
#import <AVKit/AVFunctionBarMediaSelectionControlling.h>
#import <AVKit/AVFunctionBarMediaSelectionViewControllerDelegate.h>
#import <AVKit/AVFunctionBarPlaybackControlsControlling.h>
#import <AVKit/AVFunctionBarPlaybackControlsControllingInternal.h>
#import <AVKit/AVFunctionBarRecordingControlsControlling.h>
#import <AVKit/AVFunctionBarRecordingControlsControllingInternal.h>
#import <AVKit/AVFunctionBarScrubberControlling.h>
#import <AVKit/AVFunctionBarScrubberDelegateInternal.h>
#import <AVKit/AVFunctionBarTrackControlling.h>
#import <AVKit/AVOutputDeviceMenuServiceInterface.h>
#import <AVKit/AVRoutePickerViewHostInterface.h>
#import <AVKit/AVRoutePickerViewRemoteViewControllerDelegate.h>
#import <AVKit/AVRoutePickerViewServiceInterface.h>
#import <AVKit/AVScrubberValueTransformerDelegate.h>
#import <AVKit/AVSlowMotionSliderDelegate.h>
#import <AVKit/AVTimeControlling.h>
#import <AVKit/AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate.h>
#import <AVKit/AVTouchBarCaptureInputSourceSelectionViewControllerDelegate.h>
#import <AVKit/AVTouchBarMediaSelectionButtonViewControllerDelegate.h>
#import <AVKit/AVTouchBarMediaSelectionControlling.h>
#import <AVKit/AVTouchBarMediaSelectionViewControllerDelegate.h>
#import <AVKit/AVTouchBarPlaybackControlsControlling.h>
#import <AVKit/AVTouchBarPlaybackControlsControllingInternal.h>
#import <AVKit/AVTouchBarRecordingControlsControlling.h>
#import <AVKit/AVTouchBarRecordingControlsControllingInternal.h>
#import <AVKit/AVTouchBarScrubberControlling.h>
#import <AVKit/AVTouchBarScrubberDelegateInternal.h>
#import <AVKit/AVTouchBarTrackControlling.h>
#import <AVKit/AVTrimControlsViewControllerDelegate.h>
#import <AVKit/AVTrimViewDelegate.h>
#import <AVKit/AVVolumeButtonDelegate.h>
#import <AVKit/CAAnimationDelegate.h>
#import <AVKit/CALayerDelegate.h>
#import <AVKit/CAMLParserDelegate.h>
#import <AVKit/CAStateControllerDelegate.h>
#import <AVKit/NSAccessibilityElement.h>
#import <AVKit/NSAccessibilitySlider.h>
#import <AVKit/NSCacheDelegate.h>
#import <AVKit/NSDescriptionBasedTouchBarItem.h>
#import <AVKit/NSDescriptionBasedTouchBarItemProvider.h>
#import <AVKit/NSMenuDelegate.h>
#import <AVKit/NSPopoverDelegate.h>
#import <AVKit/NSSharingServiceDelegate.h>
#import <AVKit/NSSharingServicePickerDelegate.h>
#import <AVKit/NSStackViewDelegate.h>
#import <AVKit/NSTouchBarDelegate.h>
#import <AVKit/NSTouchBarProvider.h>
#import <AVKit/NSUserInterfaceValidations.h>
#import <AVKit/AVTrimView.h>
#import <AVKit/AVFunctionBarVideoTrackView.h>
#import <AVKit/AVTrimSelectionEndFocusRingView.h>
#import <AVKit/AVOutputDeviceDiscoverySessionController.h>
#import <AVKit/AVFunctionBarRecordingControlsViewController.h>
#import <AVKit/AVTouchBarPlaybackControlsController.h>
#import <AVKit/AVCaptureControlsRecordingViewController.h>
#import <AVKit/AVProgressEstimator.h>
#import <AVKit/AVShareController.h>
#import <AVKit/AVTouchBarPlaybackControlsViewController.h>
#import <AVKit/AVShadowTimeFormatterLegacy.h>
#import <AVKit/AVFunctionBarScrubberInternal.h>
#import <AVKit/AVTouchBarAudioCaptureDeviceSelectionButtonViewController.h>
#import <AVKit/AVTouchBarAudioTrackView.h>
#import <AVKit/AVMovableView.h>
#import <AVKit/AVTouchBarTrimControlsViewController.h>
#import <AVKit/AVTouchBarScrubberKnobView.h>
#import <AVKit/AVMinimalPlaybackControlsViewController.h>
#import <AVKit/AVFloatingTrimControlsViewController.h>
#import <AVKit/AVTrimIndicatorView.h>
#import <AVKit/AVTouchBarRecordingControlsProvider.h>
#import <AVKit/AVTouchBarCaptureInputSourceItem.h>
#import <AVKit/AVCaptureDeviceSelectionController.h>
#import <AVKit/AVExternalPlaybackIndicatorView.h>
#import <AVKit/AVSlowMotionSlider.h>
#import <AVKit/AVSlowMotionSliderTrackView.h>
#import <AVKit/AVSlowMotionSliderHandleView.h>
#import <AVKit/AVTrackViewController.h>
#import <AVKit/AVRoutePickerRemoteViewController.h>
#import <AVKit/AVShadowTimeFormatter.h>
#import <AVKit/AVTouchBarScrubberInternal.h>
#import <AVKit/AVTrimIndicatorFocusRingView.h>
#import <AVKit/AVCircularProgressIndicator.h>
#import <AVKit/AVStatusOverlayView.h>
#import <AVKit/AVAudioExtractor.h>
#import <AVKit/AVFunctionBarAudioCaptureDeviceSelectionButtonViewController.h>
#import <AVKit/AVFunctionBarScrubberKnobView.h>
#import <AVKit/AVMicaPackage.h>
#import <AVKit/AVPlayerControlsViewController.h>
#import <AVKit/AVScanBackwardTextFieldHiddenValueTransformer.h>
#import <AVKit/AVScanBackwardTextFieldValueValueTransformer.h>
#import <AVKit/AVScanForwardTextFieldHiddenValueTransformer.h>
#import <AVKit/AVScanForwardTextFieldValueValueTransformer.h>
#import <AVKit/AVScrubberValueTransformer.h>
#import <AVKit/AVAtomicCancelationToken.h>
#import <AVKit/AVRoutePickerView.h>
#import <AVKit/AVOutputContextController.h>
#import <AVKit/AVFloatingPlaybackControlsViewController.h>
#import <AVKit/AVTouchBarDescriptionBasedPlayerController.h>
#import <AVKit/AVFunctionBarPlaybackControlsController.h>
#import <AVKit/AVUnsupportedContentIndicatorView.h>
#import <AVKit/AVTrimClipView.h>
#import <AVKit/AVChapterMenuController.h>
#import <AVKit/AVPlayerControllerTimeResolver.h>
#import <AVKit/AVObservationController.h>
#import <AVKit/AVProxyKVOObserver.h>
#import <AVKit/AVKeyValueChange.h>
#import <AVKit/AVInlineDeviceSelectionCaptureControlsViewController.h>
#import <AVKit/AVFunctionBarTrackView.h>
#import <AVKit/AVFunctionBarAudioTrackView.h>
#import <AVKit/AVFunctionBarPlaybackControlsProvider.h>
#import <AVKit/AVFunctionBarMediaSelectionOption.h>
#import <AVKit/AVDraggableImageView.h>
#import <AVKit/AVPlayerView.h>
#import <AVKit/AVIterableCache.h>
#import <AVKit/AVVideoTrackThumbnailManager.h>
#import <AVKit/AVFunctionBarTrackViewController.h>
#import <AVKit/AVTouchBarVideoTrackView.h>
#import <AVKit/AVTimeIndicatorPopover.h>
#import <AVKit/AVTimeIndicatorPopoverContentViewController.h>
#import <AVKit/AVChapter.h>
#import <AVKit/AVTrackView.h>
#import <AVKit/AVTouchBarTrackViewController.h>
#import <AVKit/AVVideoTrackView.h>
#import <AVKit/_AVBundle.h>
#import <AVKit/AVTouchBarMediaSelectionOptionTwoLineButtonCell.h>
#import <AVKit/AVTouchBarMediaSelectionOptionTwoLineButton.h>
#import <AVKit/AVTouchBarMediaSelectionViewController.h>
#import <AVKit/AVTouchBarScrubberController.h>
#import <AVKit/AVAudioLevelIndicatorView.h>
#import <AVKit/AVVideoTrackThumbnail.h>
#import <AVKit/AVNowPlayingInfoController.h>
#import <AVKit/AVCaptureControlsViewController.h>
#import <AVKit/AVValueTiming.h>
#import <AVKit/AVMutableValueTiming.h>
#import <AVKit/AVConcreteValueTiming.h>
#import <AVKit/AVConcreteMutableValueTiming.h>
#import <AVKit/AVInlineTrimControlsViewController.h>
#import <AVKit/AVTrimIndicatorAccessibilityElement.h>
#import <AVKit/AVBindingInfoLegacy.h>
#import <AVKit/AVPlayButtonLegacy.h>
#import <AVKit/AVFunctionBarScrubberExpandButtonCell.h>
#import <AVKit/AVFunctionBarScrubberExpandButton.h>
#import <AVKit/AVFunctionBarScrubber.h>
#import <AVKit/AVFunctionBarPlaybackControlsViewController.h>
#import <AVKit/AVThumbnailCache.h>
#import <AVKit/AVFunctionBarRecordingControlsProvider.h>
#import <AVKit/AVFunctionBarCaptureInputSourceItem.h>
#import <AVKit/AVControlsContainerViewController.h>
#import <AVKit/AVPlayerController.h>
#import <AVKit/AVTrimSelectionStartFocusRingView.h>
#import <AVKit/AVFunctionBarRecordingControlsController.h>
#import <AVKit/AVAudioTrackView.h>
#import <AVKit/AVAnimator.h>
#import <AVKit/AVPooledData.h>
#import <AVKit/AVDataPool.h>
#import <AVKit/AVButton.h>
#import <AVKit/AVAudioAmplitudeExtractionSessionHelper.h>
#import <AVKit/AVAudioAmplitudeExtractionSession.h>
#import <AVKit/AVEstimatedDurationFormatter.h>
#import <AVKit/AVFunctionBarCaptureInputSourceSelectionViewController.h>
#import <AVKit/AVFloatingCaptureControlsViewController.h>
#import <AVKit/AVTouchBarRecordingControlsViewController.h>
#import <AVKit/AVCameraDisabledView.h>
#import <AVKit/AVInlinePlaybackControlsViewController.h>
#import <AVKit/AVTrimSelectionView.h>
#import <AVKit/AVTouchBarCaptureInputSourceSelectionViewController.h>
#import <AVKit/AVControlsViewController.h>
#import <AVKit/AVTouchBarPlaybackControlsProvider.h>
#import <AVKit/AVThumbnail.h>
#import <AVKit/AVTouchBarMediaSelectionOption.h>
#import <AVKit/AVTrimDimmerView.h>
#import <AVKit/AVCaptureController.h>
#import <AVKit/AVCaptureDeviceInputSourceItem.h>
#import <AVKit/AVCaptureQualityItem.h>
#import <AVKit/AVAudioView.h>
#import <AVKit/AVAudioPlaybackControlsViewController.h>
#import <AVKit/AVAudioTrimControlsViewController.h>
#import <AVKit/AVScrubber.h>
#import <AVKit/AVScrubberCell.h>
#import <AVKit/AVInlineCaptureControlsViewController.h>
#import <AVKit/AVTrimControlsViewController.h>
#import <AVKit/AVFoundationExportSession.h>
#import <AVKit/AVAudioOnlyIndicatorView.h>
#import <AVKit/AVOutputDevicePickerButton.h>
#import <AVKit/AVCaptureView.h>
#import <AVKit/AVTimer.h>
#import <AVKit/AVPanoramicStretchHelper.h>
#import <AVKit/AVTouchBarTrackView.h>
#import <AVKit/AVFunctionBarScrubberController.h>
#import <AVKit/AVTouchBarRecordingControlsController.h>
#import <AVKit/AVTouchBarPlaybackControlsItem.h>
#import <AVKit/AVBindingInfo.h>
#import <AVKit/AVTouchBarScrubberExpandButtonCell.h>
#import <AVKit/AVTouchBarScrubberExpandButton.h>
#import <AVKit/AVTouchBarScrubber.h>
#import <AVKit/AVAssetAudioExtractor.h>
#import <AVKit/AVTouchBarMediaSelectionButtonViewController.h>
#import <AVKit/AVLoadingIndicatorView.h>
#import <AVKit/AVFunctionBarMediaSelectionViewController.h>
#import <AVKit/AVAppendableData.h>
#import <AVKit/AVReadOnlyRangeOfAppendableData.h>
#import <AVKit/AVOutputDeviceMenuController.h>
#import <AVKit/AVThumbnailGenerationRequest.h>
#import <AVKit/AVThumbnailGenerator.h>
#import <AVKit/AVOutputDeviceMenuRemoteViewController.h>
#import <AVKit/AVScrollSliderView.h>
#import <AVKit/AVExportProgressWindowController.h>
#import <AVKit/AVAudioAmplitudeSampleExtractionHelper.h>
#import <AVKit/AVWaveformGenerator.h>
#import <AVKit/AVTrimTracksView.h>
#import <AVKit/AVVolumeButton.h>
#import <AVKit/AVVolumeButtonContentView.h>
#import <AVKit/AVVolumeImageValueTransformer.h>

void* AVAddAudibleMediaSelectionOptionsToMenu(void);
void* AVAddLegibleMediaSelectionOptionsToMenu(void);
void* AVAssetSlowMotionTimeRangeFromNormalizedSlowMotionTimeRange(void);
void* AVAsynchronousLocalizedString(void);
void* AVBundle(void);
void* AVComparePointDistances(void);
void* AVCompareSizeAspectRatios(void);
void* AVConstrainRectInsideRectWithoutResizing(void);
void* AVDisableUserIdleDisplaySleep(void);
void* AVDisableUserIdleSystemSleep(void);
void* AVEnableUserIdleDisplaySleep(void);
void* AVEnableUserIdleSystemSleep(void);
void* AVLocalizedString(void);
void* AVLocalizedStringFromTable(void);
void* AVMarginEqual(void);
void* AVMarginFromString(void);
void* AVNormalizedSlowMotionTimeRangeFromAssetSlowMotionTimeRange(void);
void* AVRectHasAspectRatio(void);
void* AVRectIsValid(void);
void* AVStringFromMargin(void);
void* AVTrimViewDescriptionForPart(void);
void* AVTrimViewFocusedPart(void);
void* AVTrimViewNudgePartInDirection(void);
void* AVTrimViewRectForPart(void);
void* AVTrimViewSetValueForPartWithValidation(void);
void* AVTrimViewValueForPart(void);
void* _AVDebugLog(void);
void* _AVLog(void);
void* _AVMethodProem(void);
void* makeActionButton(void);
void* makeAudioLevelIndicatorView(void);
void* makeAuxiliaryControlsView(void);
void* makeCancelButton(void);
void* makeCaptureDeviceErrorImageView(void);
void* makeCaptureDeviceSelectionButton(void);
void* makeCaptureVolumeControl(void);
void* makeChapterButton(void);
void* makeExternalPlaybackButton(void);
void* makeFinishingRecordingProgressIndicator(void);
void* makeFloatingControlsPlayPauseButton(void);
void* makeFloatingControlsScanBackwardButton(void);
void* makeFloatingControlsScanForwardButton(void);
void* makeFloatingControlsSeekFrameBackwardButton(void);
void* makeFloatingControlsSeekFrameForwardButton(void);
void* makeFullScreenButton(void);
void* makeGotoEndOfSeekableRangesButton(void);
void* makeMediaSelectionButton(void);
void* makePlayPauseButton(void);
void* makeRecordButtonFloatingStyle(void);
void* makeRecordButtonInlineStyle(void);
void* makeRecordingStatusView(void);
void* makeRedDotViewFloatingStyle(void);
void* makeRedDotViewInlineStyle(void);
void* makeScrubber(void);
void* makeShareButton(void);
void* makeSkipBackwardThirtySecondsButton(void);
void* makeTimelineControl(void);
void* makeTrimButton(void);
void* makeTrimView(void);
void* makeVolumeControl(void);
void* makeZoomHorizontallyButton(void);
void* makeZoomVerticallyButton(void);

#endif
