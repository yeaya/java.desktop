#ifndef _sun_awt_AWTAccessor$InputEventAccessor_h_
#define _sun_awt_AWTAccessor$InputEventAccessor_h_
//$ interface sun.awt.AWTAccessor$InputEventAccessor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace event {
			class InputEvent;
		}
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$InputEventAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$InputEventAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool canAccessSystemClipboard(::java::awt::event::InputEvent* event) {return false;}
	virtual $ints* getButtonDownMasks() {return nullptr;}
	virtual void setCanAccessSystemClipboard(::java::awt::event::InputEvent* event, bool canAccessSystemClipboard) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$InputEventAccessor_h_