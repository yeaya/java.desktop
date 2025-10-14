#ifndef _sun_java2d_windows_GDIWindowSurfaceData_h_
#define _sun_java2d_windows_GDIWindowSurfaceData_h_
//$ class sun.java2d.windows.GDIWindowSurfaceData
//$ extends sun.java2d.SurfaceData

#include <sun/java2d/SurfaceData.h>

#pragma push_macro("DESC_GDI")
#undef DESC_GDI

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Rectangle;
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
		class Win32GraphicsConfig;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceDataProxy;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class RenderLoops;
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class PixelToShapeConverter;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace windows {
			class GDIRenderer;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace windows {

class GDIWindowSurfaceData : public ::sun::java2d::SurfaceData {
	$class(GDIWindowSurfaceData, 0, ::sun::java2d::SurfaceData)
public:
	GDIWindowSurfaceData();
	using ::sun::java2d::SurfaceData::getSurfaceType;
	void init$(::sun::awt::windows::WComponentPeer* peer, ::sun::java2d::loops::SurfaceType* sType);
	virtual bool copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	static ::sun::java2d::windows::GDIWindowSurfaceData* createData(::sun::awt::windows::WComponentPeer* peer);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual $Object* getDestination() override;
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	virtual ::sun::awt::windows::WComponentPeer* getPeer();
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::sun::java2d::loops::RenderLoops* getRenderLoops(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	static ::sun::java2d::loops::SurfaceType* getSurfaceType(::java::awt::image::ColorModel* cm);
	static void initIDs($Class* xorComp);
	void initOps(::sun::awt::windows::WComponentPeer* peer, int32_t depth, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t screen);
	virtual void invalidate() override;
	void invalidateSD();
	virtual ::sun::java2d::SurfaceDataProxy* makeProxyFor(::sun::java2d::SurfaceData* srcData) override;
	virtual void validatePipe(::sun::java2d::SunGraphics2D* sg2d) override;
	::sun::awt::windows::WComponentPeer* peer = nullptr;
	::sun::awt::Win32GraphicsConfig* graphicsConfig = nullptr;
	::sun::java2d::loops::RenderLoops* solidloops = nullptr;
	static $String* DESC_GDI;
	static ::sun::java2d::loops::SurfaceType* AnyGdi;
	static ::sun::java2d::loops::SurfaceType* IntRgbGdi;
	static ::sun::java2d::loops::SurfaceType* Ushort565RgbGdi;
	static ::sun::java2d::loops::SurfaceType* Ushort555RgbGdi;
	static ::sun::java2d::loops::SurfaceType* ThreeByteBgrGdi;
	double scaleX = 0.0;
	double scaleY = 0.0;
	static ::sun::java2d::windows::GDIRenderer* gdiPipe;
	static ::sun::java2d::pipe::PixelToShapeConverter* gdiTxPipe;
};

		} // windows
	} // java2d
} // sun

#pragma pop_macro("DESC_GDI")

#endif // _sun_java2d_windows_GDIWindowSurfaceData_h_