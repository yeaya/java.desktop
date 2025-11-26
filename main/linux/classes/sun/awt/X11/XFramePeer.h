#ifndef _sun_awt_X11_XFramePeer_h_
#define _sun_awt_X11_XFramePeer_h_
//$ class sun.awt.X11.XFramePeer
//$ extends sun.awt.X11.XDecoratedPeer
//$ implements java.awt.peer.FramePeer

#include <java/awt/peer/FramePeer.h>
#include <sun/awt/X11/XDecoratedPeer.h>

#pragma push_macro("BUTTON_H")
#undef BUTTON_H
#pragma push_macro("BUTTON_W")
#undef BUTTON_W
#pragma push_macro("BUTTON_Y")
#undef BUTTON_Y
#pragma push_macro("CROSSHAIR_INSET")
#undef CROSSHAIR_INSET
#pragma push_macro("HORIZ_RESIZE_INSET")
#undef HORIZ_RESIZE_INSET
#pragma push_macro("MAXIMIZE_CONTAINED_H")
#undef MAXIMIZE_CONTAINED_H
#pragma push_macro("MAXIMIZE_CONTAINED_W")
#undef MAXIMIZE_CONTAINED_W
#pragma push_macro("MAXIMIZE_CONTAINED_X_DIFF")
#undef MAXIMIZE_CONTAINED_X_DIFF
#pragma push_macro("MAXIMIZE_CONTAINED_Y")
#undef MAXIMIZE_CONTAINED_Y
#pragma push_macro("MAXIMIZE_X_DIFF")
#undef MAXIMIZE_X_DIFF
#pragma push_macro("MENUBAR_HEIGHT_IF_NO_MENUBAR")
#undef MENUBAR_HEIGHT_IF_NO_MENUBAR
#pragma push_macro("MENUBAR_X")
#undef MENUBAR_X
#pragma push_macro("MENUBAR_Y")
#undef MENUBAR_Y
#pragma push_macro("MINIMIZE_CONTAINED_H")
#undef MINIMIZE_CONTAINED_H
#pragma push_macro("MINIMIZE_CONTAINED_W")
#undef MINIMIZE_CONTAINED_W
#pragma push_macro("MINIMIZE_CONTAINED_X_DIFF")
#undef MINIMIZE_CONTAINED_X_DIFF
#pragma push_macro("MINIMIZE_CONTAINED_Y")
#undef MINIMIZE_CONTAINED_Y
#pragma push_macro("MINIMIZE_X_DIFF")
#undef MINIMIZE_X_DIFF
#pragma push_macro("SYS_MENU_CONTAINED_H")
#undef SYS_MENU_CONTAINED_H
#pragma push_macro("SYS_MENU_CONTAINED_W")
#undef SYS_MENU_CONTAINED_W
#pragma push_macro("SYS_MENU_CONTAINED_X")
#undef SYS_MENU_CONTAINED_X
#pragma push_macro("SYS_MENU_CONTAINED_Y")
#undef SYS_MENU_CONTAINED_Y
#pragma push_macro("SYS_MENU_X")
#undef SYS_MENU_X
#pragma push_macro("TITLE_MID_Y")
#undef TITLE_MID_Y
#pragma push_macro("TITLE_W_DIFF")
#undef TITLE_W_DIFF
#pragma push_macro("TITLE_X")
#undef TITLE_X
#pragma push_macro("VERT_RESIZE_INSET")
#undef VERT_RESIZE_INSET

