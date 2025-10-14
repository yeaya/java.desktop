#ifndef _java_awt_GraphicsDevice_h_
#define _java_awt_GraphicsDevice_h_
//$ class java.awt.GraphicsDevice
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TYPE_IMAGE_BUFFER")
#undef TYPE_IMAGE_BUFFER
#pragma push_macro("TYPE_PRINTER")
#undef TYPE_PRINTER
#pragma push_macro("TYPE_RASTER_SCREEN")
#undef TYPE_RASTER_SCREEN

namespace java {
	namespace awt {
		class DisplayMode;
		class GraphicsConfigTemplate;
		class GraphicsConfiguration;
		class GraphicsDevice$WindowTranslucency;
		class Rectangle;
		class Window;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace java {
	namespace awt {

class $import GraphicsDevice : public ::java::lang::Object {
	$class(GraphicsDevice, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GraphicsDevice();
	void init$();
	virtual int32_t getAvailableAcceleratedMemory();
	virtual ::java::awt::GraphicsConfiguration* getBestConfiguration(::java::awt::GraphicsConfigTemplate* gct);
	virtual $Array<::java::awt::GraphicsConfiguration>* getConfigurations() {return nullptr;}
	virtual ::java::awt::GraphicsConfiguration* getDefaultConfiguration() {return nullptr;}
	virtual ::java::awt::DisplayMode* getDisplayMode();
	virtual $Array<::java::awt::DisplayMode>* getDisplayModes();
	virtual ::java::awt::Window* getFullScreenWindow();
	virtual $String* getIDstring() {return nullptr;}
	virtual ::java::awt::GraphicsConfiguration* getTranslucencyCapableGC();
	virtual int32_t getType() {return 0;}
	virtual bool isDisplayChangeSupported();
	virtual bool isFullScreenSupported();
	static bool isWindowOpacitySupported();
	virtual bool isWindowPerpixelTranslucencySupported();
	static bool isWindowShapingSupported();
	virtual bool isWindowTranslucencySupported(::java::awt::GraphicsDevice$WindowTranslucency* translucencyKind);
	virtual void setDisplayMode(::java::awt::DisplayMode* dm);
	virtual void setFullScreenWindow(::java::awt::Window* w);
	::java::awt::Window* fullScreenWindow = nullptr;
	::sun::awt::AppContext* fullScreenAppContext = nullptr;
	$Object* fsAppContextLock = nullptr;
	::java::awt::Rectangle* windowedModeBounds = nullptr;
	static const int32_t TYPE_RASTER_SCREEN = 0;
	static const int32_t TYPE_PRINTER = 1;
	static const int32_t TYPE_IMAGE_BUFFER = 2;
};

	} // awt
} // java

#pragma pop_macro("TYPE_IMAGE_BUFFER")
#pragma pop_macro("TYPE_PRINTER")
#pragma pop_macro("TYPE_RASTER_SCREEN")

#endif // _java_awt_GraphicsDevice_h_