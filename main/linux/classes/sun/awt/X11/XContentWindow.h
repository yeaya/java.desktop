#ifndef _sun_awt_X11_XContentWindow_h_
#define _sun_awt_X11_XContentWindow_h_
//$ class sun.awt.X11.XContentWindow
//$ extends sun.awt.X11.XWindow

#include <sun/awt/X11/XWindow.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Color;
		class Component;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class Point;
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
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class AwtGraphicsConfigData;
			class PropMwmHints;
			class WindowDimensions;
			class XCreateWindowParams;
			class XDecoratedPeer;
			class XEvent;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XContentWindow : public ::sun::awt::X11::XWindow {
	$class(XContentWindow, 0, ::sun::awt::X11::XWindow)
public:
	XContentWindow();
	using ::sun::awt::X11::XWindow::getGraphics;
	using ::sun::awt::X11::XWindow::handleKeyPress;
	void init$(::sun::awt::X11::XDecoratedPeer* parentFrame, ::java::awt::Rectangle* bounds);
	static ::sun::awt::X11::XContentWindow* createContent(::sun::awt::X11::XDecoratedPeer* parentFrame);
	virtual void dispose() override;
	virtual void doLayout(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	virtual ::java::awt::Component* getEventSource() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::sun::awt::X11::AwtGraphicsConfigData* getGraphicsConfigurationData() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::sun::awt::X11::PropMwmHints* getMWMHints() override;
	virtual ::sun::java2d::SurfaceData* getSurfaceData() override;
	virtual $Object* getTarget() override;
	virtual ::java::awt::Rectangle* getTargetBounds() override;
	virtual $String* getWMName() override;
	virtual ::java::awt::Color* getWinBackground() override;
	virtual void handleButtonPressRelease(::sun::awt::X11::XEvent* xev) override;
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleExposeEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleKeyPress(::sun::awt::X11::XEvent* xev) override;
	virtual void handleKeyRelease(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMotionNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev) override;
	void handleResize(::java::awt::Rectangle* bounds);
	virtual void handleUnmapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleXCrossingEvent(::sun::awt::X11::XEvent* xev) override;
	virtual bool isEmbedded() override;
	virtual bool isEventDisabled(::sun::awt::X11::XEvent* e) override;
	virtual bool isMouseAbove() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void popup(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void postEventToEventQueue(::java::awt::AWTEvent* event) override;
	using ::sun::awt::X11::XWindow::postInit;
	virtual void postKeyEvent(int32_t id, int32_t keyCode, int32_t keyChar, int32_t keyLocation, int32_t state, int64_t event, int32_t eventSize, int64_t rawCode, int32_t unicodeFromPrimaryKeysym, int32_t extendedKeyCode) override;
	virtual void postPaintEvent(::java::awt::Component* target, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::sun::awt::X11::XWindow::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	void purgeIconifiedExposeEvents();
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void reshape(::java::awt::Rectangle* bounds) override;
	virtual void setBackground(::java::awt::Color* c) override;
	void setContentBounds(::sun::awt::X11::WindowDimensions* dims);
	virtual void setFullScreenExclusiveModeState(bool state) override;
	virtual void setMWMHints(::sun::awt::X11::PropMwmHints* hints) override;
	virtual $String* toString() override;
	static ::sun::util::logging::PlatformLogger* insLog;
	::sun::awt::X11::XDecoratedPeer* parentFrame = nullptr;
	::java::util::List* iconifiedExposeEvents = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XContentWindow_h_