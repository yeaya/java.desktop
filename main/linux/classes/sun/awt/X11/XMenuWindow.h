#ifndef _sun_awt_X11_XMenuWindow_h_
#define _sun_awt_X11_XMenuWindow_h_
//$ class sun.awt.X11.XMenuWindow
//$ extends sun.awt.X11.XBaseMenuWindow

#include <java/lang/Array.h>
#include <sun/awt/X11/XBaseMenuWindow.h>

#pragma push_macro("CHECKMARK_SIZE")
#undef CHECKMARK_SIZE
#pragma push_macro("CHECKMARK_X")
#undef CHECKMARK_X
#pragma push_macro("CHECKMARK_Y")
#undef CHECKMARK_Y
#pragma push_macro("WINDOW_ITEM_INDENT")
#undef WINDOW_ITEM_INDENT
#pragma push_macro("WINDOW_ITEM_MARGIN_BOTTOM")
#undef WINDOW_ITEM_MARGIN_BOTTOM
#pragma push_macro("WINDOW_ITEM_MARGIN_LEFT")
#undef WINDOW_ITEM_MARGIN_LEFT
#pragma push_macro("WINDOW_ITEM_MARGIN_RIGHT")
#undef WINDOW_ITEM_MARGIN_RIGHT
#pragma push_macro("WINDOW_ITEM_MARGIN_TOP")
#undef WINDOW_ITEM_MARGIN_TOP
#pragma push_macro("WINDOW_SHORTCUT_SPACING")
#undef WINDOW_SHORTCUT_SPACING
#pragma push_macro("WINDOW_SPACING_BOTTOM")
#undef WINDOW_SPACING_BOTTOM
#pragma push_macro("WINDOW_SPACING_LEFT")
#undef WINDOW_SPACING_LEFT
#pragma push_macro("WINDOW_SPACING_RIGHT")
#undef WINDOW_SPACING_RIGHT
#pragma push_macro("WINDOW_SPACING_TOP")
#undef WINDOW_SPACING_TOP

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XBaseMenuWindow$MappingData;
			class XCreateWindowParams;
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

class XMenuWindow : public ::sun::awt::X11::XBaseMenuWindow {
	$class(XMenuWindow, 0, ::sun::awt::X11::XBaseMenuWindow)
public:
	XMenuWindow();
	using ::sun::awt::X11::XBaseMenuWindow::handleKeyPress;
	using ::sun::awt::X11::XBaseMenuWindow::getGraphics;
	void init$(::sun::awt::X11::XMenuPeer* menuPeer);
	virtual bool ensureCreated();
	virtual ::java::awt::Dimension* getCaptionSize();
	virtual ::java::awt::Dimension* getDesiredSize();
	virtual ::sun::awt::X11::XMenuPeer* getMenuPeer();
	virtual ::java::util::Vector* getMenuTargetItems();
	virtual ::sun::awt::X11::XBaseMenuWindow* getParentMenuWindow() override;
	virtual ::java::awt::Rectangle* getSubmenuBounds(::java::awt::Rectangle* itemBounds, ::java::awt::Dimension* windowSize) override;
	virtual void hide();
	virtual bool isCreated();
	virtual ::sun::awt::X11::XBaseMenuWindow$MappingData* map() override;
	virtual void paintCaption(::java::awt::Graphics* g, ::java::awt::Rectangle* rect);
	virtual void paintPeer(::java::awt::Graphics* g) override;
	using ::sun::awt::X11::XBaseMenuWindow::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XBaseMenuWindow::preInit;
	virtual void show(::java::awt::Rectangle* bounds);
	virtual void updateSize() override;
	static ::sun::util::logging::PlatformLogger* log;
	::sun::awt::X11::XMenuPeer* menuPeer = nullptr;
	static const int32_t WINDOW_SPACING_LEFT = 2;
	static const int32_t WINDOW_SPACING_RIGHT = 2;
	static const int32_t WINDOW_SPACING_TOP = 2;
	static const int32_t WINDOW_SPACING_BOTTOM = 2;
	static const int32_t WINDOW_ITEM_INDENT = 15;
	static const int32_t WINDOW_ITEM_MARGIN_LEFT = 2;
	static const int32_t WINDOW_ITEM_MARGIN_RIGHT = 2;
	static const int32_t WINDOW_ITEM_MARGIN_TOP = 2;
	static const int32_t WINDOW_ITEM_MARGIN_BOTTOM = 2;
	static const int32_t WINDOW_SHORTCUT_SPACING = 10;
	static const int32_t CHECKMARK_SIZE = 128;
	static $ints* CHECKMARK_X;
	static $ints* CHECKMARK_Y;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("CHECKMARK_SIZE")
#pragma pop_macro("CHECKMARK_X")
#pragma pop_macro("CHECKMARK_Y")
#pragma pop_macro("WINDOW_ITEM_INDENT")
#pragma pop_macro("WINDOW_ITEM_MARGIN_BOTTOM")
#pragma pop_macro("WINDOW_ITEM_MARGIN_LEFT")
#pragma pop_macro("WINDOW_ITEM_MARGIN_RIGHT")
#pragma pop_macro("WINDOW_ITEM_MARGIN_TOP")
#pragma pop_macro("WINDOW_SHORTCUT_SPACING")
#pragma pop_macro("WINDOW_SPACING_BOTTOM")
#pragma pop_macro("WINDOW_SPACING_LEFT")
#pragma pop_macro("WINDOW_SPACING_RIGHT")
#pragma pop_macro("WINDOW_SPACING_TOP")

#endif // _sun_awt_X11_XMenuWindow_h_