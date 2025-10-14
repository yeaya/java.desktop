#ifndef _java_awt_dnd_DragSourceListener_h_
#define _java_awt_dnd_DragSourceListener_h_
//$ interface java.awt.dnd.DragSourceListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DragSourceDragEvent;
			class DragSourceDropEvent;
			class DragSourceEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $export DragSourceListener : public ::java::util::EventListener {
	$interface(DragSourceListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void dragDropEnd(::java::awt::dnd::DragSourceDropEvent* dsde) {}
	virtual void dragEnter(::java::awt::dnd::DragSourceDragEvent* dsde) {}
	virtual void dragExit(::java::awt::dnd::DragSourceEvent* dse) {}
	virtual void dragOver(::java::awt::dnd::DragSourceDragEvent* dsde) {}
	virtual void dropActionChanged(::java::awt::dnd::DragSourceDragEvent* dsde) {}
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragSourceListener_h_