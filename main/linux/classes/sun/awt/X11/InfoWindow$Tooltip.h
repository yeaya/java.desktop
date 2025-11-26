#ifndef _sun_awt_X11_InfoWindow$Tooltip_h_
#define _sun_awt_X11_InfoWindow$Tooltip_h_
//$ class sun.awt.X11.InfoWindow$Tooltip
//$ extends sun.awt.X11.InfoWindow

#include <sun/awt/X11/InfoWindow.h>

#pragma push_macro("TOOLTIP_BACKGROUND_COLOR")
#undef TOOLTIP_BACKGROUND_COLOR
#pragma push_macro("TOOLTIP_MAX_LENGTH")
#undef TOOLTIP_MAX_LENGTH
#pragma push_macro("TOOLTIP_MOUSE_CURSOR_INDENT")
#undef TOOLTIP_MOUSE_CURSOR_INDENT
#pragma push_macro("TOOLTIP_SHOW_TIME")
#undef TOOLTIP_SHOW_TIME
#pragma push_macro("TOOLTIP_START_DELAY_TIME")
#undef TOOLTIP_START_DELAY_TIME
#pragma push_macro("TOOLTIP_TEXT_FONT")
#undef TOOLTIP_TEXT_FONT

namespace java {
	namespace awt {
		class Color;
		class Font;
		class Frame;
		class Label;
		class Rectangle;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow$Tooltip$LiveArguments;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Tooltip : public ::sun::awt::X11::InfoWindow {
	$class(InfoWindow$Tooltip, 0, ::sun::awt::X11::InfoWindow)
public:
	InfoWindow$Tooltip();
	using ::sun::awt::X11::InfoWindow::add;
	using ::sun::awt::X11::InfoWindow::isFocusCycleRoot;
	using ::sun::awt::X11::InfoWindow::getMousePosition;
	using ::sun::awt::X11::InfoWindow::list;
	void init$(::java::awt::Frame* parent, Object$* target, ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments* liveArguments);
	void display();
	virtual void enter();
	virtual void exit();
	bool isPointerOverTrayIcon(::java::awt::Rectangle* trayRect);
	using ::sun::awt::X11::InfoWindow::show;
	using ::sun::awt::X11::InfoWindow::remove;
	$Object* target = nullptr;
	::sun::awt::X11::InfoWindow$Tooltip$LiveArguments* liveArguments = nullptr;
	::java::awt::Label* textLabel = nullptr;
	::java::lang::Runnable* starter = nullptr;
	static const int32_t TOOLTIP_SHOW_TIME = 10000;
	static const int32_t TOOLTIP_START_DELAY_TIME = 1000;
	static const int32_t TOOLTIP_MAX_LENGTH = 64;
	static const int32_t TOOLTIP_MOUSE_CURSOR_INDENT = 5;
	static ::java::awt::Color* TOOLTIP_BACKGROUND_COLOR;
	static ::java::awt::Font* TOOLTIP_TEXT_FONT;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("TOOLTIP_BACKGROUND_COLOR")
#pragma pop_macro("TOOLTIP_MAX_LENGTH")
#pragma pop_macro("TOOLTIP_MOUSE_CURSOR_INDENT")
#pragma pop_macro("TOOLTIP_SHOW_TIME")
#pragma pop_macro("TOOLTIP_START_DELAY_TIME")
#pragma pop_macro("TOOLTIP_TEXT_FONT")

#endif // _sun_awt_X11_InfoWindow$Tooltip_h_