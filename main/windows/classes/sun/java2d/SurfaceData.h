#ifndef _sun_java2d_SurfaceData_h_
#define _sun_java2d_SurfaceData_h_
//$ class sun.java2d.SurfaceData
//$ extends java.awt.Transparency
//$ implements sun.java2d.DisposerTarget,sun.java2d.StateTrackable,sun.java2d.Surface

#include <java/awt/Transparency.h>
#include <sun/java2d/DisposerTarget.h>
#include <sun/java2d/StateTrackable.h>
#include <sun/java2d/Surface.h>

#pragma push_macro("LOOP_FOUND")
#undef LOOP_FOUND
#pragma push_macro("LOOP_NOTFOUND")
#undef LOOP_NOTFOUND
#pragma push_macro("LOOP_UNKNOWN")
#undef LOOP_UNKNOWN

namespace java {
	namespace awt {
		class Color;
		class GraphicsConfiguration;
		class Image;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class IndexColorModel;
			class Raster;
		}
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace sun {
	namespace java2d {
		class StateTrackable$State;
		class StateTrackableDelegate;
		class StateTracker;
		class SunGraphics2D;
		class SurfaceDataProxy;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
			class MaskFill;
			class RenderCache;
			class RenderLoops;
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class AAShapePipe;
			class AlphaColorPipe;
			class CompositePipe;
			class DrawImagePipe;
			class LoopPipe;
			class ParallelogramPipe;
			class PixelToParallelogramConverter;
			class PixelToShapeConverter;
			class SpanShapeRenderer;
			class TextPipe;
		}
	}
}

