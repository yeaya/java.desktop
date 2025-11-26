#ifndef _sun_awt_X11_XWindowPeer_h_
#define _sun_awt_X11_XWindowPeer_h_
//$ class sun.awt.X11.XWindowPeer
//$ extends sun.awt.X11.XPanelPeer
//$ implements java.awt.peer.WindowPeer,sun.awt.DisplayChangedListener

#include <java/awt/peer/WindowPeer.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/X11/XPanelPeer.h>

#pragma push_macro("MAXIMUM_BUFFER_LENGTH_NET_WM_ICON")
#undef MAXIMUM_BUFFER_LENGTH_NET_WM_ICON
#pragma push_macro("PREFERRED_SIZE_FOR_ICON")
#undef PREFERRED_SIZE_FOR_ICON
#pragma push_macro("XA_NET_WM_STATE")
#undef XA_NET_WM_STATE

namespace java {
	namespace awt {
		class Dialog;
		class Dimension;
		class Graphics;
		class GraphicsConfiguration;
		class Insets;
		class Point;
		class Rectangle;
		class Window;
		class Window$Type;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class List;
		class Set;
		class Vector;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class PropMwmHints;
			class ToplevelStateListener;
			class XAtom;
			class XAtomList;
			class XBaseWindow;
			class XConfigureEvent;
			class XCreateWindowParams;
			class XDialogPeer;
			class XEvent;
			class XEventDispatcher;
			class XWarningWindow;
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

class XWindowPeer : public ::sun::awt::X11::XPanelPeer, public ::java::awt::peer::WindowPeer, public ::sun::awt::DisplayChangedListener {
	$class(XWindowPeer, 0, ::sun::awt::X11::XPanelPeer, ::java::awt::peer::WindowPeer, ::sun::awt::DisplayChangedListener)
public:
	XWindowPeer();
	using ::sun::awt::X11::XPanelPeer::addDropTarget;
	using ::sun::awt::X11::XPanelPeer::handleKeyPress;
	using ::sun::awt::X11::XPanelPeer::getColorModel;
	using ::sun::awt::X11::XPanelPeer::getGraphics;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout() override;
	virtual void beginValidate() override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void endLayout() override;
	virtual void endValidate() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	void init$(::sun::awt::X11::XCreateWindowParams* params);
	void init$(::java::awt::Window* target);
	virtual void addDropTarget();
	virtual void addRootPropertyEventDispatcher();
	void addToTransientFors(::sun::awt::X11::XDialogPeer* blockerPeer);
	void addToTransientFors(::sun::awt::X11::XDialogPeer* blockerPeer, ::java::util::Vector* javaToplevels);
	virtual void addToplevelStateListener(::sun::awt::X11::ToplevelStateListener* l);
	void applyWindowType();
	virtual void checkIfOnNewScreen(::java::awt::Rectangle* newBounds);
	static ::java::util::Vector* collectJavaToplevels();
	virtual void displayChanged() override;
	virtual void dispose() override;
	static void dumpIcons(::java::util::List* icons);
	void executeDisplayChangedOnEDT(::java::awt::GraphicsConfiguration* gc);
	bool focusAllowedFor();
	static ::java::awt::Window* getDecoratedOwner(::java::awt::Window* window);
	static ::java::util::List* getDefaultIconInfo();
	virtual int64_t getFocusTargetWindow();
	virtual ::java::util::List* getIconInfo();
	virtual ::java::awt::Insets* getInsets() override;
	static int32_t getJvmPID();
	static $String* getLocalHostname();
	virtual ::sun::awt::X11::PropMwmHints* getMWMHints() override;
	virtual int32_t getMenuBarHeight();
	virtual ::sun::awt::X11::XAtomList* getNETWMState();
	static ::java::awt::Window* getNativeFocusedWindow();
	static ::sun::awt::X11::XWindowPeer* getNativeFocusedWindowPeer();
	virtual ::java::awt::Point* getNewLocation(::sun::awt::X11::XConfigureEvent* xe, int32_t leftInset, int32_t topInset);
	virtual ::sun::awt::X11::XWindowPeer* getOwnerPeer();
	virtual ::java::awt::Dimension* getTargetMinimumSize();
	int64_t getToplevelWindow(int64_t w);
	virtual $String* getWMName() override;
	::java::awt::Window$Type* getWindowType();
	virtual void handleButtonPressRelease(::sun::awt::X11::XEvent* xev) override;
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleDeiconify();
	virtual void handleFocusEvent(::sun::awt::X11::XEvent* xev);
	virtual void handleIconify();
	virtual void handleMapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMotionNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handleRootPropertyNotify(::sun::awt::X11::XEvent* xev);
	virtual void handleStateChange(int32_t oldState, int32_t newState);
	virtual void handleUnmapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleVisibilityEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleWindowFocusIn(int64_t serial);
	virtual void handleWindowFocusInSync(int64_t serial);
	virtual void handleWindowFocusIn_Dispatch();
	virtual void handleWindowFocusOut(::java::awt::Window* oppositeWindow, int64_t serial);
	virtual void handleWindowFocusOutSync(::java::awt::Window* oppositeWindow, int64_t serial);
	virtual void handleXCrossingEvent(::sun::awt::X11::XEvent* xev) override;
	virtual bool hasDecorations(int32_t decor);
	virtual bool hasWarningWindow();
	virtual bool isAutoRequestFocus();
	static bool isDesktopWindow(int64_t wi);
	virtual bool isFocusableWindow();
	virtual bool isFocusedWindowModalBlocker();
	virtual bool isGrabbed();
	virtual bool isLocationByPlatform() override;
	virtual bool isModalBlocked();
	virtual bool isNativelyNonFocusableWindow();
	bool isOLWMDecorBug();
	virtual bool isOverrideRedirect();
	virtual bool isResizable() override;
	bool isSimpleWindow();
	virtual bool isWMStateNetHidden();
	virtual bool isWithdrawn();
	void lowerOverrideRedirect();
	static ::java::util::List* normalizeIconImages(::java::util::List* icons);
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paletteChanged() override;
	using ::sun::awt::X11::XPanelPeer::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XPanelPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void print(::java::awt::Graphics* g) override;
	void promoteDefaultPosition();
	::java::awt::Point* queryXLocation();
	virtual void recursivelySetIcon(::java::util::List* icons);
	using ::sun::awt::X11::XPanelPeer::removeDropTarget;
	virtual void removeDropTarget();
	void removeFromTransientFors();
	virtual void removeRootPropertyEventDispatcher();
	void removeStartupNotification();
	virtual void removeToplevelStateListener(::sun::awt::X11::ToplevelStateListener* l);
	static void removeTransientForHint(::sun::awt::X11::XWindowPeer* window);
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void repositionSecurityWarning() override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void requestInitialFocus();
	virtual bool requestWindowFocus(::sun::awt::X11::XWindowPeer* actualFocusedWindow);
	virtual bool requestWindowFocus();
	virtual bool requestWindowFocus(int64_t time, bool timeProvided);
	void requestXFocus(int64_t time);
	void requestXFocus();
	virtual void requestXFocus(int64_t time, bool timeProvided);
	static void restoreTransientFor(::sun::awt::X11::XWindowPeer* window);
	virtual void setActualFocusedWindow(::sun::awt::X11::XWindowPeer* actualFocusedWindow);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setFullScreenExclusiveModeState(bool state) override;
	virtual void setGrab(bool grab);
	virtual void setIconHints(::java::util::List* icons);
	virtual void setMWMHints(::sun::awt::X11::PropMwmHints* hints) override;
	virtual void setModalBlocked(::java::awt::Dialog* d, bool blocked) override;
	virtual void setModalBlocked(::java::awt::Dialog* d, bool blocked, ::java::util::Vector* javaToplevels);
	virtual void setMouseAbove(bool above) override;
	virtual void setNETWMState(::sun::awt::X11::XAtomList* state);
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setReparented(bool newValue) override;
	virtual void setSaveUnder(bool state);
	static void setToplevelTransientFor(::sun::awt::X11::XWindowPeer* window, ::sun::awt::X11::XWindowPeer* transientForWindow, bool updateChain, bool allStates);
	virtual void setVisible(bool vis) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	bool shouldFocusOnMapNotify();
	virtual void stateChanged(int64_t time, int32_t oldState, int32_t newState) override;
	virtual void suppressWmTakeFocus(bool doSuppress);
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	void updateAlwaysOnTop();
	virtual void updateAlwaysOnTopState() override;
	virtual void updateChildrenSizes();
	virtual void updateCursorImmediately() override;
	virtual void updateDropTarget();
	virtual void updateFocusability();
	virtual void updateFocusableWindowState() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateIconImages() override;
	virtual void updateMinimumSize() override;
	void updateOpacity();
	virtual void updateSecurityWarningVisibility();
	void updateShape();
	virtual void updateTransientFor();
	virtual void updateWindow() override;
	virtual void xSetVisible(bool visible) override;
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* focusLog;
	static ::sun::util::logging::PlatformLogger* insLog;
	static ::sun::util::logging::PlatformLogger* grabLog;
	static ::sun::util::logging::PlatformLogger* iconLog;
	static ::java::util::Set* windows;
	bool cachedFocusableWindow = false;
	::sun::awt::X11::XWarningWindow* warningWindow = nullptr;
	bool alwaysOnTop = false;
	bool locationByPlatform = false;
	::java::awt::Dialog* modalBlocker = nullptr;
	bool delayedModalBlocking = false;
	::java::awt::Dimension* targetMinimumSize = nullptr;
	::sun::awt::X11::XWindowPeer* ownerPeer = nullptr;
	::sun::awt::X11::XWindowPeer* prevTransientFor = nullptr;
	::sun::awt::X11::XWindowPeer* nextTransientFor = nullptr;
	::sun::awt::X11::XBaseWindow* curRealTransientFor = nullptr;
	bool grab = false;
	bool isMapped$ = false;
	bool mustControlStackPosition = false;
	::sun::awt::X11::XEventDispatcher* rootPropertyEventDispatcher = nullptr;
	static ::java::util::concurrent::atomic::AtomicBoolean* isStartupNotificationRemoved;
	bool isUnhiding = false;
	bool isBeforeFirstMapNotify = false;
	::java::awt::Window$Type* windowType = nullptr;
	::java::util::Vector* toplevelStateListeners = nullptr;
	static const int32_t PREFERRED_SIZE_FOR_ICON = 128;
	static const int32_t MAXIMUM_BUFFER_LENGTH_NET_WM_ICON = 65535; // (2 << 15) - 1
	static ::java::util::ArrayList* defaultIconInfo;
	int32_t dropTargetCount = 0;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE = nullptr;
	::sun::awt::X11::XAtomList* net_wm_state = nullptr;
	::sun::awt::X11::XBaseWindow* pressTarget = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("MAXIMUM_BUFFER_LENGTH_NET_WM_ICON")
#pragma pop_macro("PREFERRED_SIZE_FOR_ICON")
#pragma pop_macro("XA_NET_WM_STATE")

#endif // _sun_awt_X11_XWindowPeer_h_