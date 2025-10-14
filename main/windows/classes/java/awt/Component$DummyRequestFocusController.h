#ifndef _java_awt_Component$DummyRequestFocusController_h_
#define _java_awt_Component$DummyRequestFocusController_h_
//$ class java.awt.Component$DummyRequestFocusController
//$ extends sun.awt.RequestFocusController

#include <sun/awt/RequestFocusController.h>

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

namespace java {
	namespace awt {

class Component$DummyRequestFocusController : public ::sun::awt::RequestFocusController {
	$class(Component$DummyRequestFocusController, $NO_CLASS_INIT, ::sun::awt::RequestFocusController)
public:
	Component$DummyRequestFocusController();
	void init$();
	virtual bool acceptRequestFocus(::java::awt::Component* from, ::java::awt::Component* to, bool temporary, bool focusedWindowChangeAllowed, ::java::awt::event::FocusEvent$Cause* cause) override;
};

	} // awt
} // java

#endif // _java_awt_Component$DummyRequestFocusController_h_