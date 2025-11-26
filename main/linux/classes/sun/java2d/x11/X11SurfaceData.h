#ifndef _sun_java2d_x11_X11SurfaceData_h_
#define _sun_java2d_x11_X11SurfaceData_h_
//$ class sun.java2d.x11.X11SurfaceData
//$ extends sun.java2d.x11.XSurfaceData

#include <sun/java2d/x11/XSurfaceData.h>

#pragma push_macro("DESC_3BYTE_BGR_X11")
#undef DESC_3BYTE_BGR_X11
#pragma push_macro("DESC_3BYTE_BGR_X11_BM")
#undef DESC_3BYTE_BGR_X11_BM
#pragma push_macro("DESC_3BYTE_RGB_X11")
#undef DESC_3BYTE_RGB_X11
#pragma push_macro("DESC_3BYTE_RGB_X11_BM")
#undef DESC_3BYTE_RGB_X11_BM
#pragma push_macro("DESC_4BYTE_ABGR_PRE_X11")
#undef DESC_4BYTE_ABGR_PRE_X11
#pragma push_macro("DESC_BYTE_GRAY_X11")
#undef DESC_BYTE_GRAY_X11
#pragma push_macro("DESC_BYTE_GRAY_X11_BM")
#undef DESC_BYTE_GRAY_X11_BM
#pragma push_macro("DESC_BYTE_IND_OPQ_X11")
#undef DESC_BYTE_IND_OPQ_X11
#pragma push_macro("DESC_BYTE_IND_X11_BM")
#undef DESC_BYTE_IND_X11_BM
#pragma push_macro("DESC_INDEX8_GRAY_X11")
#undef DESC_INDEX8_GRAY_X11
#pragma push_macro("DESC_INDEX8_GRAY_X11_BM")
#undef DESC_INDEX8_GRAY_X11_BM
#pragma push_macro("DESC_INT_ARGB_PRE_X11")
#undef DESC_INT_ARGB_PRE_X11
#pragma push_macro("DESC_INT_BGR_X11")
#undef DESC_INT_BGR_X11
#pragma push_macro("DESC_INT_BGR_X11_BM")
#undef DESC_INT_BGR_X11_BM
#pragma push_macro("DESC_INT_RGB_X11")
#undef DESC_INT_RGB_X11
#pragma push_macro("DESC_INT_RGB_X11_BM")
#undef DESC_INT_RGB_X11_BM
#pragma push_macro("DESC_USHORT_INDEXED_X11")
#undef DESC_USHORT_INDEXED_X11
#pragma push_macro("DESC_USHORT_INDEXED_X11_BM")
#undef DESC_USHORT_INDEXED_X11_BM

