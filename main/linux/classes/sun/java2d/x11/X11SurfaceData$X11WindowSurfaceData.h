#ifndef _sun_java2d_x11_X11SurfaceData$X11WindowSurfaceData_h_
#define _sun_java2d_x11_X11SurfaceData$X11WindowSurfaceData_h_
//$ class sun.java2d.x11.X11SurfaceData$X11WindowSurfaceData
//$ extends sun.java2d.x11.X11SurfaceData

#include <sun/java2d/x11/X11SurfaceData.h>

namespace java {
	namespace awt {
		class Rectangle;
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

class X11SurfaceData$X11WindowSurfaceData : public ::sun::java2d::x11::X11SurfaceData {
	$class(X11SurfaceData$X11WindowSurfaceData, $NO_CLASS_INIT, ::sun::java2d::x11::X11SurfaceData)
public:
	X11SurfaceData$X11WindowSurfaceData();
	void init$(::sun::awt::X11ComponentPeer* peer, ::sun::awt::X11GraphicsConfig* gc, ::sun::java2d::loops::SurfaceType* sType);
	virtual bool canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	int32_t scale = 0;
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11SurfaceData$X11WindowSurfaceData_h_