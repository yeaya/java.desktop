#ifndef _java_awt_KeyEventPostProcessor_h_
#define _java_awt_KeyEventPostProcessor_h_
//$ interface java.awt.KeyEventPostProcessor
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

class $export KeyEventPostProcessor : public ::java::lang::Object {
	$interface(KeyEventPostProcessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool postProcessKeyEvent(::java::awt::event::KeyEvent* e) {return false;}
};

	} // awt
} // java

#endif // _java_awt_KeyEventPostProcessor_h_