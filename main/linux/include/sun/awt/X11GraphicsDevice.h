#ifndef _sun_awt_X11GraphicsDevice_h_
#define _sun_awt_X11GraphicsDevice_h_
//$ class sun.awt.X11GraphicsDevice
//$ extends java.awt.GraphicsDevice
//$ implements sun.awt.DisplayChangedListener

#include <java/awt/GraphicsDevice.h>
#include <java/lang/Array.h>
#include <sun/awt/DisplayChangedListener.h>

namespace java {
	namespace awt {
		class AWTPermission;
		class DisplayMode;
		class GraphicsConfiguration;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Void;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class HashMap;
		class HashSet;
	}
}
namespace sun {
	namespace awt {
		class SunDisplayChanger;
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
	namespace awt {

class $import X11GraphicsDevice : public ::java::awt::GraphicsDevice, public ::sun::awt::DisplayChangedListener {
	$class(X11GraphicsDevice, $NO_CLASS_INIT, ::java::awt::GraphicsDevice, ::sun::awt::DisplayChangedListener)
public:
	X11GraphicsDevice();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t screennum);
	void addDisplayChangedListener(::sun::awt::DisplayChangedListener* client);
	void addDoubleBufferVisual(int32_t visNum);
	static void configDisplayMode(int32_t screen, int32_t width, int32_t height, int32_t displayMode);
	virtual void displayChanged() override;
	static void enterFullScreenExclusive(int64_t window);
	static void enterFullScreenExclusive(::java::awt::Window* w);
	static void enumDisplayModes(int32_t screen, ::java::util::ArrayList* modes);
	static void exitFullScreenExclusive(int64_t window);
	static void exitFullScreenExclusive(::java::awt::Window* w);
	::java::awt::Rectangle* getBounds();
	int32_t getConfigColormap(int32_t index, int32_t screen);
	int32_t getConfigDepth(int32_t index, int32_t screen);
	int32_t getConfigVisualId(int32_t index, int32_t screen);
	virtual $Array<::java::awt::GraphicsConfiguration>* getConfigurations() override;
	static ::java::awt::DisplayMode* getCurrentDisplayMode(int32_t screen);
	virtual ::java::awt::GraphicsConfiguration* getDefaultConfiguration() override;
	::java::awt::DisplayMode* getDefaultDisplayMode();
	int64_t getDisplay();
	virtual ::java::awt::DisplayMode* getDisplayMode() override;
	virtual $Array<::java::awt::DisplayMode>* getDisplayModes() override;
	void getDoubleBufferVisuals(int32_t screen);
	virtual $String* getIDstring() override;
	::java::awt::DisplayMode* getMatchingDisplayMode(::java::awt::DisplayMode* dm);
	int32_t getNativeScale();
	static double getNativeScaleFactor(int32_t screen);
	int32_t getNumConfigs(int32_t screen);
	$Object* getProxyKeyFor(::sun::java2d::loops::SurfaceType* st);
	int32_t getScaleFactor();
	int32_t getScreen();
	virtual int32_t getType() override;
	int32_t initScaleFactor();
	static bool initXrandrExtension();
	void invalidate(::sun::awt::X11GraphicsDevice* device);
	static bool isDBESupported();
	virtual bool isDisplayChangeSupported() override;
	virtual bool isFullScreenSupported() override;
	static bool isXrandrExtensionSupported();
	void lambda$setDisplayMode$0();
	::java::lang::Void* lambda$setDisplayMode$1();
	void makeConfigurations();
	void makeDefaultConfiguration();
	::java::awt::Rectangle* pGetBounds(int32_t screenNum);
	virtual void paletteChanged() override;
	void removeDisplayChangedListener(::sun::awt::DisplayChangedListener* client);
	int32_t scaleDown(int32_t x);
	int32_t scaleUp(int32_t x);
	virtual void setDisplayMode(::java::awt::DisplayMode* dm) override;
	virtual void setFullScreenWindow(::java::awt::Window* w) override;
	virtual $String* toString() override;
	$volatile(int32_t) screen = 0;
	::java::util::HashMap* x11ProxyKeyMap = nullptr;
	static ::java::awt::AWTPermission* fullScreenExclusivePermission;
	static ::java::lang::Boolean* xrandrExtSupported;
	$Object* configLock = nullptr;
	::sun::awt::SunDisplayChanger* topLevels = nullptr;
	::java::awt::DisplayMode* origDisplayMode = nullptr;
	bool shutdownHookRegistered = false;
	int32_t scale = 0;
	$Array<::java::awt::GraphicsConfiguration>* configs = nullptr;
	::java::awt::GraphicsConfiguration* defaultConfig = nullptr;
	::java::util::HashSet* doubleBufferVisuals = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_X11GraphicsDevice_h_