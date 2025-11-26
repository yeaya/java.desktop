#ifndef _sun_awt_X11_InfoWindow_h_
#define _sun_awt_X11_InfoWindow_h_
//$ class sun.awt.X11.InfoWindow
//$ extends java.awt.Window

#include <java/awt/Window.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Container;
		class Frame;
		class Point;
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
			class InfoWindow$Closer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow : public ::java::awt::Window {
	$class(InfoWindow, 0, ::java::awt::Window)
public:
	InfoWindow();
	using ::java::awt::Window::isFocusCycleRoot;
	using ::java::awt::Window::add;
	using ::java::awt::Window::getMousePosition;
	using ::java::awt::Window::list;
	void init$(::java::awt::Frame* parent, ::java::awt::Color* borderColor);
	static void access$001(::sun::awt::X11::InfoWindow* x0);
	virtual ::java::awt::Component* add(::java::awt::Component* c) override;
	virtual void hide() override;
	using ::java::awt::Window::remove;
	virtual void setCloser(::java::lang::Runnable* action, int32_t time);
	using ::java::awt::Window::show;
	virtual void show(::java::awt::Point* corner, int32_t indent);
	static bool $assertionsDisabled;
	::java::awt::Container* container = nullptr;
	::sun::awt::X11::InfoWindow$Closer* closer = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow_h_