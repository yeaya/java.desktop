#ifndef _sun_awt_windows_WChoicePeer$1_h_
#define _sun_awt_windows_WChoicePeer$1_h_
//$ class sun.awt.windows.WChoicePeer$1
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
		namespace windows {
			class WChoicePeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WChoicePeer$1 : public ::java::awt::event::WindowAdapter {
	$class(WChoicePeer$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	WChoicePeer$1();
	void init$(::sun::awt::windows::WChoicePeer* this$0);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	::sun::awt::windows::WChoicePeer* this$0 = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WChoicePeer$1_h_