namespace java {
	namespace awt {
		class Composite;
		class GraphicsConfiguration;
		class Image;
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
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace sun {
	namespace awt {
		class X11ComponentPeer;
		class X11GraphicsConfig;
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
			class TextPipe;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace x11 {
			class X11Renderer;
			class X11SurfaceData$LazyPipe;
			class X11SurfaceData$X11PixmapSurfaceData;
			class X11SurfaceData$X11WindowSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace x11 {

class X11SurfaceData : public ::sun::java2d::x11::XSurfaceData {
	$class(X11SurfaceData, 0, ::sun::java2d::x11::XSurfaceData)
public:
	X11SurfaceData();
	using ::sun::java2d::x11::XSurfaceData::getSurfaceType;
	void init$(::sun::awt::X11ComponentPeer* peer, ::sun::awt::X11GraphicsConfig* gc, ::sun::java2d::loops::SurfaceType* sType, ::java::awt::image::ColorModel* cm);
	static void XSetCopyMode(int64_t xgc);
	static void XSetForeground(int64_t xgc, int32_t pixel);
	static void XSetXorMode(int64_t xgc);
	virtual bool canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) {return false;}
	virtual bool copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	static ::sun::java2d::x11::X11SurfaceData$X11WindowSurfaceData* createData(::sun::awt::X11ComponentPeer* peer);
	static ::sun::java2d::x11::X11SurfaceData$X11PixmapSurfaceData* createData(::sun::awt::X11GraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::image::ColorModel* cm, ::java::awt::Image* image, int64_t drawable, int32_t transparency, bool isTexture);
	int64_t getBlitGC(::sun::java2d::pipe::Region* clip, bool needExposures);
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	static ::sun::awt::X11GraphicsConfig* getGC(::sun::awt::X11ComponentPeer* peer);
	int64_t getGC(::sun::java2d::pipe::Region* clip, int32_t compState, ::java::awt::Composite* comp, int32_t pixel, bool needExposures);
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	int64_t getRenderGC(::sun::java2d::pipe::Region* clip, int32_t compState, ::java::awt::Composite* comp, int32_t pixel);
	virtual ::sun::java2d::loops::RenderLoops* getRenderLoops(::sun::java2d::SunGraphics2D* sg2d) override;
	static ::sun::java2d::loops::SurfaceType* getSurfaceType(::sun::awt::X11GraphicsConfig* gc, int32_t transparency);
	static ::sun::java2d::loops::SurfaceType* getSurfaceType(::sun::awt::X11GraphicsConfig* gc, int32_t transparency, bool pixmapSurface);
	static void initIDs($Class* xorComp);
	virtual void initSurface(int32_t depth, int32_t width, int32_t height, int64_t drawable);
	virtual void invalidate() override;
	static bool isAccelerationEnabled();
	static bool isShmPMAvailable();
	virtual void makePipes();
	virtual ::sun::java2d::SurfaceDataProxy* makeProxyFor(::sun::java2d::SurfaceData* srcData) override;
	virtual void validatePipe(::sun::java2d::SunGraphics2D* sg2d) override;
	::sun::awt::X11ComponentPeer* peer = nullptr;
	::sun::awt::X11GraphicsConfig* graphicsConfig = nullptr;
	::sun::java2d::loops::RenderLoops* solidloops = nullptr;
	int32_t depth = 0;
	static $String* DESC_INT_BGR_X11;
	static $String* DESC_INT_RGB_X11;
	static $String* DESC_4BYTE_ABGR_PRE_X11;
	static $String* DESC_INT_ARGB_PRE_X11;
	static $String* DESC_BYTE_IND_OPQ_X11;
	static $String* DESC_INT_BGR_X11_BM;
	static $String* DESC_INT_RGB_X11_BM;
	static $String* DESC_BYTE_IND_X11_BM;
	static $String* DESC_BYTE_GRAY_X11;
	static $String* DESC_INDEX8_GRAY_X11;
	static $String* DESC_BYTE_GRAY_X11_BM;
	static $String* DESC_INDEX8_GRAY_X11_BM;
	static $String* DESC_3BYTE_RGB_X11;
	static $String* DESC_3BYTE_BGR_X11;
	static $String* DESC_3BYTE_RGB_X11_BM;
	static $String* DESC_3BYTE_BGR_X11_BM;
	static $String* DESC_USHORT_555_RGB_X11;
	static $String* DESC_USHORT_565_RGB_X11;
	static $String* DESC_USHORT_555_RGB_X11_BM;
	static $String* DESC_USHORT_565_RGB_X11_BM;
	static $String* DESC_USHORT_INDEXED_X11;
	static $String* DESC_USHORT_INDEXED_X11_BM;
	static ::sun::java2d::loops::SurfaceType* IntBgrX11;
	static ::sun::java2d::loops::SurfaceType* IntRgbX11;
	static ::sun::java2d::loops::SurfaceType* FourByteAbgrPreX11;
	static ::sun::java2d::loops::SurfaceType* IntArgbPreX11;
	static ::sun::java2d::loops::SurfaceType* ThreeByteRgbX11;
	static ::sun::java2d::loops::SurfaceType* ThreeByteBgrX11;
	static ::sun::java2d::loops::SurfaceType* UShort555RgbX11;
	static ::sun::java2d::loops::SurfaceType* UShort565RgbX11;
	static ::sun::java2d::loops::SurfaceType* UShortIndexedX11;
	static ::sun::java2d::loops::SurfaceType* ByteIndexedOpaqueX11;
	static ::sun::java2d::loops::SurfaceType* ByteGrayX11;
	static ::sun::java2d::loops::SurfaceType* Index8GrayX11;
	static ::sun::java2d::loops::SurfaceType* IntBgrX11_BM;
	static ::sun::java2d::loops::SurfaceType* IntRgbX11_BM;
	static ::sun::java2d::loops::SurfaceType* ThreeByteRgbX11_BM;
	static ::sun::java2d::loops::SurfaceType* ThreeByteBgrX11_BM;
	static ::sun::java2d::loops::SurfaceType* UShort555RgbX11_BM;
	static ::sun::java2d::loops::SurfaceType* UShort565RgbX11_BM;
	static ::sun::java2d::loops::SurfaceType* UShortIndexedX11_BM;
	static ::sun::java2d::loops::SurfaceType* ByteIndexedX11_BM;
	static ::sun::java2d::loops::SurfaceType* ByteGrayX11_BM;
	static ::sun::java2d::loops::SurfaceType* Index8GrayX11_BM;
	static ::java::lang::Boolean* accelerationEnabled;
	::sun::java2d::x11::X11Renderer* x11pipe = nullptr;
	::sun::java2d::pipe::PixelToShapeConverter* x11txpipe = nullptr;
	static ::sun::java2d::pipe::TextPipe* x11textpipe;
	int64_t xgc = 0;
	::sun::java2d::pipe::Region* validatedClip = nullptr;
	::sun::java2d::loops::XORComposite* validatedXorComp = nullptr;
	int32_t xorpixelmod = 0;
	int32_t validatedPixel = 0;
	bool validatedExposures = false;
	static ::sun::java2d::x11::X11SurfaceData$LazyPipe* lazypipe;
};

		} // x11
	} // java2d
} // sun

#pragma pop_macro("DESC_3BYTE_BGR_X11")
#pragma pop_macro("DESC_3BYTE_BGR_X11_BM")
#pragma pop_macro("DESC_3BYTE_RGB_X11")
#pragma pop_macro("DESC_3BYTE_RGB_X11_BM")
#pragma pop_macro("DESC_4BYTE_ABGR_PRE_X11")
#pragma pop_macro("DESC_BYTE_GRAY_X11")
#pragma pop_macro("DESC_BYTE_GRAY_X11_BM")
#pragma pop_macro("DESC_BYTE_IND_OPQ_X11")
#pragma pop_macro("DESC_BYTE_IND_X11_BM")
#pragma pop_macro("DESC_INDEX8_GRAY_X11")
#pragma pop_macro("DESC_INDEX8_GRAY_X11_BM")
#pragma pop_macro("DESC_INT_ARGB_PRE_X11")
#pragma pop_macro("DESC_INT_BGR_X11")
#pragma pop_macro("DESC_INT_BGR_X11_BM")
#pragma pop_macro("DESC_INT_RGB_X11")
#pragma pop_macro("DESC_INT_RGB_X11_BM")
#pragma pop_macro("DESC_USHORT_INDEXED_X11")
#pragma pop_macro("DESC_USHORT_INDEXED_X11_BM")

#endif // _sun_java2d_x11_X11SurfaceData_h_