namespace sun {
	namespace java2d {

class SurfaceData : public ::java::awt::Transparency, public ::sun::java2d::DisposerTarget, public ::sun::java2d::StateTrackable, public ::sun::java2d::Surface {
	$class(SurfaceData, 0, ::java::awt::Transparency, ::sun::java2d::DisposerTarget, ::sun::java2d::StateTrackable, ::sun::java2d::Surface)
public:
	SurfaceData();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::loops::SurfaceType* surfaceType, ::java::awt::image::ColorModel* cm);
	void init$(::sun::java2d::StateTrackable$State* state, ::sun::java2d::loops::SurfaceType* surfaceType, ::java::awt::image::ColorModel* cm);
	void init$(::sun::java2d::StateTrackableDelegate* trackable, ::sun::java2d::loops::SurfaceType* surfaceType, ::java::awt::image::ColorModel* cm);
	void init$(::sun::java2d::StateTrackable$State* state);
	virtual bool canRenderLCDText(::sun::java2d::SunGraphics2D* sg2d);
	virtual bool canRenderParallelograms(::sun::java2d::SunGraphics2D* sg2d);
	virtual void checkCustomComposite();
	virtual bool copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy);
	virtual void flush();
	virtual ::java::awt::Rectangle* getBounds() {return nullptr;}
	::java::awt::image::ColorModel* getColorModel();
	virtual double getDefaultScaleX();
	virtual double getDefaultScaleY();
	virtual $Object* getDestination() {return nullptr;}
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() {return nullptr;}
	virtual $Object* getDisposerReferent() override;
	static ::sun::java2d::loops::CompositeType* getFillCompositeType(::sun::java2d::SunGraphics2D* sg2d);
	virtual ::sun::java2d::loops::MaskFill* getMaskFill(::sun::java2d::SunGraphics2D* sg2d);
	virtual int64_t getNativeOps();
	static ::sun::java2d::loops::SurfaceType* getPaintSurfaceType(::sun::java2d::SunGraphics2D* sg2d);
	static ::sun::java2d::SurfaceData* getPrimarySurfaceData(::java::awt::Image* img);
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {return nullptr;}
	virtual ::sun::java2d::loops::RenderLoops* getRenderLoops(::sun::java2d::SunGraphics2D* sg2d);
	virtual ::sun::java2d::SurfaceData* getReplacement() {return nullptr;}
	virtual ::sun::java2d::SurfaceData* getSourceSurfaceData(::java::awt::Image* img, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor);
	virtual ::sun::java2d::StateTrackable$State* getState() override;
	virtual ::sun::java2d::StateTracker* getStateTracker() override;
	::sun::java2d::loops::SurfaceType* getSurfaceType();
	::sun::java2d::pipe::TextPipe* getTextPipe(::sun::java2d::SunGraphics2D* sg2d, bool aaHintIsOn);
	virtual int32_t getTransparency() override;
	static void initIDs();
	virtual void invalidate();
	static bool isNull(::sun::java2d::SurfaceData* sd);
	static bool isOpaqueGray(::java::awt::image::IndexColorModel* icm);
	virtual bool isSurfaceLost();
	bool isValid();
	static ::sun::java2d::pipe::PixelToParallelogramConverter* makeConverter(::sun::java2d::pipe::AAShapePipe* renderer, ::sun::java2d::pipe::ParallelogramPipe* pgrampipe);
	static ::sun::java2d::pipe::PixelToParallelogramConverter* makeConverter(::sun::java2d::pipe::AAShapePipe* renderer);
	virtual ::sun::java2d::SurfaceDataProxy* makeProxyFor(::sun::java2d::SurfaceData* srcData);
	static ::sun::java2d::loops::RenderLoops* makeRenderLoops(::sun::java2d::loops::SurfaceType* src, ::sun::java2d::loops::CompositeType* comp, ::sun::java2d::loops::SurfaceType* dst);
	void markDirty();
	virtual int32_t pixelFor(int32_t rgb);
	virtual int32_t pixelFor(::java::awt::Color* c);
	static ::sun::java2d::SurfaceData* restoreContents(::java::awt::Image* img);
	virtual int32_t rgbFor(int32_t pixel);
	virtual void setBlitProxyKey(Object$* key);
	virtual void setSurfaceLost(bool lost);
	virtual $String* toString() override;
	virtual bool useTightBBoxes();
	virtual void validatePipe(::sun::java2d::SunGraphics2D* sg2d);
	int64_t pData = 0;
	bool valid = false;
	bool surfaceLost = false;
	::sun::java2d::loops::SurfaceType* surfaceType = nullptr;
	::java::awt::image::ColorModel* colorModel = nullptr;
	$Object* disposerReferent = nullptr;
	$Object* blitProxyKey = nullptr;
	::sun::java2d::StateTrackableDelegate* stateDelegate = nullptr;
	static ::sun::java2d::pipe::LoopPipe* colorPrimitives;
	static ::sun::java2d::pipe::TextPipe* outlineTextRenderer;
	static ::sun::java2d::pipe::TextPipe* solidTextRenderer;
	static ::sun::java2d::pipe::TextPipe* aaTextRenderer;
	static ::sun::java2d::pipe::TextPipe* lcdTextRenderer;
	static ::sun::java2d::pipe::AlphaColorPipe* colorPipe;
	static ::sun::java2d::pipe::PixelToShapeConverter* colorViaShape;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* colorViaPgram;
	static ::sun::java2d::pipe::TextPipe* colorText;
	static ::sun::java2d::pipe::CompositePipe* clipColorPipe;
	static ::sun::java2d::pipe::TextPipe* clipColorText;
	static ::sun::java2d::pipe::AAShapePipe* AAColorShape;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* AAColorViaShape;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* AAColorViaPgram;
	static ::sun::java2d::pipe::AAShapePipe* AAClipColorShape;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* AAClipColorViaShape;
	static ::sun::java2d::pipe::CompositePipe* paintPipe;
	static ::sun::java2d::pipe::SpanShapeRenderer* paintShape;
	static ::sun::java2d::pipe::PixelToShapeConverter* paintViaShape;
	static ::sun::java2d::pipe::TextPipe* paintText;
	static ::sun::java2d::pipe::CompositePipe* clipPaintPipe;
	static ::sun::java2d::pipe::TextPipe* clipPaintText;
	static ::sun::java2d::pipe::AAShapePipe* AAPaintShape;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* AAPaintViaShape;
	static ::sun::java2d::pipe::AAShapePipe* AAClipPaintShape;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* AAClipPaintViaShape;
	static ::sun::java2d::pipe::CompositePipe* compPipe;
	static ::sun::java2d::pipe::SpanShapeRenderer* compShape;
	static ::sun::java2d::pipe::PixelToShapeConverter* compViaShape;
	static ::sun::java2d::pipe::TextPipe* compText;
	static ::sun::java2d::pipe::CompositePipe* clipCompPipe;
	static ::sun::java2d::pipe::TextPipe* clipCompText;
	static ::sun::java2d::pipe::AAShapePipe* AACompShape;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* AACompViaShape;
	static ::sun::java2d::pipe::AAShapePipe* AAClipCompShape;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* AAClipCompViaShape;
	static ::sun::java2d::pipe::DrawImagePipe* imagepipe;
	static const int32_t LOOP_UNKNOWN = 0;
	static const int32_t LOOP_FOUND = 1;
	static const int32_t LOOP_NOTFOUND = 2;
	int32_t haveLCDLoop = 0;
	int32_t havePgramXORLoop = 0;
	int32_t havePgramSolidLoop = 0;
	static ::sun::java2d::loops::RenderCache* loopcache;
	static ::java::security::Permission* compPermission;
};

	} // java2d
} // sun

#pragma pop_macro("LOOP_FOUND")
#pragma pop_macro("LOOP_NOTFOUND")
#pragma pop_macro("LOOP_UNKNOWN")

#endif // _sun_java2d_SurfaceData_h_