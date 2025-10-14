#ifndef _sun_awt_AWTAccessor$DefaultKeyboardFocusManagerAccessor_h_
#define _sun_awt_AWTAccessor$DefaultKeyboardFocusManagerAccessor_h_
//$ interface sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class DefaultKeyboardFocusManager;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$DefaultKeyboardFocusManagerAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$DefaultKeyboardFocusManagerAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void consumeNextKeyTyped(::java::awt::DefaultKeyboardFocusManager* dkfm, ::java::awt::event::KeyEvent* e) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$DefaultKeyboardFocusManagerAccessor_h_