#ifndef _sun_awt_Win32GraphicsEnvironment_h_
#define _sun_awt_Win32GraphicsEnvironment_h_
//$ class sun.awt.Win32GraphicsEnvironment
//$ extends sun.java2d.SunGraphicsEnvironment

#include <sun/java2d/SunGraphicsEnvironment.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace sun {
	namespace awt {

class $import Win32GraphicsEnvironment : public ::sun::java2d::SunGraphicsEnvironment {
	$class(Win32GraphicsEnvironment, 0, ::sun::java2d::SunGraphicsEnvironment)
public:
	Win32GraphicsEnvironment();
	void init$();
	virtual void displayChanged() override;
	static void dwmCompositionChanged(bool enabled);
	int32_t getDefaultScreen();
	virtual ::java::awt::GraphicsDevice* getDefaultScreenDevice() override;
	virtual int32_t getNumScreens() override;
	int32_t getXResolution();
	int32_t getYResolution();
	static void initDisplay();
	static void initDisplayWrapper();
	static bool isDWMCompositionEnabled();
	virtual bool isDisplayLocal() override;
	virtual bool isFlipStrategyPreferred(::java::awt::peer::ComponentPeer* peer) override;
	static bool isVistaOS();
	virtual ::java::awt::GraphicsDevice* makeScreenDevice(int32_t screennum) override;
	static bool $assertionsDisabled;
	static float debugScaleX;
	static float debugScaleY;
	static bool displayInitialized;
	::java::util::ArrayList* oldDevices = nullptr;
	static $volatile(bool) isDWMCompositionEnabled$;
};

	} // awt
} // sun

#endif // _sun_awt_Win32GraphicsEnvironment_h_