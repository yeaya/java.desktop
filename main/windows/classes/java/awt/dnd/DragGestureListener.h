#ifndef _java_awt_dnd_DragGestureListener_h_
#define _java_awt_dnd_DragGestureListener_h_
//$ interface java.awt.dnd.DragGestureListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $export DragGestureListener : public ::java::util::EventListener {
	$interface(DragGestureListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void dragGestureRecognized(::java::awt::dnd::DragGestureEvent* dge) {}
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragGestureListener_h_