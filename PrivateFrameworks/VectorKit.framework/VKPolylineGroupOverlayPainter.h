/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMapTable, NSString, VKPolylineOverlay, VKPolylineOverlayPainter;

@interface VKPolylineGroupOverlayPainter : VKOverlayPainter <VKPolylineGroupOverlayObserver> {
    NSMapTable *_polylinesToPainters;
    VKPolylineOverlay *_selectedPolyline;
    bool_showTraffic;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) VKPolylineOverlayPainter * selectedPolylinePainter;
@property bool showTraffic;
@property(readonly) Class superclass;

- (void)_addPainterForOverlay:(id)arg1;
- (void)dealloc;
- (void)gglLayoutWithContext:(id)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned long long x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg2 tiles:(id)arg3;
- (id)initWithOverlay:(id)arg1;
- (void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (id)selectedPolylinePainter;
- (void)setApplicationState:(unsigned int)arg1;
- (void)setContainerModel:(id)arg1;
- (void)setShowTraffic:(bool)arg1;
- (bool)showTraffic;
- (void)stylesheetDidChange;

@end
