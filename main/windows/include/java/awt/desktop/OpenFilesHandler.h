#ifndef _java_awt_desktop_OpenFilesHandler_h_
#define _java_awt_desktop_OpenFilesHandler_h_
//$ interface java.awt.desktop.OpenFilesHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace desktop {
			class OpenFilesEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import OpenFilesHandler : public ::java::lang::Object {
	$interface(OpenFilesHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void openFiles(::java::awt::desktop::OpenFilesEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_OpenFilesHandler_h_