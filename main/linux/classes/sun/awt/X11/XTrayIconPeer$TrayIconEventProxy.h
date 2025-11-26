#ifndef _sun_awt_X11_XTrayIconPeer$TrayIconEventProxy_h_
#define _sun_awt_X11_XTrayIconPeer$TrayIconEventProxy_h_
//$ class sun.awt.X11.XTrayIconPeer$TrayIconEventProxy
//$ extends java.awt.event.MouseListener
//$ implements java.awt.event.MouseMotionListener

#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>

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
			class XTrayIconPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTrayIconPeer$TrayIconEventProxy : public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener {
	$class(XTrayIconPeer$TrayIconEventProxy, $NO_CLASS_INIT, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener)
public:
	XTrayIconPeer$TrayIconEventProxy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11::XTrayIconPeer* xtiPeer);
	virtual void handleEvent(::java::awt::event::MouseEvent* e);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual $String* toString() override;
	::sun::awt::X11::XTrayIconPeer* xtiPeer = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTrayIconPeer$TrayIconEventProxy_h_