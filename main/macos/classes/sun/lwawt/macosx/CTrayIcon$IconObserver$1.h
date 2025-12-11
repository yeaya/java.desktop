#ifndef _sun_lwawt_macosx_CTrayIcon$IconObserver$1_h_
#define _sun_lwawt_macosx_CTrayIcon$IconObserver$1_h_
//$ class sun.lwawt.macosx.CTrayIcon$IconObserver$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CTrayIcon$IconObserver;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CTrayIcon$IconObserver$1 : public ::java::lang::Runnable {
	$class(CTrayIcon$IconObserver$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CTrayIcon$IconObserver$1();
	void init$(::sun::lwawt::macosx::CTrayIcon$IconObserver* this$1, ::java::awt::Image* val$image);
	virtual void run() override;
	::sun::lwawt::macosx::CTrayIcon$IconObserver* this$1 = nullptr;
	::java::awt::Image* val$image = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CTrayIcon$IconObserver$1_h_