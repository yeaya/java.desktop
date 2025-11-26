#ifndef _sun_awt_X11_XWindow_h_
#define _sun_awt_X11_XWindow_h_
//$ class sun.awt.X11.XWindow
//$ extends sun.awt.X11.XBaseWindow
//$ implements sun.awt.X11ComponentPeer

#include <java/lang/Array.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11ComponentPeer.h>

#pragma push_macro("AWT_MULTICLICK_SMUDGE")
#undef AWT_MULTICLICK_SMUDGE
#pragma push_macro("JAWT_LOCK_BOUNDS_CHANGED")
#undef JAWT_LOCK_BOUNDS_CHANGED
#pragma push_macro("JAWT_LOCK_CLIP_CHANGED")
#undef JAWT_LOCK_CLIP_CHANGED
#pragma push_macro("JAWT_LOCK_ERROR")
#undef JAWT_LOCK_ERROR
#pragma push_macro("JAWT_LOCK_SURFACE_CHANGED")
#undef JAWT_LOCK_SURFACE_CHANGED
#pragma push_macro("REPARENTED")
#undef REPARENTED
#pragma push_macro("TARGET")
#undef TARGET

namespace java {
	namespace awt {
		class AWTEvent;
		class AWTKeyStroke;
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
		namespace event {
			class KeyEvent;
		}
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
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class AwtGraphicsConfigData;
			class PropMwmHints;
			class XAtom;
			class XAtomList;
			class XCreateWindowParams;
			class XEvent;
			class XKeyEvent;
			class XRepaintArea;
			class XWindowAttributesData;
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
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWindow : public ::sun::awt::X11::XBaseWindow, public ::sun::awt::X11ComponentPeer {
	$class(XWindow, 0, ::sun::awt::X11::XBaseWindow, ::sun::awt::X11ComponentPeer)
public:
	XWindow();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual int64_t getContentWindow() override;
	virtual int64_t getWindow() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11::XCreateWindowParams* params);
	void init$();
	void init$(int64_t parentWindow, ::java::awt::Rectangle* bounds);
	void init$(::java::awt::Component* target, int64_t parentWindow, ::java::awt::Rectangle* bounds);
	void init$(::java::awt::Component* target, int64_t parentWindow);
	void init$(::java::awt::Component* target);
	void init$(Object$* target);
	void init$(int64_t parentWindow);
	virtual void dispose();
	virtual bool doEraseBackground();
	virtual void doLayout(int32_t x, int32_t y, int32_t width, int32_t height);
	void doValidateSurface();
	void dumpKeysymArray(::sun::awt::X11::XKeyEvent* ev);
	virtual void enterNotify(int64_t window);
	virtual void flush() override;
	static int32_t getAWTKeyCodeForKeySym(int32_t keysym);
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency);
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	static ::java::awt::Font* getDefaultFont();
	virtual ::java::awt::Component* getEventSource();
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font);
	virtual ::java::awt::Graphics* getGraphics(::sun::java2d::SurfaceData* surfData, ::java::awt::Color* afore, ::java::awt::Color* aback, ::java::awt::Font* afont);
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::sun::awt::X11::AwtGraphicsConfigData* getGraphicsConfigurationData();
	static int32_t getKeySymForAWTKeyCode(int32_t keycode);
	virtual ::java::awt::Point* getLocationOnScreen();
	virtual ::sun::awt::X11::PropMwmHints* getMWMHints();
	static int32_t getModifiers(int32_t state, int32_t button, int32_t keyCode);
	static int32_t getModifiers(int32_t state, int32_t button, int32_t keyCode, bool isWheelMouse);
	static int32_t getMouseMovementSmudge();
	static int64_t getParentWindowID(::java::awt::Component* target);
	static ::sun::awt::X11::XWindow* getParentXWindowObject(::java::awt::Component* target);
	virtual int32_t getScale() override;
	virtual ::sun::java2d::SurfaceData* getSurfaceData() override;
	virtual $Object* getTarget() override;
	virtual ::java::awt::Rectangle* getTargetBounds();
	virtual $StringArray* getWMClass();
	virtual ::sun::awt::X11::XAtomList* getWMProtocols();
	virtual int32_t getWMState();
	static int32_t getWheelModifiers(int32_t state, int32_t button);
	virtual ::java::awt::Color* getWinBackground();
	static int32_t getXModifiers(::java::awt::AWTKeyStroke* stroke);
	virtual void handleButtonPressRelease(::sun::awt::X11::XEvent* xev) override;
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleExposeEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleKeyPress(::sun::awt::X11::XEvent* xev) override;
	void handleKeyPress(::sun::awt::X11::XKeyEvent* ev);
	virtual void handleKeyRelease(::sun::awt::X11::XEvent* xev) override;
	void handleKeyRelease(::sun::awt::X11::XKeyEvent* ev);
	virtual void handleMapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMotionNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handleUnmapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleXCrossingEvent(::sun::awt::X11::XEvent* xev) override;
	bool haveCurrentX11InputMethodInstance();
	virtual void initGraphicsConfiguration();
	static void initIDs();
	void initWMProtocols();
	bool isDeadKey(int64_t keysym);
	virtual bool isEmbedded();
	bool isFullScreenExclusiveMode();
	virtual bool isLocationByPlatform();
	virtual bool isMouseAbove();
	virtual bool isParentOf(::sun::awt::X11::XWindow* win);
	virtual bool isReparented();
	virtual bool isResizable();
	virtual bool isShowing();
	static bool isWheel(int32_t button);
	virtual int32_t keyEventType2Id(int32_t xEventType);
	virtual int32_t keysymToUnicode(int64_t keysym, int32_t state);
	virtual void layout();
	virtual void leaveNotify(int64_t window);
	virtual void logIncomingKeyEvent(::sun::awt::X11::XKeyEvent* ev);
	virtual void paint(::java::awt::Graphics* g);
	virtual void paintPeer(::java::awt::Graphics* g);
	virtual void popup(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void postEvent(::java::awt::AWTEvent* event);
	static void postEventStatic(::java::awt::AWTEvent* event);
	virtual void postEventToEventQueue(::java::awt::AWTEvent* event);
	using ::sun::awt::X11::XBaseWindow::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void postKeyEvent(int32_t id, int32_t keyCode, int32_t keyChar, int32_t keyLocation, int32_t state, int64_t event, int32_t eventSize, int64_t rawCode, int32_t unicodeFromPrimaryKeysym, int32_t extendedKeyCode);
	virtual void postPaintEvent(::java::awt::Component* target, int32_t x, int32_t y, int32_t w, int32_t h);
	using ::sun::awt::X11::XBaseWindow::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual bool prePostEvent(::java::awt::AWTEvent* e);
	static int32_t primaryUnicode2JavaKeycode(int32_t uni);
	void repaint(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void repaint();
	virtual void reshape(::java::awt::Rectangle* bounds);
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual int32_t scaleDown(int32_t x) override;
	virtual int32_t scaleUp(int32_t x) override;
	static void sendEvent(::java::awt::AWTEvent* e);
	static void setBData(::java::awt::event::KeyEvent* e, $bytes* data);
	virtual void setBackground(::java::awt::Color* c);
	virtual void setFullScreenExclusiveModeState(bool state) override;
	virtual void setMWMHints(::sun::awt::X11::PropMwmHints* hints);
	virtual void setMouseAbove(bool above);
	virtual void setReparented(bool newValue);
	virtual void stateChanged(int64_t time, int32_t oldState, int32_t newState);
	virtual $String* toString() override;
	virtual void updateSizeHints();
	virtual void updateSizeHints(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void updateSizeHints(int32_t x, int32_t y);
	virtual void validateSurface();
	virtual void winBackground(::java::awt::Color* c);
	bool x11inputMethodLookupString(int64_t event, $longs* keysymArray);
	void xSetBackground(::java::awt::Color* c);
	static int64_t xkeycodeToKeysym(::sun::awt::X11::XKeyEvent* ev);
	int64_t xkeycodeToPrimaryKeysym(::sun::awt::X11::XKeyEvent* ev);
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* insLog;
	static ::sun::util::logging::PlatformLogger* eventLog;
	static ::sun::util::logging::PlatformLogger* focusLog;
	static ::sun::util::logging::PlatformLogger* keyEventLog;
	static const int32_t AWT_MULTICLICK_SMUDGE = 4;
	static int32_t lastX;
	static int32_t lastY;
	static int64_t lastTime;
	static int64_t lastButton;
	static ::java::lang::ref::WeakReference* lastWindowRef;
	static int32_t clickCount;
	int32_t oldWidth = 0;
	int32_t oldHeight = 0;
	::sun::awt::X11::PropMwmHints* mwm_hints = nullptr;
	static ::sun::awt::X11::XAtom* wm_protocols;
	static ::sun::awt::X11::XAtom* wm_delete_window;
	static ::sun::awt::X11::XAtom* wm_take_focus;
	bool stateChanged$ = false;
	int32_t savedState = 0;
	::sun::awt::X11::XWindowAttributesData* winAttr = nullptr;
	::sun::awt::X11GraphicsConfig* graphicsConfig = nullptr;
	::sun::awt::X11::AwtGraphicsConfigData* graphicsConfigData = nullptr;
	bool reparented = false;
	::sun::awt::X11::XWindow* parent = nullptr;
	::java::awt::Component* target = nullptr;
	static int32_t JAWT_LOCK_ERROR;
	static int32_t JAWT_LOCK_CLIP_CHANGED;
	static int32_t JAWT_LOCK_BOUNDS_CHANGED;
	static int32_t JAWT_LOCK_SURFACE_CHANGED;
	int32_t drawState = 0;
	static $String* TARGET;
	static $String* REPARENTED;
	::sun::java2d::SurfaceData* surfaceData = nullptr;
	::sun::awt::X11::XRepaintArea* paintArea = nullptr;
	static ::java::awt::Font* defaultFont;
	int32_t mouseButtonClickAllowed = 0;
	::java::awt::Color* backgroundColor = nullptr;
	bool mouseAboveMe = false;
	bool fullScreenExclusiveModeState = false;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("AWT_MULTICLICK_SMUDGE")
#pragma pop_macro("JAWT_LOCK_BOUNDS_CHANGED")
#pragma pop_macro("JAWT_LOCK_CLIP_CHANGED")
#pragma pop_macro("JAWT_LOCK_ERROR")
#pragma pop_macro("JAWT_LOCK_SURFACE_CHANGED")
#pragma pop_macro("REPARENTED")
#pragma pop_macro("TARGET")

#endif // _sun_awt_X11_XWindow_h_