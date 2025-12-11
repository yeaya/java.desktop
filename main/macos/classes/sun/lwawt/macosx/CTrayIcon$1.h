#ifndef _sun_lwawt_macosx_CTrayIcon$1_h_
#define _sun_lwawt_macosx_CTrayIcon$1_h_
//$ class sun.lwawt.macosx.CTrayIcon$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CTrayIcon;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CTrayIcon$1 : public ::java::lang::Runnable {
	$class(CTrayIcon$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CTrayIcon$1();
	void init$(::sun::lwawt::macosx::CTrayIcon* this$0, ::java::awt::AWTEvent* val$event);
	virtual void run() override;
	::sun::lwawt::macosx::CTrayIcon* this$0 = nullptr;
	::java::awt::AWTEvent* val$event = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CTrayIcon$1_h_