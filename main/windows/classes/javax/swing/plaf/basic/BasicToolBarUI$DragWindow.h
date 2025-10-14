#ifndef _javax_swing_plaf_basic_BasicToolBarUI$DragWindow_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$DragWindow_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$DragWindow
//$ extends java.awt.Window

#include <java/awt/Window.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Insets;
		class Point;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicToolBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicToolBarUI$DragWindow : public ::java::awt::Window {
	$class(BasicToolBarUI$DragWindow, $NO_CLASS_INIT, ::java::awt::Window)
public:
	BasicToolBarUI$DragWindow();
	using ::java::awt::Window::add;
	using ::java::awt::Window::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0, ::java::awt::Window* w);
	virtual ::java::awt::Color* getBorderColor();
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Point* getOffset();
	virtual int32_t getOrientation();
	using ::java::awt::Window::isFocusCycleRoot;
	using ::java::awt::Window::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::java::awt::Window::remove;
	virtual void setBorderColor(::java::awt::Color* c);
	virtual void setOffset(::java::awt::Point* p);
	virtual void setOrientation(int32_t o);
	using ::java::awt::Window::show;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
	::java::awt::Color* borderColor = nullptr;
	int32_t orientation = 0;
	::java::awt::Point* offset = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$DragWindow_h_