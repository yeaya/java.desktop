#ifndef _sun_awt_X11_XBaseWindow_h_
#define _sun_awt_X11_XBaseWindow_h_
//$ class sun.awt.X11.XBaseWindow
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BACKGROUND_PIXMAP")
#undef BACKGROUND_PIXMAP
#pragma push_macro("BACKING_STORE")
#undef BACKING_STORE
#pragma push_macro("BIT_GRAVITY")
#undef BIT_GRAVITY
#pragma push_macro("BORDER_PIXEL")
#undef BORDER_PIXEL
#pragma push_macro("BOUNDS")
#undef BOUNDS
#pragma push_macro("COLORMAP")
#undef COLORMAP
#pragma push_macro("DEF_LOCATION")
#undef DEF_LOCATION
#pragma push_macro("DELAYED")
#undef DELAYED
#pragma push_macro("DEPTH")
#undef DEPTH
#pragma push_macro("EMBEDDED")
#undef EMBEDDED
#pragma push_macro("EVENT_MASK")
#undef EVENT_MASK
#pragma push_macro("MIN_SIZE")
#undef MIN_SIZE
#pragma push_macro("OVERRIDE_REDIRECT")
#undef OVERRIDE_REDIRECT
#pragma push_macro("PARENT")
#undef PARENT
#pragma push_macro("PARENT_WINDOW")
#undef PARENT_WINDOW
#pragma push_macro("SAVE_UNDER")
#undef SAVE_UNDER
#pragma push_macro("VALUE_MASK")
#undef VALUE_MASK
#pragma push_macro("VISIBLE")
#undef VISIBLE
#pragma push_macro("VISUAL")
#undef VISUAL
#pragma push_macro("VISUAL_CLASS")
#undef VISUAL_CLASS

