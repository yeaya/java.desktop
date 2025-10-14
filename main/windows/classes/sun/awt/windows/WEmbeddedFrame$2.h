#ifndef _sun_awt_windows_WEmbeddedFrame$2_h_
#define _sun_awt_windows_WEmbeddedFrame$2_h_
//$ class sun.awt.windows.WEmbeddedFrame$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace peer {
			class FramePeer;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WEmbeddedFrame;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WEmbeddedFrame$2 : public ::java::lang::Runnable {
	$class(WEmbeddedFrame$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WEmbeddedFrame$2();
	void init$(::sun::awt::windows::WEmbeddedFrame* this$0, ::java::awt::peer::FramePeer* val$peer);
	virtual void run() override;
	::sun::awt::windows::WEmbeddedFrame* this$0 = nullptr;
	::java::awt::peer::FramePeer* val$peer = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WEmbeddedFrame$2_h_