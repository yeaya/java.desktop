#ifndef _sun_awt_X11_XDecoratedPeer_h_
#define _sun_awt_X11_XDecoratedPeer_h_
//$ class sun.awt.X11.XDecoratedPeer
//$ extends sun.awt.X11.XWindowPeer

#include <sun/awt/X11/XWindowPeer.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Insets;
		class Point;
		class Rectangle;
		class Window;
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
		namespace X11 {
			class WindowDimensions;
			class XAtom;
			class XAtomList;
			class XClientMessageEvent;
			class XContentWindow;
			class XCreateWindowParams;
			class XEvent;
			class XFocusProxyWindow;
			class XIconWindow;
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

class XDecoratedPeer : public ::sun::awt::X11::XWindowPeer {
	$class(XDecoratedPeer, 0, ::sun::awt::X11::XWindowPeer)
public:
	XDecoratedPeer();
	using ::sun::awt::X11::XWindowPeer::addDropTarget;
	using ::sun::awt::X11::XWindowPeer::handleKeyPress;
	using ::sun::awt::X11::XWindowPeer::getGraphics;
	void init$(::java::awt::Window* target);
	void init$(::sun::awt::X11::XCreateWindowParams* params);
	void applyGuessedInsets();
	void checkShellRect(::java::awt::Rectangle* shellRect);
	void checkShellRectPos(::java::awt::Rectangle* shellRect);
	void checkShellRectSize(::java::awt::Rectangle* shellRect);
	static ::java::awt::Insets* copy(::java::awt::Insets* i);
	::java::awt::Insets* copyAndScaleDown(::java::awt::Insets* i);
	virtual ::sun::awt::X11::XFocusProxyWindow* createFocusProxy();
	static ::java::awt::Insets* difference(::java::awt::Insets* i1, ::java::awt::Insets* i2);
	virtual void dispose() override;
	void dumpAll();
	void dumpContent();
	void dumpMe();
	void dumpParent();
	void dumpShell();
	void dumpTarget();
	void dumpWindow($String* id, int64_t window);
	virtual int32_t getAbsoluteX() override;
	virtual int32_t getAbsoluteY() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual int64_t getContentWindow() override;
	virtual int32_t getDecorations();
	::sun::awt::X11::WindowDimensions* getDimensions();
	virtual ::sun::awt::X11::XFocusProxyWindow* getFocusProxy();
	virtual int32_t getFunctions();
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual int32_t getHeight() override;
	virtual int32_t getInputMethodHeight();
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Point* getLocation();
	virtual ::java::awt::Point* getLocationOnScreen() override;
	::java::awt::Insets* getRealInsets();
	virtual int64_t getShell();
	virtual ::java::awt::Rectangle* getShellBounds();
	virtual ::java::awt::Dimension* getSize() override;
	virtual $String* getWMName() override;
	virtual ::sun::awt::X11::XAtomList* getWMProtocols() override;
	::java::awt::Insets* getWMSetInsets(::sun::awt::X11::XAtom* changedAtom);
	virtual int32_t getWidth() override;
	virtual int32_t getX() override;
	virtual int32_t getY() override;
	virtual bool gravityBug();
	::java::awt::Insets* guessInsets();
	virtual void handleClientMessage(::sun::awt::X11::XEvent* xev) override;
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	void handleCorrectInsets(::java::awt::Insets* correctWM);
	virtual void handleDeiconify() override;
	virtual void handleFocusEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleIconify() override;
	virtual void handleMoved(::sun::awt::X11::WindowDimensions* dims);
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev) override;
	void handleQuit();
	virtual void handleReparentNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleWindowFocusIn(int64_t serial) override;
	virtual void handleWindowFocusOut(::java::awt::Window* oppositeWindow, int64_t serial) override;
	void handleWmTakeFocus(::sun::awt::X11::XClientMessageEvent* cl);
	virtual bool isEventDisabled(::sun::awt::X11::XEvent* e) override;
	virtual bool isInitialReshape() override;
	virtual bool isMaximized();
	static bool isNull(::java::awt::Insets* i);
	virtual bool isOverrideRedirect() override;
	virtual bool isTargetUndecorated() {return false;}
	using ::sun::awt::X11::XWindowPeer::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XWindowPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void reconfigureContentWindow(::sun::awt::X11::WindowDimensions* dims);
	using ::sun::awt::X11::XWindowPeer::requestWindowFocus;
	using ::sun::awt::X11::XWindowPeer::removeDropTarget;
	virtual bool requestWindowFocus(int64_t time, bool timeProvided) override;
	virtual bool requestWindowFocus(::sun::awt::X11::XWindowPeer* actualFocusedWindow, int64_t time, bool timeProvided);
	using ::sun::awt::X11::XWindowPeer::requestXFocus;
	virtual void requestXFocus(int64_t time, bool timeProvided) override;
	void resetWMSetInsets();
	using ::sun::awt::X11::XWindowPeer::reshape;
	void reshape(::sun::awt::X11::WindowDimensions* newDimensions, int32_t op, bool userReshape);
	void reshape(int32_t x, int32_t y, int32_t width, int32_t height, int32_t operation, bool userReshape);
	virtual void setActualFocusedWindow(::sun::awt::X11::XWindowPeer* actualFocusedWindow) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setIconHints(::java::util::List* icons) override;
	virtual void setResizable(bool resizable);
	void setShellBounds(::java::awt::Rectangle* rec);
	void setShellPosition(::java::awt::Rectangle* rec);
	void setShellSize(::java::awt::Rectangle* rec);
	virtual void setTitle($String* title);
	virtual void setVisible(bool vis) override;
	virtual void suppressWmTakeFocus(bool doSuppress) override;
	void updateMinSizeHints();
	virtual void updateMinimumSize() override;
	using ::sun::awt::X11::XWindowPeer::updateSizeHints;
	virtual void updateSizeHints(::sun::awt::X11::WindowDimensions* dims);
	virtual void updateSizeHints() override;
	virtual void updateWMName() override;
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* insLog;
	static ::sun::util::logging::PlatformLogger* focusLog;
	static ::sun::util::logging::PlatformLogger* iconLog;
	bool configure_seen = false;
	bool insets_corrected = false;
	::sun::awt::X11::XIconWindow* iconWindow = nullptr;
	$volatile(::sun::awt::X11::WindowDimensions*) dimensions = nullptr;
	::sun::awt::X11::XContentWindow* content = nullptr;
	$volatile(::java::awt::Insets*) currentInsets = nullptr;
	::sun::awt::X11::XFocusProxyWindow* focusProxy = nullptr;
	static ::java::util::Map* lastKnownInsets;
	::java::awt::Insets* wm_set_insets = nullptr;
	int64_t reparent_serial = 0;
	bool no_reparent_artifacts = false;
	::sun::awt::X11::XWindowPeer* actualFocusedWindow = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDecoratedPeer_h_