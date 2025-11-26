#ifndef _sun_awt_X11_XMenuBarPeer_h_
#define _sun_awt_X11_XMenuBarPeer_h_
//$ class sun.awt.X11.XMenuBarPeer
//$ extends sun.awt.X11.XBaseMenuWindow
//$ implements java.awt.peer.MenuBarPeer

#include <java/awt/peer/MenuBarPeer.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XFramePeer.h>

#pragma push_macro("BAR_ITEM_MARGIN_BOTTOM")
#undef BAR_ITEM_MARGIN_BOTTOM
#pragma push_macro("BAR_ITEM_MARGIN_LEFT")
#undef BAR_ITEM_MARGIN_LEFT
#pragma push_macro("BAR_ITEM_MARGIN_RIGHT")
#undef BAR_ITEM_MARGIN_RIGHT
#pragma push_macro("BAR_ITEM_MARGIN_TOP")
#undef BAR_ITEM_MARGIN_TOP
#pragma push_macro("BAR_ITEM_SPACING")
#undef BAR_ITEM_SPACING
#pragma push_macro("BAR_SPACING_BOTTOM")
#undef BAR_SPACING_BOTTOM
#pragma push_macro("BAR_SPACING_LEFT")
#undef BAR_SPACING_LEFT
#pragma push_macro("BAR_SPACING_RIGHT")
#undef BAR_SPACING_RIGHT
#pragma push_macro("BAR_SPACING_TOP")
#undef BAR_SPACING_TOP
#pragma push_macro("BUTTON_H")
#undef BUTTON_H
#pragma push_macro("BUTTON_Y")
#undef BUTTON_Y
#pragma push_macro("CROSSHAIR_INSET")
#undef CROSSHAIR_INSET
#pragma push_macro("H_DIFF")
#undef H_DIFF
#pragma push_macro("W_DIFF")
#undef W_DIFF

namespace java {
	namespace awt {
		class AWTEvent;
		class Dimension;
		class Font;
		class Frame;
		class Graphics;
		class Menu;
		class MenuBar;
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
namespace sun {
	namespace awt {
		namespace X11 {
			class XBaseMenuWindow$MappingData;
			class XCreateWindowParams;
			class XEvent;
			class XMenuPeer;
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

class XMenuBarPeer : public ::sun::awt::X11::XBaseMenuWindow, public ::java::awt::peer::MenuBarPeer {
	$class(XMenuBarPeer, 0, ::sun::awt::X11::XBaseMenuWindow, ::java::awt::peer::MenuBarPeer)
public:
	XMenuBarPeer();
	using ::sun::awt::X11::XBaseMenuWindow::getGraphics;
	using ::sun::awt::X11::XBaseMenuWindow::handleKeyPress;
	using ::sun::awt::X11::XBaseMenuWindow::init;
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::MenuBar* menuBarTarget);
	virtual void addHelpMenu(::java::awt::Menu* m) override;
	virtual void addMenu(::java::awt::Menu* m) override;
	virtual void delMenu(int32_t index) override;
	virtual void doDispose() override;
	virtual int32_t getDesiredHeight();
	virtual ::sun::awt::X11::XBaseMenuWindow* getParentMenuWindow() override;
	virtual ::java::awt::Rectangle* getSubmenuBounds(::java::awt::Rectangle* itemBounds, ::java::awt::Dimension* windowSize) override;
	virtual void handleEvent(::java::awt::AWTEvent* event) override;
	virtual void handleF10KeyPress(::java::awt::event::KeyEvent* event);
	virtual void handleKeyPress(::sun::awt::X11::XEvent* xev) override;
	virtual void init(::java::awt::Frame* frame);
	virtual bool isFramePeerEnabled();
	virtual ::sun::awt::X11::XBaseMenuWindow$MappingData* map() override;
	virtual void paintPeer(::java::awt::Graphics* g) override;
	using ::sun::awt::X11::XBaseMenuWindow::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XBaseMenuWindow::preInit;
	virtual void print(::java::awt::Graphics* g);
	using ::sun::awt::X11::XBaseMenuWindow::reshape;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual $String* toString() override;
	virtual void ungrabInputImpl() override;
	virtual void updateSize() override;
	static ::sun::util::logging::PlatformLogger* log;
	::sun::awt::X11::XFramePeer* framePeer = nullptr;
	::java::awt::MenuBar* menuBarTarget = nullptr;
	::sun::awt::X11::XMenuPeer* helpMenu = nullptr;
	static const int32_t BAR_SPACING_TOP = 3;
	static const int32_t BAR_SPACING_BOTTOM = 3;
	static const int32_t BAR_SPACING_LEFT = 3;
	static const int32_t BAR_SPACING_RIGHT = 3;
	static const int32_t BAR_ITEM_SPACING = 2;
	static const int32_t BAR_ITEM_MARGIN_LEFT = 10;
	static const int32_t BAR_ITEM_MARGIN_RIGHT = 10;
	static const int32_t BAR_ITEM_MARGIN_TOP = 2;
	static const int32_t BAR_ITEM_MARGIN_BOTTOM = 2;
	static const int32_t W_DIFF = 12; // (::sun::awt::X11::XFramePeer::CROSSHAIR_INSET + 1) * 2
	static const int32_t H_DIFF = 23; // ::sun::awt::X11::XFramePeer::BUTTON_Y + ::sun::awt::X11::XFramePeer::BUTTON_H
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("BAR_ITEM_MARGIN_BOTTOM")
#pragma pop_macro("BAR_ITEM_MARGIN_LEFT")
#pragma pop_macro("BAR_ITEM_MARGIN_RIGHT")
#pragma pop_macro("BAR_ITEM_MARGIN_TOP")
#pragma pop_macro("BAR_ITEM_SPACING")
#pragma pop_macro("BAR_SPACING_BOTTOM")
#pragma pop_macro("BAR_SPACING_LEFT")
#pragma pop_macro("BAR_SPACING_RIGHT")
#pragma pop_macro("BAR_SPACING_TOP")
#pragma pop_macro("BUTTON_H")
#pragma pop_macro("BUTTON_Y")
#pragma pop_macro("CROSSHAIR_INSET")
#pragma pop_macro("H_DIFF")
#pragma pop_macro("W_DIFF")

#endif // _sun_awt_X11_XMenuBarPeer_h_