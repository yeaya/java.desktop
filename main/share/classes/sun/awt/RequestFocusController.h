#ifndef _sun_awt_RequestFocusController_h_
#define _sun_awt_RequestFocusController_h_
//$ interface sun.awt.RequestFocusController
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}

namespace sun {
	namespace awt {

class $export RequestFocusController : public ::java::lang::Object {
	$interface(RequestFocusController, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool acceptRequestFocus(::java::awt::Component* from, ::java::awt::Component* to, bool temporary, bool focusedWindowChangeAllowed, ::java::awt::event::FocusEvent$Cause* cause) {return false;}
};

	} // awt
} // sun

#endif // _sun_awt_RequestFocusController_h_