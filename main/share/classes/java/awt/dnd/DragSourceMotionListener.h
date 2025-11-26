#ifndef _java_awt_dnd_DragSourceMotionListener_h_
#define _java_awt_dnd_DragSourceMotionListener_h_
//$ interface java.awt.dnd.DragSourceMotionListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DragSourceDragEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $export DragSourceMotionListener : public ::java::util::EventListener {
	$interface(DragSourceMotionListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void dragMouseMoved(::java::awt::dnd::DragSourceDragEvent* dsde) {}
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragSourceMotionListener_h_