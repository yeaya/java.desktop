#ifndef _java_awt_event_InputEvent$1_h_
#define _java_awt_event_InputEvent$1_h_
//$ class java.awt.event.InputEvent$1
//$ extends sun.awt.AWTAccessor$InputEventAccessor

#include <java/lang/Array.h>
#include <sun/awt/AWTAccessor$InputEventAccessor.h>

namespace java {
	namespace awt {
		namespace event {
			class InputEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class InputEvent$1 : public ::sun::awt::AWTAccessor$InputEventAccessor {
	$class(InputEvent$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$InputEventAccessor)
public:
	InputEvent$1();
	void init$();
	virtual bool canAccessSystemClipboard(::java::awt::event::InputEvent* event) override;
	virtual $ints* getButtonDownMasks() override;
	virtual void setCanAccessSystemClipboard(::java::awt::event::InputEvent* event, bool canAccessSystemClipboard) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_InputEvent$1_h_