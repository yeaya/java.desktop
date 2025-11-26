#ifndef _sun_awt_X11_XFileDialogPeer$3_h_
#define _sun_awt_X11_XFileDialogPeer$3_h_
//$ class sun.awt.X11.XFileDialogPeer$3
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XFileDialogPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XFileDialogPeer$3 : public ::java::awt::event::WindowAdapter {
	$class(XFileDialogPeer$3, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	XFileDialogPeer$3();
	void init$(::sun::awt::X11::XFileDialogPeer* this$0);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::sun::awt::X11::XFileDialogPeer* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XFileDialogPeer$3_h_