//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartFeature.h>

__attribute__((visibility("hidden")))
@interface TSCHChartFeaturePie : TSCHChartFeature
{
}

- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)supportsMoreThanOneLiveCategory;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(CDStruct_1f804ca1)arg2;
- (Class)presetImagerClass;
- (BOOL)supportsPercentNumberFormatting;
- (BOOL)supportsLabelExplosion;
- (BOOL)supportsElementSeriesNames;
- (BOOL)supportsBorderFrame;
- (BOOL)isPie;
- (BOOL)supportsErrorBars;
- (BOOL)supportsTrendLines;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsGroupedShadows;
- (id)userInterfaceName;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (unsigned int)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (void)p_initializeAxisIDs;
- (int)deprecated3DShadowSpecificProperty;
- (int)deprecated3DBevelEdgesSpecificProperty;

@end
