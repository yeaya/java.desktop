#include <com/sun/java/swing/plaf/windows/WindowsPopupWindow.h>

#include <java/awt/Graphics.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JWindow.h>
#include <jcpp.h>

#undef COMBOBOX_POPUP_WINDOW_TYPE
#undef MENU_WINDOW_TYPE
#undef POPUPMENU_WINDOW_TYPE
#undef SUBMENU_WINDOW_TYPE
#undef TOOLTIP_WINDOW_TYPE
#undef UNDEFINED_WINDOW_TYPE

using $Graphics = ::java::awt::Graphics;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JWindow = ::javax::swing::JWindow;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsPopupWindow_FieldInfo_[] = {
	{"UNDEFINED_WINDOW_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(WindowsPopupWindow, UNDEFINED_WINDOW_TYPE)},
	{"TOOLTIP_WINDOW_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(WindowsPopupWindow, TOOLTIP_WINDOW_TYPE)},
	{"MENU_WINDOW_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(WindowsPopupWindow, MENU_WINDOW_TYPE)},
	{"SUBMENU_WINDOW_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(WindowsPopupWindow, SUBMENU_WINDOW_TYPE)},
	{"POPUPMENU_WINDOW_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(WindowsPopupWindow, POPUPMENU_WINDOW_TYPE)},
	{"COMBOBOX_POPUP_WINDOW_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(WindowsPopupWindow, COMBOBOX_POPUP_WINDOW_TYPE)},
	{"windowType", "I", nullptr, $PRIVATE, $field(WindowsPopupWindow, windowType)},
	{}
};

$MethodInfo _WindowsPopupWindow_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(static_cast<void(WindowsPopupWindow::*)($Window*)>(&WindowsPopupWindow::init$))},
	{"getWindowType", "()I", nullptr, 0},
	{"hide", "()V", nullptr, $PUBLIC},
	{"setWindowType", "(I)V", nullptr, 0},
	{"show", "()V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsPopupWindow_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsPopupWindow",
	"javax.swing.JWindow",
	nullptr,
	_WindowsPopupWindow_FieldInfo_,
	_WindowsPopupWindow_MethodInfo_
};

$Object* allocate$WindowsPopupWindow($Class* clazz) {
	return $of($alloc(WindowsPopupWindow));
}

void WindowsPopupWindow::init$($Window* parent) {
	$JWindow::init$(parent);
	setFocusableWindowState(false);
}

void WindowsPopupWindow::setWindowType(int32_t type) {
	this->windowType = type;
}

int32_t WindowsPopupWindow::getWindowType() {
	return this->windowType;
}

void WindowsPopupWindow::update($Graphics* g) {
	paint(g);
}

void WindowsPopupWindow::hide() {
	$JWindow::hide();
	removeNotify();
}

void WindowsPopupWindow::show() {
	$JWindow::show();
	this->pack();
}

WindowsPopupWindow::WindowsPopupWindow() {
}

$Class* WindowsPopupWindow::load$($String* name, bool initialize) {
	$loadClass(WindowsPopupWindow, name, initialize, &_WindowsPopupWindow_ClassInfo_, allocate$WindowsPopupWindow);
	return class$;
}

$Class* WindowsPopupWindow::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com