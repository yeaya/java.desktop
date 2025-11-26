#ifndef _java_awt_KeyboardFocusManager$LightweightFocusRequest_h_
#define _java_awt_KeyboardFocusManager$LightweightFocusRequest_h_
//$ class java.awt.KeyboardFocusManager$LightweightFocusRequest
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

namespace java {
	namespace awt {

class KeyboardFocusManager$LightweightFocusRequest : public ::java::lang::Object {
	$class(KeyboardFocusManager$LightweightFocusRequest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyboardFocusManager$LightweightFocusRequest();
	void init$(::java::awt::Component* component, bool temporary, ::java::awt::event::FocusEvent$Cause* cause);
	virtual $String* toString() override;
	::java::awt::Component* component = nullptr;
	bool temporary = false;
	::java::awt::event::FocusEvent$Cause* cause = nullptr;
};

	} // awt
} // java

#endif // _java_awt_KeyboardFocusManager$LightweightFocusRequest_h_