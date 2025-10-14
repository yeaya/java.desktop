#ifndef _sun_awt_windows_WComponentPeer$1_h_
#define _sun_awt_windows_WComponentPeer$1_h_
//$ class sun.awt.windows.WComponentPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Container;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WComponentPeer$1 : public ::java::lang::Runnable {
	$class(WComponentPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WComponentPeer$1();
	void init$(::sun::awt::windows::WComponentPeer* this$0, ::java::awt::Container* val$cont);
	virtual void run() override;
	::sun::awt::windows::WComponentPeer* this$0 = nullptr;
	::java::awt::Container* val$cont = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WComponentPeer$1_h_