#ifndef _sun_java2d_ScreenUpdateManager_h_
#define _sun_java2d_ScreenUpdateManager_h_
//$ class sun.java2d.ScreenUpdateManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
		class Graphics2D;
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
		class SurfaceData;
	}
}

namespace sun {
	namespace java2d {

class ScreenUpdateManager : public ::java::lang::Object {
	$class(ScreenUpdateManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ScreenUpdateManager();
	void init$();
	virtual ::java::awt::Graphics2D* createGraphics(::sun::java2d::SurfaceData* sd, ::sun::awt::windows::WComponentPeer* peer, ::java::awt::Color* fgColor, ::java::awt::Color* bgColor, ::java::awt::Font* font);
	virtual ::sun::java2d::SurfaceData* createScreenSurface(::sun::awt::Win32GraphicsConfig* gc, ::sun::awt::windows::WComponentPeer* peer, int32_t bbNum, bool isResize);
	virtual void dropScreenSurface(::sun::java2d::SurfaceData* sd);
	static ::sun::java2d::ScreenUpdateManager* getInstance();
	virtual ::sun::java2d::SurfaceData* getReplacementScreenSurface(::sun::awt::windows::WComponentPeer* peer, ::sun::java2d::SurfaceData* oldsd);
	static ::sun::java2d::ScreenUpdateManager* theInstance;
};

	} // java2d
} // sun

#endif // _sun_java2d_ScreenUpdateManager_h_