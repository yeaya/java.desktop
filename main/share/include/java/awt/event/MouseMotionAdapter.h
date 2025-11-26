#ifndef _java_awt_event_MouseMotionAdapter_h_
#define _java_awt_event_MouseMotionAdapter_h_
//$ class java.awt.event.MouseMotionAdapter
//$ extends java.awt.event.MouseMotionListener

#include <java/awt/event/MouseMotionListener.h>

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

class $import MouseMotionAdapter : public ::java::awt::event::MouseMotionListener {
	$class(MouseMotionAdapter, $NO_CLASS_INIT, ::java::awt::event::MouseMotionListener)
public:
	MouseMotionAdapter();
	void init$();
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_MouseMotionAdapter_h_