#ifndef _sun_awt_AWTAccessor$MouseEventAccessor_h_
#define _sun_awt_AWTAccessor$MouseEventAccessor_h_
//$ interface sun.awt.AWTAccessor$MouseEventAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace sun {
	namespace awt {

class $import AWTAccessor$MouseEventAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$MouseEventAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isCausedByTouchEvent(::java::awt::event::MouseEvent* ev) {return false;}
	virtual void setCausedByTouchEvent(::java::awt::event::MouseEvent* ev, bool causedByTouchEvent) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$MouseEventAccessor_h_