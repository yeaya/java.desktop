#ifndef _java_awt_desktop_QuitResponse_h_
#define _java_awt_desktop_QuitResponse_h_
//$ interface java.awt.desktop.QuitResponse
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace desktop {

class $export QuitResponse : public ::java::lang::Object {
	$interface(QuitResponse, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void cancelQuit() {}
	virtual void performQuit() {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_QuitResponse_h_