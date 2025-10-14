#ifndef _com_sun_java_swing_plaf_windows_WindowsPopupWindow_h_
#define _com_sun_java_swing_plaf_windows_WindowsPopupWindow_h_
//$ class com.sun.java.swing.plaf.windows.WindowsPopupWindow
//$ extends javax.swing.JWindow

#include <javax/swing/JWindow.h>

#pragma push_macro("COMBOBOX_POPUP_WINDOW_TYPE")
#undef COMBOBOX_POPUP_WINDOW_TYPE
#pragma push_macro("MENU_WINDOW_TYPE")
#undef MENU_WINDOW_TYPE
#pragma push_macro("POPUPMENU_WINDOW_TYPE")
#undef POPUPMENU_WINDOW_TYPE
#pragma push_macro("SUBMENU_WINDOW_TYPE")
#undef SUBMENU_WINDOW_TYPE
#pragma push_macro("TOOLTIP_WINDOW_TYPE")
#undef TOOLTIP_WINDOW_TYPE
#pragma push_macro("UNDEFINED_WINDOW_TYPE")
#undef UNDEFINED_WINDOW_TYPE

namespace java {
	namespace awt {
		class Graphics;
		class Window;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsPopupWindow : public ::javax::swing::JWindow {
	$class(WindowsPopupWindow, $NO_CLASS_INIT, ::javax::swing::JWindow)
public:
	WindowsPopupWindow();
	using ::javax::swing::JWindow::add;
	using ::javax::swing::JWindow::getMousePosition;
	void init$(::java::awt::Window* parent);
	virtual int32_t getWindowType();
	virtual void hide() override;
	using ::javax::swing::JWindow::remove;
	using ::javax::swing::JWindow::repaint;
	using ::javax::swing::JWindow::isFocusCycleRoot;
	using ::javax::swing::JWindow::list;
	virtual void setWindowType(int32_t type);
	using ::javax::swing::JWindow::show;
	virtual void show() override;
	virtual void update(::java::awt::Graphics* g) override;
	static const int32_t UNDEFINED_WINDOW_TYPE = 0;
	static const int32_t TOOLTIP_WINDOW_TYPE = 1;
	static const int32_t MENU_WINDOW_TYPE = 2;
	static const int32_t SUBMENU_WINDOW_TYPE = 3;
	static const int32_t POPUPMENU_WINDOW_TYPE = 4;
	static const int32_t COMBOBOX_POPUP_WINDOW_TYPE = 5;
	int32_t windowType = 0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("COMBOBOX_POPUP_WINDOW_TYPE")
#pragma pop_macro("MENU_WINDOW_TYPE")
#pragma pop_macro("POPUPMENU_WINDOW_TYPE")
#pragma pop_macro("SUBMENU_WINDOW_TYPE")
#pragma pop_macro("TOOLTIP_WINDOW_TYPE")
#pragma pop_macro("UNDEFINED_WINDOW_TYPE")

#endif // _com_sun_java_swing_plaf_windows_WindowsPopupWindow_h_