#ifndef _sun_awt_X11_XLightweightFramePeer_h_
#define _sun_awt_X11_XLightweightFramePeer_h_
//$ class sun.awt.X11.XLightweightFramePeer
//$ extends sun.awt.X11.XFramePeer
//$ implements sun.awt.OverrideNativeWindowHandle

#include <sun/awt/OverrideNativeWindowHandle.h>
#include <sun/awt/X11/XFramePeer.h>

namespace java {
	namespace awt {
		class Dialog;
		class Dimension;
		class Graphics;
		class Insets;
		class MenuBar;
		class Point;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTarget;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Vector;
	}
}
namespace sun {
	namespace awt {
		class LightweightFrame;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class PropMwmHints;
			class ToplevelStateListener;
			class XAtomList;
			class XEvent;
			class XWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XLightweightFramePeer : public ::sun::awt::X11::XFramePeer, public ::sun::awt::OverrideNativeWindowHandle {
	$class(XLightweightFramePeer, $NO_CLASS_INIT, ::sun::awt::X11::XFramePeer, ::sun::awt::OverrideNativeWindowHandle)
public:
	XLightweightFramePeer();
	using ::sun::awt::X11::XFramePeer::handleKeyPress;
	using ::sun::awt::X11::XFramePeer::getGraphics;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::LightweightFrame* target);
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void addDropTarget() override;
	virtual void addToplevelStateListener(::sun::awt::X11::ToplevelStateListener* l) override;
	virtual void checkIfOnNewScreen(::java::awt::Rectangle* newBounds) override;
	virtual void displayChanged() override;
	virtual void dispose() override;
	virtual void emulateActivation(bool doActivate) override;
	virtual int32_t getAbsoluteX() override;
	virtual int32_t getAbsoluteY() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::Rectangle* getBoundsPrivate() override;
	virtual int64_t getContentWindow() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual int32_t getHeight() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Point* getLocation() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	::sun::awt::LightweightFrame* getLwTarget();
	virtual ::sun::awt::X11::PropMwmHints* getMWMHints() override;
	virtual ::sun::awt::X11::XAtomList* getNETWMState() override;
	virtual int64_t getOverriddenWindowHandle();
	virtual ::sun::awt::X11::XWindowPeer* getOwnerPeer() override;
	virtual int64_t getShell() override;
	virtual ::java::awt::Dimension* getSize() override;
	virtual int32_t getState() override;
	virtual ::java::awt::Dimension* getTargetMinimumSize() override;
	virtual int32_t getWidth() override;
	virtual int32_t getX() override;
	virtual int32_t getY() override;
	virtual void handleButtonPressRelease(::sun::awt::X11::XEvent* xev) override;
	virtual void handleClientMessage(::sun::awt::X11::XEvent* xev) override;
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleDeiconify() override;
	virtual void handleFocusEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleIconify() override;
	virtual void handleMapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMotionNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handleReparentNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleStateChange(int32_t oldState, int32_t newState) override;
	virtual void handleUnmapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleVisibilityEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleWindowFocusIn(int64_t serial) override;
	virtual void handleWindowFocusInSync(int64_t serial) override;
	virtual void handleWindowFocusIn_Dispatch() override;
	virtual void handleWindowFocusOut(::java::awt::Window* oppositeWindow, int64_t serial) override;
	virtual void handleWindowFocusOutSync(::java::awt::Window* oppositeWindow, int64_t serial) override;
	virtual void handleXCrossingEvent(::sun::awt::X11::XEvent* xev) override;
	virtual bool isGrabbed() override;
	virtual void overrideWindowHandle(int64_t handle) override;
	virtual void paletteChanged() override;
	using ::sun::awt::X11::XFramePeer::preInit;
	using ::sun::awt::X11::XFramePeer::postInit;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void recursivelySetIcon(::java::util::List* icons) override;
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void removeDropTarget() override;
	virtual void removeToplevelStateListener(::sun::awt::X11::ToplevelStateListener* l) override;
	virtual void repositionSecurityWarning() override;
	using ::sun::awt::X11::XFramePeer::requestWindowFocus;
	virtual bool requestWindowFocus(int64_t time, bool timeProvided) override;
	virtual bool requestWindowFocus() override;
	virtual bool requestWindowFocus(::sun::awt::X11::XWindowPeer* actualFocusedWindow) override;
	using ::sun::awt::X11::XFramePeer::requestXFocus;
	virtual void requestXFocus(int64_t time, bool timeProvided) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setFullScreenExclusiveModeState(bool state) override;
	virtual void setGrab(bool grab) override;
	virtual void setMWMHints(::sun::awt::X11::PropMwmHints* hints) override;
	virtual void setMaximizedBounds(::java::awt::Rectangle* b) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	virtual void setModalBlocked(::java::awt::Dialog* d, bool blocked, ::java::util::Vector* javaToplevels) override;
	virtual void setModalBlocked(::java::awt::Dialog* d, bool blocked) override;
	virtual void setNETWMState(::sun::awt::X11::XAtomList* state) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setState(int32_t newState) override;
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool vis) override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	virtual void updateAlwaysOnTopState() override;
	virtual void updateCursorImmediately() override;
	virtual void updateFocusableWindowState() override;
	virtual void updateIconImages() override;
	virtual void updateMinimumSize() override;
	virtual void updateSecurityWarningVisibility() override;
	using ::sun::awt::X11::XFramePeer::updateSizeHints;
	virtual void updateWindow() override;
	virtual void xSetVisible(bool visible) override;
	$volatile(int64_t) overriddenWindowHandle = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XLightweightFramePeer_h_