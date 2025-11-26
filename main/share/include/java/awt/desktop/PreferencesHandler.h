#ifndef _java_awt_desktop_PreferencesHandler_h_
#define _java_awt_desktop_PreferencesHandler_h_
//$ interface java.awt.desktop.PreferencesHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace desktop {
			class PreferencesEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import PreferencesHandler : public ::java::lang::Object {
	$interface(PreferencesHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handlePreferences(::java::awt::desktop::PreferencesEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_PreferencesHandler_h_