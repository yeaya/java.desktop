#ifndef _java_awt_dnd_DropTargetAdapter_h_
#define _java_awt_dnd_DropTargetAdapter_h_
//$ class java.awt.dnd.DropTargetAdapter
//$ extends java.awt.dnd.DropTargetListener

#include <java/awt/dnd/DropTargetListener.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetDragEvent;
			class DropTargetEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $import DropTargetAdapter : public ::java::awt::dnd::DropTargetListener {
	$class(DropTargetAdapter, $NO_CLASS_INIT, ::java::awt::dnd::DropTargetListener)
public:
	DropTargetAdapter();
	void init$();
	virtual void dragEnter(::java::awt::dnd::DropTargetDragEvent* dtde) override;
	virtual void dragExit(::java::awt::dnd::DropTargetEvent* dte) override;
	virtual void dragOver(::java::awt::dnd::DropTargetDragEvent* dtde) override;
	virtual void dropActionChanged(::java::awt::dnd::DropTargetDragEvent* dtde) override;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTargetAdapter_h_