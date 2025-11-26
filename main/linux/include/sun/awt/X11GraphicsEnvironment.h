#ifndef _sun_awt_X11GraphicsEnvironment_h_
#define _sun_awt_X11GraphicsEnvironment_h_
//$ class sun.awt.X11GraphicsEnvironment
//$ extends sun.java2d.SunGraphicsEnvironment

#include <java/lang/Array.h>
#include <sun/java2d/SunGraphicsEnvironment.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace sun {
	namespace awt {

class $import X11GraphicsEnvironment : public ::sun::java2d::SunGraphicsEnvironment {
	$class(X11GraphicsEnvironment, 0, ::sun::java2d::SunGraphicsEnvironment)
public:
	X11GraphicsEnvironment();
	void init$();
	static bool _isDisplayLocal();
	static int32_t checkShmExt();
	$String* getDefaultFontFaceName();
	virtual ::java::awt::GraphicsDevice* getDefaultScreenDevice() override;
	int32_t getDefaultScreenNum();
	static $String* getDisplayString();
	virtual int32_t getNumScreens() override;
	::java::awt::GraphicsDevice* getScreenDevice(int32_t screen);
	virtual $Array<::java::awt::GraphicsDevice>* getScreenDevices() override;
	void initDevices();
	static void initDisplay(bool glxRequested);
	static bool initGLX();
	static void initNativeData();
	static bool initXRender(bool verbose, bool ignoreLinuxVersion);
	virtual bool isDisplayLocal() override;
	static bool isGLXAvailable();
	static bool isGLXVerbose();
	static bool isXRenderAvailable();
	static bool isXRenderVerbose();
	virtual ::java::awt::GraphicsDevice* makeScreenDevice(int32_t screennum) override;
	static bool pRunningXinerama();
	virtual void paletteChanged() override;
	void rebuildDevices();
	bool runningXinerama();
	static bool glxAvailable;
	static bool glxVerbose;
	static bool xRenderVerbose;
	static bool xRenderAvailable;
	::java::lang::Boolean* isDisplayLocal$ = nullptr;
	::java::util::Map* devices = nullptr;
	int32_t mainScreen = 0;
	::java::util::List* oldDevices = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_X11GraphicsEnvironment_h_