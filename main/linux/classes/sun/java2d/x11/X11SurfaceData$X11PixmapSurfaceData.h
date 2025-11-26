#ifndef _sun_java2d_x11_X11SurfaceData$X11PixmapSurfaceData_h_
#define _sun_java2d_x11_X11SurfaceData$X11PixmapSurfaceData_h_
//$ class sun.java2d.x11.X11SurfaceData$X11PixmapSurfaceData
//$ extends sun.java2d.x11.X11SurfaceData

#include <sun/java2d/x11/X11SurfaceData.h>

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
	namespace awt {
		class X11GraphicsConfig;
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
		namespace x11 {

class X11SurfaceData$X11PixmapSurfaceData : public ::sun::java2d::x11::X11SurfaceData {
	$class(X11SurfaceData$X11PixmapSurfaceData, $NO_CLASS_INIT, ::sun::java2d::x11::X11SurfaceData)
public:
	X11SurfaceData$X11PixmapSurfaceData();
	void init$(::sun::awt::X11GraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::Image* image, ::sun::java2d::loops::SurfaceType* sType, ::java::awt::image::ColorModel* cm, int64_t drawable, int32_t transparency, bool isTexture);
	virtual bool canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void flush() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	virtual int32_t getTransparency() override;
	::java::awt::Image* offscreenImage = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t transparency = 0;
	int32_t scale = 0;
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11SurfaceData$X11PixmapSurfaceData_h_