namespace java {
	namespace awt {
		class Frame;
		class Graphics;
		class MenuBar;
		class Rectangle;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
			class XEvent;
			class XMenuBarPeer;
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

class XFramePeer : public ::sun::awt::X11::XDecoratedPeer, public ::java::awt::peer::FramePeer {
	$class(XFramePeer, 0, ::sun::awt::X11::XDecoratedPeer, ::java::awt::peer::FramePeer)
public:
	XFramePeer();
	using ::sun::awt::X11::XDecoratedPeer::addDropTarget;
	using ::sun::awt::X11::XDecoratedPeer::handleKeyPress;
	using ::sun::awt::X11::XDecoratedPeer::getColorModel;
	using ::sun::awt::X11::XDecoratedPeer::getGraphics;
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
	virtual ::java::awt::Insets* getInsets() override;
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
	void init$(::java::awt::Frame* target);
	void init$(::sun::awt::X11::XCreateWindowParams* params);
	virtual void changeState(int32_t newState);
	virtual void dispose() override;
	virtual void emulateActivation(bool doActivate) override;
	virtual ::java::awt::Rectangle* getBoundsPrivate() override;
	virtual int32_t getMenuBarHeight() override;
	virtual ::sun::awt::X11::XMenuBarPeer* getMenubarPeer();
	virtual int32_t getState() override;
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handleStateChange(int32_t oldState, int32_t newState) override;
	virtual bool isMaximized() override;
	virtual bool isTargetUndecorated() override;
	using ::sun::awt::X11::XDecoratedPeer::postInit;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XDecoratedPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void print(::java::awt::Graphics* g) override;
	using ::sun::awt::X11::XDecoratedPeer::requestXFocus;
	using ::sun::awt::X11::XDecoratedPeer::requestWindowFocus;
	using ::sun::awt::X11::XDecoratedPeer::removeDropTarget;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void repositionSecurityWarning() override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	void reshapeMenubarPeer();
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setEnabled(bool value) override;
	virtual void setExtendedState(int32_t newState);
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setInitialState(int32_t wm_state);
	virtual void setMaximizedBounds(::java::awt::Rectangle* b) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	using ::sun::awt::X11::XDecoratedPeer::setModalBlocked;
	virtual void setModalBlocked(::java::awt::Dialog* d, bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setState(int32_t newState) override;
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool vis) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual void setupState(bool onInit);
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	virtual void updateAlwaysOnTopState() override;
	virtual void updateChildrenSizes() override;
	using ::sun::awt::X11::XDecoratedPeer::updateSizeHints;
	virtual void updateCursorImmediately() override;
	virtual void updateFocusableWindowState() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateIconImages() override;
	virtual void updateMinimumSize() override;
	virtual void updateWindow() override;
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* stateLog;
	static ::sun::util::logging::PlatformLogger* insLog;
	::sun::awt::X11::XMenuBarPeer* menubarPeer = nullptr;
	::java::awt::MenuBar* menubar = nullptr;
	int32_t state = 0;
	::java::lang::Boolean* undecorated = nullptr;
	static const int32_t MENUBAR_HEIGHT_IF_NO_MENUBAR = 0;
	int32_t lastAppliedMenubarHeight = 0;
	static const int32_t CROSSHAIR_INSET = 5;
	static const int32_t BUTTON_Y = 6; // CROSSHAIR_INSET + 1
	static const int32_t BUTTON_W = 17;
	static const int32_t BUTTON_H = 17;
	static const int32_t SYS_MENU_X = 6; // CROSSHAIR_INSET + 1
	static const int32_t SYS_MENU_CONTAINED_X = 11; // SYS_MENU_X + 5
	static const int32_t SYS_MENU_CONTAINED_Y = 13; // BUTTON_Y + 7
	static const int32_t SYS_MENU_CONTAINED_W = 8;
	static const int32_t SYS_MENU_CONTAINED_H = 3;
	static const int32_t MAXIMIZE_X_DIFF = 22; // CROSSHAIR_INSET + BUTTON_W
	static const int32_t MAXIMIZE_CONTAINED_X_DIFF = 17; // MAXIMIZE_X_DIFF - 5
	static const int32_t MAXIMIZE_CONTAINED_Y = 11; // BUTTON_Y + 5
	static const int32_t MAXIMIZE_CONTAINED_W = 8;
	static const int32_t MAXIMIZE_CONTAINED_H = 8;
	static const int32_t MINIMIZE_X_DIFF = 39; // MAXIMIZE_X_DIFF + BUTTON_W
	static const int32_t MINIMIZE_CONTAINED_X_DIFF = 32; // MINIMIZE_X_DIFF - 7
	static const int32_t MINIMIZE_CONTAINED_Y = 13; // BUTTON_Y + 7
	static const int32_t MINIMIZE_CONTAINED_W = 3;
	static const int32_t MINIMIZE_CONTAINED_H = 3;
	static const int32_t TITLE_X = 23; // SYS_MENU_X + BUTTON_W
	static const int32_t TITLE_W_DIFF = 60; // BUTTON_W * 3 + CROSSHAIR_INSET * 2 - 1
	static const int32_t TITLE_MID_Y = 14; // BUTTON_Y + (BUTTON_H / 2)
	static const int32_t MENUBAR_X = 6; // CROSSHAIR_INSET + 1
	static const int32_t MENUBAR_Y = 23; // BUTTON_Y + BUTTON_H
	static const int32_t HORIZ_RESIZE_INSET = 22; // CROSSHAIR_INSET + BUTTON_H
	static const int32_t VERT_RESIZE_INSET = 22; // CROSSHAIR_INSET + BUTTON_W
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("BUTTON_H")
#pragma pop_macro("BUTTON_W")
#pragma pop_macro("BUTTON_Y")
#pragma pop_macro("CROSSHAIR_INSET")
#pragma pop_macro("HORIZ_RESIZE_INSET")
#pragma pop_macro("MAXIMIZE_CONTAINED_H")
#pragma pop_macro("MAXIMIZE_CONTAINED_W")
#pragma pop_macro("MAXIMIZE_CONTAINED_X_DIFF")
#pragma pop_macro("MAXIMIZE_CONTAINED_Y")
#pragma pop_macro("MAXIMIZE_X_DIFF")
#pragma pop_macro("MENUBAR_HEIGHT_IF_NO_MENUBAR")
#pragma pop_macro("MENUBAR_X")
#pragma pop_macro("MENUBAR_Y")
#pragma pop_macro("MINIMIZE_CONTAINED_H")
#pragma pop_macro("MINIMIZE_CONTAINED_W")
#pragma pop_macro("MINIMIZE_CONTAINED_X_DIFF")
#pragma pop_macro("MINIMIZE_CONTAINED_Y")
#pragma pop_macro("MINIMIZE_X_DIFF")
#pragma pop_macro("SYS_MENU_CONTAINED_H")
#pragma pop_macro("SYS_MENU_CONTAINED_W")
#pragma pop_macro("SYS_MENU_CONTAINED_X")
#pragma pop_macro("SYS_MENU_CONTAINED_Y")
#pragma pop_macro("SYS_MENU_X")
#pragma pop_macro("TITLE_MID_Y")
#pragma pop_macro("TITLE_W_DIFF")
#pragma pop_macro("TITLE_X")
#pragma pop_macro("VERT_RESIZE_INSET")

#endif // _sun_awt_X11_XFramePeer_h_