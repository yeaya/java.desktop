#ifndef _sun_awt_X11_XTrayIconPeer$IconCanvas$IconObserver$1_h_
#define _sun_awt_X11_XTrayIconPeer$IconCanvas$IconObserver$1_h_
//$ class sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XTrayIconPeer$IconCanvas$IconObserver;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTrayIconPeer$IconCanvas$IconObserver$1 : public ::java::lang::Runnable {
	$class(XTrayIconPeer$IconCanvas$IconObserver$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XTrayIconPeer$IconCanvas$IconObserver$1();
	void init$(::sun::awt::X11::XTrayIconPeer$IconCanvas$IconObserver* this$1);
	virtual void run() override;
	::sun::awt::X11::XTrayIconPeer$IconCanvas$IconObserver* this$1 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTrayIconPeer$IconCanvas$IconObserver$1_h_