namespace java {
	namespace awt {
		class Dimension;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XBaseWindow$InitialiseState;
			class XBaseWindow$StateLock;
			class XCreateWindowParams;
			class XEvent;
			class XRootWindow;
			class XSizeHints;
			class XWMHints;
			class XWindowPeer;
		}
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

class XBaseWindow : public ::java::lang::Object {
	$class(XBaseWindow, 0, ::java::lang::Object)
public:
	XBaseWindow();
	void init$();
	void init$(int64_t parentWindow, ::java::awt::Rectangle* bounds);
	void init$(::java::awt::Rectangle* bounds);
	void init$(::sun::awt::X11::XCreateWindowParams* params);
	void init$(int64_t parentWindow);
	virtual void awtLock();
	virtual void awtLockNotifyAll();
	virtual void awtLockWait();
	virtual void awtUnlock();
	virtual bool checkInitialised();
	virtual void checkParams(::sun::awt::X11::XCreateWindowParams* params);
	static void checkSecurity();
	virtual bool contains(int32_t x, int32_t y);
	virtual bool containsGlobal(int32_t x, int32_t y);
	void create(::sun::awt::X11::XCreateWindowParams* params);
	virtual void destroy();
	virtual void dispatchEvent(::sun::awt::X11::XEvent* xev);
	static void dispatchToWindow(::sun::awt::X11::XEvent* ev);
	virtual void flush();
	virtual int32_t getAbsoluteX();
	virtual int32_t getAbsoluteY();
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::java::util::Set* getChildren();
	virtual int64_t getContentWindow();
	virtual ::sun::awt::X11::XBaseWindow* getContentXWindow();
	virtual ::sun::awt::X11::XCreateWindowParams* getDelayedParams();
	virtual int32_t getHeight();
	virtual ::sun::awt::X11::XSizeHints* getHints();
	virtual ::sun::awt::X11::XBaseWindow* getParentWindow();
	virtual int32_t getScale();
	virtual int64_t getScreen();
	virtual int64_t getScreenNumber();
	static int64_t getScreenOfWindow(int64_t window);
	virtual ::java::awt::Dimension* getSize();
	virtual $Object* getStateLock();
	virtual ::sun::awt::X11::XWindowPeer* getToplevelXWindow();
	virtual ::sun::awt::X11::XWMHints* getWMHints();
	virtual $String* getWMName();
	virtual int32_t getWidth();
	virtual int64_t getWindow();
	virtual int32_t getX();
	static ::sun::awt::X11::XRootWindow* getXAWTRootWindow();
	virtual int32_t getY();
	virtual bool grabInput();
	virtual void handleButtonPressRelease(::sun::awt::X11::XEvent* xev);
	virtual void handleClientMessage(::sun::awt::X11::XEvent* xev);
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev);
	virtual void handleCreateNotify(::sun::awt::X11::XEvent* xev);
	virtual void handleDestroyNotify(::sun::awt::X11::XEvent* xev);
	virtual void handleExposeEvent(::sun::awt::X11::XEvent* xev);
	virtual void handleKeyPress(::sun::awt::X11::XEvent* xev);
	virtual void handleKeyRelease(::sun::awt::X11::XEvent* xev);
	virtual void handleMapNotifyEvent(::sun::awt::X11::XEvent* xev);
	virtual void handleMotionNotify(::sun::awt::X11::XEvent* xev);
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev);
	virtual void handleReparentNotifyEvent(::sun::awt::X11::XEvent* xev);
	virtual void handleUnmapNotifyEvent(::sun::awt::X11::XEvent* xev);
	virtual void handleVisibilityEvent(::sun::awt::X11::XEvent* xev);
	virtual void handleXCrossingEvent(::sun::awt::X11::XEvent* xev);
	void init(int64_t parentWindow, ::java::awt::Rectangle* bounds);
	void init(::sun::awt::X11::XCreateWindowParams* params);
	virtual void initClientLeader();
	virtual void instantPreInit(::sun::awt::X11::XCreateWindowParams* params);
	virtual bool isDisposed();
	virtual bool isEventDisabled(::sun::awt::X11::XEvent* e);
	static bool isFullRelease(int32_t buttonState, int32_t button);
	static bool isGrabbedEvent(::sun::awt::X11::XEvent* ev, ::sun::awt::X11::XBaseWindow* target);
	virtual bool isMapped();
	virtual bool isMinSizeSet();
	virtual bool isVisible();
	void postInit();
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params);
	void preInit();
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params);
	virtual int32_t scaleDown(int32_t x);
	virtual int32_t scaleUp(int32_t x);
	virtual void setDisposed(bool d);
	virtual void setSizeHints(int64_t flags, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setWMClass($StringArray* cl);
	void setWMHints(::sun::awt::X11::XWMHints* hints);
	virtual void toFront();
	virtual ::java::awt::Rectangle* toGlobal(::java::awt::Rectangle* rec);
	virtual ::java::awt::Point* toGlobal(::java::awt::Point* pt);
	virtual ::java::awt::Point* toGlobal(int32_t x, int32_t y);
	virtual ::java::awt::Point* toLocal(::java::awt::Point* pt);
	virtual ::java::awt::Point* toLocal(int32_t x, int32_t y);
	static ::java::awt::Point* toOtherWindow(int64_t src, int64_t dst, int32_t x, int32_t y);
	virtual $String* toString() override;
	static void ungrabInput();
	virtual void ungrabInputImpl();
	virtual void updateWMName();
	static int64_t xGetInputFocus();
	virtual void xRequestFocus(int64_t time);
	virtual void xRequestFocus();
	virtual void xSetBounds(::java::awt::Rectangle* bounds);
	virtual void xSetBounds(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void xSetVisible(bool visible);
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* insLog;
	static ::sun::util::logging::PlatformLogger* eventLog;
	static ::sun::util::logging::PlatformLogger* focusLog;
	static ::sun::util::logging::PlatformLogger* grabLog;
	static $String* PARENT_WINDOW;
	static $String* BOUNDS;
	static $String* OVERRIDE_REDIRECT;
	static $String* EVENT_MASK;
	static $String* VALUE_MASK;
	static $String* BORDER_PIXEL;
	static $String* COLORMAP;
	static $String* DEPTH;
	static $String* VISUAL_CLASS;
	static $String* VISUAL;
	static $String* EMBEDDED;
	static $String* DELAYED;
	static $String* PARENT;
	static $String* BACKGROUND_PIXMAP;
	static $String* VISIBLE;
	static $String* SAVE_UNDER;
	static $String* BACKING_STORE;
	static $String* BIT_GRAVITY;
	::sun::awt::X11::XCreateWindowParams* delayedParams = nullptr;
	::java::util::Set* children = nullptr;
	int64_t window = 0;
	bool visible = false;
	bool mapped = false;
	bool embedded = false;
	::java::awt::Rectangle* maxBounds = nullptr;
	$volatile(::sun::awt::X11::XBaseWindow*) parentWindow = nullptr;
	bool disposed = false;
	int64_t screen = 0;
	::sun::awt::X11::XSizeHints* hints = nullptr;
	::sun::awt::X11::XWMHints* wmHints = nullptr;
	static const int32_t MIN_SIZE = 1;
	static const int32_t DEF_LOCATION = 1;
	static ::sun::awt::X11::XAtom* wm_client_leader;
	::sun::awt::X11::XBaseWindow$InitialiseState* initialising = nullptr;
	int32_t x = 0;
	int32_t y = 0;
	int32_t width = 0;
	int32_t height = 0;
	::sun::awt::X11::XBaseWindow$StateLock* state_lock = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("BACKGROUND_PIXMAP")
#pragma pop_macro("BACKING_STORE")
#pragma pop_macro("BIT_GRAVITY")
#pragma pop_macro("BORDER_PIXEL")
#pragma pop_macro("BOUNDS")
#pragma pop_macro("COLORMAP")
#pragma pop_macro("DEF_LOCATION")
#pragma pop_macro("DELAYED")
#pragma pop_macro("DEPTH")
#pragma pop_macro("EMBEDDED")
#pragma pop_macro("EVENT_MASK")
#pragma pop_macro("MIN_SIZE")
#pragma pop_macro("OVERRIDE_REDIRECT")
#pragma pop_macro("PARENT")
#pragma pop_macro("PARENT_WINDOW")
#pragma pop_macro("SAVE_UNDER")
#pragma pop_macro("VALUE_MASK")
#pragma pop_macro("VISIBLE")
#pragma pop_macro("VISUAL")
#pragma pop_macro("VISUAL_CLASS")

#endif // _sun_awt_X11_XBaseWindow_h_