//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSMutableArray;

@interface ECGridLayer : CALayer
{
    id <ECLayerSource> _layerSource;
    unsigned long long _rowHeight;
    unsigned long long _columnWidth;
    unsigned long long _rowSpacing;
    unsigned long long _columnSpacing;
    long long _rows;
    long long _columns;
    unsigned long long _numberOfItems;
    NSMutableArray *_itemLayers;
    struct _NSRange _itemRange;
    CALayer *_clipLayer;
    CALayer *_itemsLayer;
    float _scaleFactor;
    BOOL _autoCalcSizes;
}

@property(readonly, nonatomic) CALayer *clipLayer; // @synthesize clipLayer=_clipLayer;
@property(nonatomic) long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) long long rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) unsigned long long columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(readonly, nonatomic) unsigned long long rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property(nonatomic) unsigned long long columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) unsigned long long rowHeight; // @synthesize rowHeight=_rowHeight;
- (void).cxx_destruct;
- (void)_layoutItemLayers;
- (void)layout;
- (void)layerSourceInvalidated:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)layerSourceInvalidated:(id)arg1;
- (unsigned long long)itemIndexForLayer:(id)arg1;
- (id)itemLayersForRange:(struct _NSRange)arg1;
- (id)itemLayerForIndex:(unsigned long long)arg1;
- (void)update;
- (id)initWithLayerSource:(id)arg1 rows:(long long)arg2 columns:(long long)arg3 scaleFactor:(float)arg4;
- (id)initWithLayerSource:(id)arg1 scaleFactor:(float)arg2;

@end

