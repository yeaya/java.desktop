#ifndef _java_awt_desktop_OpenURIHandler_h_
#define _java_awt_desktop_OpenURIHandler_h_
//$ interface java.awt.desktop.OpenURIHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace desktop {
			class OpenURIEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $export OpenURIHandler : public ::java::lang::Object {
	$interface(OpenURIHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void openURI(::java::awt::desktop::OpenURIEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_OpenURIHandler_h_