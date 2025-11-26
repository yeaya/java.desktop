#ifndef _java_awt_DefaultKeyboardFocusManager$TypeAheadMarker_h_
#define _java_awt_DefaultKeyboardFocusManager$TypeAheadMarker_h_
//$ class java.awt.DefaultKeyboardFocusManager$TypeAheadMarker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace java {
	namespace awt {

class DefaultKeyboardFocusManager$TypeAheadMarker : public ::java::lang::Object {
	$class(DefaultKeyboardFocusManager$TypeAheadMarker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultKeyboardFocusManager$TypeAheadMarker();
	void init$(int64_t after, ::java::awt::Component* untilFocused);
	virtual $String* toString() override;
	int64_t after = 0;
	::java::awt::Component* untilFocused = nullptr;
};

	} // awt
} // java

#endif // _java_awt_DefaultKeyboardFocusManager$TypeAheadMarker_h_