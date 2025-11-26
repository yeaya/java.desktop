#ifndef _java_awt_KeyboardFocusManager$1_h_
#define _java_awt_KeyboardFocusManager$1_h_
//$ class java.awt.KeyboardFocusManager$1
//$ extends sun.awt.AWTAccessor$KeyboardFocusManagerAccessor

#include <sun/awt/AWTAccessor$KeyboardFocusManagerAccessor.h>

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

namespace java {
	namespace awt {

class KeyboardFocusManager$1 : public ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor {
	$class(KeyboardFocusManager$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor)
public:
	KeyboardFocusManager$1();
	void init$();
	virtual ::java::awt::Container* getCurrentFocusCycleRoot() override;
	virtual ::java::awt::KeyboardFocusManager* getCurrentKeyboardFocusManager(::sun::awt::AppContext* ctx) override;
	virtual ::java::awt::Component* getMostRecentFocusOwner(::java::awt::Window* window) override;
	virtual bool processSynchronousLightweightTransfer(::java::awt::Component* heavyweight, ::java::awt::Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time) override;
	virtual void removeLastFocusRequest(::java::awt::Component* heavyweight) override;
	virtual void setMostRecentFocusOwner(::java::awt::Window* window, ::java::awt::Component* component) override;
	virtual int32_t shouldNativelyFocusHeavyweight(::java::awt::Component* heavyweight, ::java::awt::Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
};

	} // awt
} // java

#endif // _java_awt_KeyboardFocusManager$1_h_