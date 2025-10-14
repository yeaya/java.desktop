#ifndef _java_awt_DefaultKeyboardFocusManager$1_h_
#define _java_awt_DefaultKeyboardFocusManager$1_h_
//$ class java.awt.DefaultKeyboardFocusManager$1
//$ extends sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor

#include <sun/awt/AWTAccessor$DefaultKeyboardFocusManagerAccessor.h>

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

namespace java {
	namespace awt {

class DefaultKeyboardFocusManager$1 : public ::sun::awt::AWTAccessor$DefaultKeyboardFocusManagerAccessor {
	$class(DefaultKeyboardFocusManager$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$DefaultKeyboardFocusManagerAccessor)
public:
	DefaultKeyboardFocusManager$1();
	void init$();
	virtual void consumeNextKeyTyped(::java::awt::DefaultKeyboardFocusManager* dkfm, ::java::awt::event::KeyEvent* e) override;
};

	} // awt
} // java

#endif // _java_awt_DefaultKeyboardFocusManager$1_h_