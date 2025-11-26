#ifndef _java_awt_dnd_DragSourceAdapter_h_
#define _java_awt_dnd_DragSourceAdapter_h_
//$ class java.awt.dnd.DragSourceAdapter
//$ extends java.awt.dnd.DragSourceListener
//$ implements java.awt.dnd.DragSourceMotionListener

#include <java/awt/dnd/DragSourceListener.h>
#include <java/awt/dnd/DragSourceMotionListener.h>

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

class $import DragSourceAdapter : public ::java::awt::dnd::DragSourceListener, public ::java::awt::dnd::DragSourceMotionListener {
	$class(DragSourceAdapter, $NO_CLASS_INIT, ::java::awt::dnd::DragSourceListener, ::java::awt::dnd::DragSourceMotionListener)
public:
	DragSourceAdapter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void dragDropEnd(::java::awt::dnd::DragSourceDropEvent* dsde) override;
	virtual void dragEnter(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dragExit(::java::awt::dnd::DragSourceEvent* dse) override;
	virtual void dragMouseMoved(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dragOver(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dropActionChanged(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual $String* toString() override;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragSourceAdapter_h_