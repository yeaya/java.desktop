#ifndef _sun_java2d_xr_XRSurfaceData$XRPixmapSurfaceData_h_
#define _sun_java2d_xr_XRSurfaceData$XRPixmapSurfaceData_h_
//$ class sun.java2d.xr.XRSurfaceData$XRPixmapSurfaceData
//$ extends sun.java2d.xr.XRSurfaceData

#include <sun/java2d/xr/XRSurfaceData.h>

namespace java {
	namespace awt {
		class Image;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class XRGraphicsConfig;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRSurfaceData$XRPixmapSurfaceData : public ::sun::java2d::xr::XRSurfaceData {
	$class(XRSurfaceData$XRPixmapSurfaceData, $NO_CLASS_INIT, ::sun::java2d::xr::XRSurfaceData)
public:
	XRSurfaceData$XRPixmapSurfaceData();
	void init$(::sun::java2d::xr::XRGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::Image* image, ::sun::java2d::loops::SurfaceType* sType, ::java::awt::image::ColorModel* cm, int64_t drawable, int32_t transparency, int32_t pictFormat, int32_t depth, bool isTexture);
	virtual bool canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void flush() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	virtual int32_t getTransparency() override;
	virtual void initSurface(int32_t depth, int32_t width, int32_t height, int64_t drawable, int32_t pictFormat);
	::java::awt::Image* offscreenImage = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t transparency = 0;
	int32_t scale = 0;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRSurfaceData$XRPixmapSurfaceData_h_