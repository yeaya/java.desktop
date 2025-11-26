#ifndef _java_awt_KeyboardFocusManager$HeavyweightFocusRequest_h_
#define _java_awt_KeyboardFocusManager$HeavyweightFocusRequest_h_
//$ class java.awt.KeyboardFocusManager$HeavyweightFocusRequest
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLEAR_GLOBAL_FOCUS_OWNER")
#undef CLEAR_GLOBAL_FOCUS_OWNER

namespace java {
	namespace awt {
		class Component;
		class KeyboardFocusManager$LightweightFocusRequest;
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
	namespace util {
		class LinkedList;
	}
}

namespace java {
	namespace awt {

class KeyboardFocusManager$HeavyweightFocusRequest : public ::java::lang::Object {
	$class(KeyboardFocusManager$HeavyweightFocusRequest, 0, ::java::lang::Object)
public:
	KeyboardFocusManager$HeavyweightFocusRequest();
	void init$();
	void init$(::java::awt::Component* heavyweight, ::java::awt::Component* descendant, bool temporary, ::java::awt::event::FocusEvent$Cause* cause);
	bool addLightweightRequest(::java::awt::Component* descendant, bool temporary, ::java::awt::event::FocusEvent$Cause* cause);
	::java::awt::KeyboardFocusManager$LightweightFocusRequest* getFirstLightweightRequest();
	virtual $String* toString() override;
	::java::awt::Component* heavyweight = nullptr;
	::java::util::LinkedList* lightweightRequests = nullptr;
	static ::java::awt::KeyboardFocusManager$HeavyweightFocusRequest* CLEAR_GLOBAL_FOCUS_OWNER;
};

	} // awt
} // java

#pragma pop_macro("CLEAR_GLOBAL_FOCUS_OWNER")

#endif // _java_awt_KeyboardFocusManager$HeavyweightFocusRequest_h_