#ifndef _sun_awt_windows_WDropTargetContextPeer$1_h_
#define _sun_awt_windows_WDropTargetContextPeer$1_h_
//$ class sun.awt.windows.WDropTargetContextPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace dnd {
			class SunDropTargetEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WDropTargetContextPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WDropTargetContextPeer$1 : public ::java::lang::Runnable {
	$class(WDropTargetContextPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WDropTargetContextPeer$1();
	void init$(::sun::awt::windows::WDropTargetContextPeer* this$0, ::sun::awt::dnd::SunDropTargetEvent* val$e);
	virtual void run() override;
	::sun::awt::windows::WDropTargetContextPeer* this$0 = nullptr;
	::sun::awt::dnd::SunDropTargetEvent* val$e = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WDropTargetContextPeer$1_h_