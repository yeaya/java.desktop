#ifndef _java_awt_desktop_AboutHandler_h_
#define _java_awt_desktop_AboutHandler_h_
//$ interface java.awt.desktop.AboutHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace desktop {
			class AboutEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $export AboutHandler : public ::java::lang::Object {
	$interface(AboutHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handleAbout(::java::awt::desktop::AboutEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_AboutHandler_h_