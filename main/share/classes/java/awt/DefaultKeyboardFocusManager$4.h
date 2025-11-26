#ifndef _java_awt_DefaultKeyboardFocusManager$4_h_
#define _java_awt_DefaultKeyboardFocusManager$4_h_
//$ class java.awt.DefaultKeyboardFocusManager$4
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace awt {
		class SentEvent;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace java {
	namespace awt {

class DefaultKeyboardFocusManager$4 : public ::java::lang::Thread {
	$class(DefaultKeyboardFocusManager$4, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	DefaultKeyboardFocusManager$4();
	void init$(::java::awt::SentEvent* val$se, ::sun::awt::AppContext* val$targetAppContext);
	virtual void run() override;
	::sun::awt::AppContext* val$targetAppContext = nullptr;
	::java::awt::SentEvent* val$se = nullptr;
};

	} // awt
} // java

#endif // _java_awt_DefaultKeyboardFocusManager$4_h_