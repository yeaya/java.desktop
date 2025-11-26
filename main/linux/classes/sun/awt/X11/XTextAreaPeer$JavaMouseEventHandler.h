#ifndef _sun_awt_X11_XTextAreaPeer$JavaMouseEventHandler_h_
#define _sun_awt_X11_XTextAreaPeer$JavaMouseEventHandler_h_
//$ class sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JScrollBar;
		class JViewport;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XTextAreaPeer;
			class XTextAreaPeer$JavaMouseEventHandler$Pointer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$JavaMouseEventHandler : public ::java::lang::Object {
	$class(XTextAreaPeer$JavaMouseEventHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XTextAreaPeer$JavaMouseEventHandler();
	void init$(::sun::awt::X11::XTextAreaPeer* outer);
	void dispatch(::java::awt::event::MouseEvent* event);
	void grabbed_update(::java::awt::event::MouseEvent* event);
	void handle(::java::awt::event::MouseEvent* event);
	static ::java::awt::event::MouseEvent* newMouseEvent(::java::awt::Component* source, ::java::awt::Point* point, ::java::awt::event::MouseEvent* template$);
	void setCursor();
	bool setPointerIfPointOverButton(::javax::swing::JButton* button, ::java::awt::Point* point);
	bool setPointerIfPointOverScrollbar(::javax::swing::JScrollBar* bar, ::java::awt::Point* point);
	void setPointerToUnderPoint(::java::awt::Point* point);
	static ::java::awt::Point* toLocalSpace(::java::awt::Component* local, ::java::awt::Point* inParentSpace);
	static ::java::awt::Point* toViewportChildLocalSpace(::javax::swing::JViewport* v, ::java::awt::Point* inViewportParentSpace);
	::sun::awt::X11::XTextAreaPeer* outer = nullptr;
	::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer* current = nullptr;
	bool grabbed = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$JavaMouseEventHandler_h_