#ifndef _java_awt_event_MouseEvent$1_h_
#define _java_awt_event_MouseEvent$1_h_
//$ class java.awt.event.MouseEvent$1
//$ extends sun.awt.AWTAccessor$MouseEventAccessor

#include <sun/awt/AWTAccessor$MouseEventAccessor.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class MouseEvent$1 : public ::sun::awt::AWTAccessor$MouseEventAccessor {
	$class(MouseEvent$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$MouseEventAccessor)
public:
	MouseEvent$1();
	void init$();
	virtual bool isCausedByTouchEvent(::java::awt::event::MouseEvent* ev) override;
	virtual void setCausedByTouchEvent(::java::awt::event::MouseEvent* ev, bool causedByTouchEvent) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_MouseEvent$1_h_