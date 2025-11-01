#ifndef _javax_swing_TransferHandler$DragHandler_h_
#define _javax_swing_TransferHandler$DragHandler_h_
//$ class javax.swing.TransferHandler$DragHandler
//$ extends java.awt.dnd.DragGestureListener
//$ implements java.awt.dnd.DragSourceListener

#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragSourceListener.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureEvent;
			class DragSourceDragEvent;
			class DragSourceDropEvent;
			class DragSourceEvent;
		}
	}
}

namespace javax {
	namespace swing {

class TransferHandler$DragHandler : public ::java::awt::dnd::DragGestureListener, public ::java::awt::dnd::DragSourceListener {
	$class(TransferHandler$DragHandler, $NO_CLASS_INIT, ::java::awt::dnd::DragGestureListener, ::java::awt::dnd::DragSourceListener)
public:
	TransferHandler$DragHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void dragDropEnd(::java::awt::dnd::DragSourceDropEvent* dsde) override;
	virtual void dragEnter(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dragExit(::java::awt::dnd::DragSourceEvent* dsde) override;
	virtual void dragGestureRecognized(::java::awt::dnd::DragGestureEvent* dge) override;
	virtual void dragOver(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dropActionChanged(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual $String* toString() override;
	bool scrolls = false;
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$DragHandler_h_