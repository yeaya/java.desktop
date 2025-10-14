#ifndef _java_awt_desktop_PrintFilesHandler_h_
#define _java_awt_desktop_PrintFilesHandler_h_
//$ interface java.awt.desktop.PrintFilesHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace desktop {
			class PrintFilesEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import PrintFilesHandler : public ::java::lang::Object {
	$interface(PrintFilesHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void printFiles(::java::awt::desktop::PrintFilesEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_PrintFilesHandler_h_