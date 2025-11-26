#ifndef _sun_java2d_x11_XSurfaceData_h_
#define _sun_java2d_x11_XSurfaceData_h_
//$ class sun.java2d.x11.XSurfaceData
//$ extends sun.java2d.SurfaceData

#include <sun/java2d/SurfaceData.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
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
		namespace loops {
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace x11 {

class XSurfaceData : public ::sun::java2d::SurfaceData {
	$class(XSurfaceData, 0, ::sun::java2d::SurfaceData)
public:
	XSurfaceData();
	void init$(::sun::java2d::loops::SurfaceType* surfaceType, ::java::awt::image::ColorModel* cm);
	static int64_t XCreateGC(int64_t pXSData);
	static void XResetClip(int64_t xgc);
	static void XSetClip(int64_t xgc, int32_t lox, int32_t loy, int32_t hix, int32_t hiy, ::sun::java2d::pipe::Region* complexclip);
	static void XSetGraphicsExposures(int64_t xgc, bool needExposures);
	virtual void flushNativeSurface();
	virtual void initOps(::sun::awt::X11ComponentPeer* peer, ::sun::awt::X11GraphicsConfig* gc, int32_t depth);
	virtual bool isDrawableValid();
	static bool isX11SurfaceDataInitialized();
	virtual void setInvalid();
	static void setX11SurfaceDataInitialized();
	static bool isX11SurfaceDataInitialized$;
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_XSurfaceData_h_