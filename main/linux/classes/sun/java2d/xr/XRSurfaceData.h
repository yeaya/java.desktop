#ifndef _sun_java2d_xr_XRSurfaceData_h_
#define _sun_java2d_xr_XRSurfaceData_h_
//$ class sun.java2d.xr.XRSurfaceData
//$ extends sun.java2d.x11.XSurfaceData

#include <sun/java2d/x11/XSurfaceData.h>

#pragma push_macro("DESC_BYTE_A8_X11")
#undef DESC_BYTE_A8_X11
#pragma push_macro("DESC_INT_ARGB_X11")
#undef DESC_INT_ARGB_X11
#pragma push_macro("DESC_INT_RGB_X11")
#undef DESC_INT_RGB_X11

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
		}
	}
}
namespace sun {
	namespace awt {
		class X11ComponentPeer;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
		class SurfaceDataProxy;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class MaskFill;
			class RenderLoops;
			class SurfaceType;
			class XORComposite;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class PixelToShapeConverter;
			class Region;
			class ShapeDrawPipe;
			class TextPipe;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class XRBackend;
			class XRCompositeManager;
			class XRDrawImage;
			class XRGraphicsConfig;
			class XRRenderer;
			class XRSurfaceData$XRPixmapSurfaceData;
			class XRSurfaceData$XRWindowSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRSurfaceData : public ::sun::java2d::x11::XSurfaceData {
	$class(XRSurfaceData, 0, ::sun::java2d::x11::XSurfaceData)
public:
	XRSurfaceData();
	using ::sun::java2d::x11::XSurfaceData::getSurfaceType;
	void init$(::sun::awt::X11ComponentPeer* peer, ::sun::java2d::xr::XRGraphicsConfig* gc, ::sun::java2d::loops::SurfaceType* sType, ::java::awt::image::ColorModel* cm, int32_t depth, int32_t transparency);
	void init$(::sun::java2d::xr::XRBackend* renderQueue);
	virtual void XRInitSurface(int32_t depth, int32_t width, int32_t height, int64_t drawable, int32_t pictFormat);
	virtual bool canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) {return false;}
	virtual bool copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	static ::sun::java2d::xr::XRSurfaceData$XRWindowSurfaceData* createData(::sun::awt::X11ComponentPeer* peer);
	static ::sun::java2d::xr::XRSurfaceData$XRPixmapSurfaceData* createData(::sun::java2d::xr::XRGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::image::ColorModel* cm, ::java::awt::Image* image, int64_t drawable, int32_t transparency, bool isTexture);
	virtual void freeXSDOPicture(int64_t xsdo);
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	static ::sun::java2d::xr::XRGraphicsConfig* getGC(::sun::awt::X11ComponentPeer* peer);
	virtual int64_t getGC();
	virtual ::sun::java2d::xr::XRGraphicsConfig* getGraphicsConfig();
	virtual ::sun::java2d::loops::MaskFill* getMaskFill(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual int32_t getPicture();
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::sun::java2d::loops::RenderLoops* getRenderLoops(::sun::java2d::SunGraphics2D* sg2d) override;
	static ::sun::java2d::loops::SurfaceType* getSurfaceType(::sun::java2d::xr::XRGraphicsConfig* gc, int32_t transparency);
	virtual ::sun::java2d::pipe::TextPipe* getTextPipe(::sun::java2d::SunGraphics2D* sg2d);
	virtual int32_t getXid();
	static void initIDs();
	virtual void initXRPicture(int64_t xsdo, int32_t pictForm);
	static void initXRSurfaceData();
	virtual void initXRender(int32_t pictureFormat);
	virtual void invalidate() override;
	virtual bool isXRDrawableValid();
	virtual void makePipes();
	virtual ::sun::java2d::SurfaceDataProxy* makeProxyFor(::sun::java2d::SurfaceData* srcData) override;
	virtual void setStaticSrcTx(::java::awt::geom::AffineTransform* staticSrcTx);
	virtual void validateAsDestination(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::pipe::Region* clip);
	virtual void validateAsSource(::java::awt::geom::AffineTransform* sxForm, int32_t repeat, int32_t filter);
	virtual void validateCopyAreaGC(::sun::java2d::pipe::Region* gcClip, bool needExposures);
	virtual void validatePipe(::sun::java2d::SunGraphics2D* sg2d) override;
	::sun::awt::X11ComponentPeer* peer = nullptr;
	::sun::java2d::xr::XRGraphicsConfig* graphicsConfig = nullptr;
	::sun::java2d::xr::XRBackend* renderQueue = nullptr;
	::sun::java2d::loops::RenderLoops* solidloops = nullptr;
	int32_t depth = 0;
	static $String* DESC_BYTE_A8_X11;
	static $String* DESC_INT_RGB_X11;
	static $String* DESC_INT_ARGB_X11;
	static ::sun::java2d::loops::SurfaceType* ByteA8X11;
	static ::sun::java2d::loops::SurfaceType* IntRgbX11;
	static ::sun::java2d::loops::SurfaceType* IntArgbPreX11;
	::sun::java2d::xr::XRRenderer* xrpipe = nullptr;
	::sun::java2d::pipe::PixelToShapeConverter* xrtxpipe = nullptr;
	::sun::java2d::pipe::TextPipe* xrtextpipe = nullptr;
	::sun::java2d::xr::XRDrawImage* xrDrawImage = nullptr;
	::sun::java2d::pipe::ShapeDrawPipe* aaShapePipe = nullptr;
	::sun::java2d::pipe::PixelToShapeConverter* aaPixelToShapeConv = nullptr;
	int64_t xgc = 0;
	int32_t validatedGCForegroundPixel = 0;
	::sun::java2d::loops::XORComposite* validatedXorComp = nullptr;
	int32_t xid = 0;
	int32_t picture = 0;
	::sun::java2d::xr::XRCompositeManager* maskBuffer = nullptr;
	::sun::java2d::pipe::Region* validatedClip = nullptr;
	::sun::java2d::pipe::Region* validatedGCClip = nullptr;
	bool validatedExposures = false;
	bool transformInUse = false;
	::java::awt::geom::AffineTransform* validatedSourceTransform = nullptr;
	::java::awt::geom::AffineTransform* staticSrcTx = nullptr;
	int32_t validatedRepeat = 0;
	int32_t validatedFilter = 0;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("DESC_BYTE_A8_X11")
#pragma pop_macro("DESC_INT_ARGB_X11")
#pragma pop_macro("DESC_INT_RGB_X11")

#endif // _sun_java2d_xr_XRSurfaceData_h_