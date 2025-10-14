#ifndef _java_awt_desktop_QuitHandler_h_
#define _java_awt_desktop_QuitHandler_h_
//$ interface java.awt.desktop.QuitHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace desktop {
			class QuitEvent;
			class QuitResponse;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $export QuitHandler : public ::java::lang::Object {
	$interface(QuitHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handleQuitRequestWith(::java::awt::desktop::QuitEvent* e, ::java::awt::desktop::QuitResponse* response) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_QuitHandler_h_