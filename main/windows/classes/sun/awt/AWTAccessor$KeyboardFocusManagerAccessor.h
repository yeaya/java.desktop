#ifndef _sun_awt_AWTAccessor$KeyboardFocusManagerAccessor_h_
#define _sun_awt_AWTAccessor$KeyboardFocusManagerAccessor_h_
//$ interface sun.awt.AWTAccessor$KeyboardFocusManagerAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class KeyboardFocusManager;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$KeyboardFocusManagerAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$KeyboardFocusManagerAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Container* getCurrentFocusCycleRoot() {return nullptr;}
	virtual ::java::awt::KeyboardFocusManager* getCurrentKeyboardFocusManager(::sun::awt::AppContext* ctx) {return nullptr;}
	virtual ::java::awt::Component* getMostRecentFocusOwner(::java::awt::Window* window) {return nullptr;}
	virtual bool processSynchronousLightweightTransfer(::java::awt::Component* heavyweight, ::java::awt::Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time) {return false;}
	virtual void removeLastFocusRequest(::java::awt::Component* heavyweight) {}
	virtual void setMostRecentFocusOwner(::java::awt::Window* window, ::java::awt::Component* component) {}
	virtual int32_t shouldNativelyFocusHeavyweight(::java::awt::Component* heavyweight, ::java::awt::Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) {return 0;}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$KeyboardFocusManagerAccessor_h_