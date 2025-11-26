#ifndef _java_awt_KeyEventDispatcher_h_
#define _java_awt_KeyEventDispatcher_h_
//$ interface java.awt.KeyEventDispatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace java {
	namespace awt {

class $import KeyEventDispatcher : public ::java::lang::Object {
	$interface(KeyEventDispatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool dispatchKeyEvent(::java::awt::event::KeyEvent* e) {return false;}
};

	} // awt
} // java

#endif // _java_awt_KeyEventDispatcher_h_