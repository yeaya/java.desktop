#ifndef _java_awt_DefaultKeyboardFocusManager$3_h_
#define _java_awt_DefaultKeyboardFocusManager$3_h_
//$ class java.awt.DefaultKeyboardFocusManager$3
//$ extends java.awt.Conditional

#include <java/awt/Conditional.h>

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

class DefaultKeyboardFocusManager$3 : public ::java::awt::Conditional {
	$class(DefaultKeyboardFocusManager$3, $NO_CLASS_INIT, ::java::awt::Conditional)
public:
	DefaultKeyboardFocusManager$3();
	void init$(::java::awt::SentEvent* val$se, ::sun::awt::AppContext* val$targetAppContext);
	virtual bool evaluate() override;
	::sun::awt::AppContext* val$targetAppContext = nullptr;
	::java::awt::SentEvent* val$se = nullptr;
};

	} // awt
} // java

#endif // _java_awt_DefaultKeyboardFocusManager$3_h_