#ifndef _sun_awt_X11_XChoicePeer$UnfurledChoice_h_
#define _sun_awt_X11_XChoicePeer$UnfurledChoice_h_
//$ class sun.awt.X11.XChoicePeer$UnfurledChoice
//$ extends sun.awt.X11.XWindow

#include <sun/awt/X11/XWindow.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XChoicePeer;
			class XCreateWindowParams;
			class XEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XChoicePeer$UnfurledChoice : public ::sun::awt::X11::XWindow {
	$class(XChoicePeer$UnfurledChoice, $NO_CLASS_INIT, ::sun::awt::X11::XWindow)
public:
	XChoicePeer$UnfurledChoice();
	void init$(::sun::awt::X11::XChoicePeer* this$0, ::java::awt::Component* target);
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleUnmapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	bool isMouseEventInside(::java::awt::event::MouseEvent* e);
	bool isMouseInListArea(::java::awt::event::MouseEvent* e);
	void paintBackground();
	virtual void paintPeer(::java::awt::Graphics* g) override;
	::java::awt::Rectangle* placeOnScreen();
	using ::sun::awt::X11::XWindow::postInit;
	using ::sun::awt::X11::XWindow::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XWindow::repaint;
	virtual void repaint() override;
	void setVisible(bool vis);
	virtual void toFront() override;
	::java::awt::Point* toLocalCoords(::java::awt::event::MouseEvent* e);
	void trackMouse(::java::awt::event::MouseEvent* e);
	void trackSelection(int32_t transX, int32_t transY);
	::sun::awt::X11::XChoicePeer* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XChoicePeer$UnfurledChoice_h_