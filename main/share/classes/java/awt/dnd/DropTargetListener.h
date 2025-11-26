#ifndef _java_awt_dnd_DropTargetListener_h_
#define _java_awt_dnd_DropTargetListener_h_
//$ interface java.awt.dnd.DropTargetListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetDragEvent;
			class DropTargetDropEvent;
			class DropTargetEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $export DropTargetListener : public ::java::util::EventListener {
	$interface(DropTargetListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void dragEnter(::java::awt::dnd::DropTargetDragEvent* dtde) {}
	virtual void dragExit(::java::awt::dnd::DropTargetEvent* dte) {}
	virtual void dragOver(::java::awt::dnd::DropTargetDragEvent* dtde) {}
	virtual void drop(::java::awt::dnd::DropTargetDropEvent* dtde) {}
	virtual void dropActionChanged(::java::awt::dnd::DropTargetDragEvent* dtde) {}
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTargetListener_h_