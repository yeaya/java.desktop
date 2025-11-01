#ifndef _javax_swing_TransferHandler$SwingDropTarget_h_
#define _javax_swing_TransferHandler$SwingDropTarget_h_
//$ class javax.swing.TransferHandler$SwingDropTarget
//$ extends java.awt.dnd.DropTarget
//$ implements javax.swing.plaf.UIResource

#include <java/awt/dnd/DropTarget.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetDragEvent;
			class DropTargetDropEvent;
			class DropTargetEvent;
			class DropTargetListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
		}
	}
}

namespace javax {
	namespace swing {

class $export TransferHandler$SwingDropTarget : public ::java::awt::dnd::DropTarget, public ::javax::swing::plaf::UIResource {
	$class(TransferHandler$SwingDropTarget, $NO_CLASS_INIT, ::java::awt::dnd::DropTarget, ::javax::swing::plaf::UIResource)
public:
	TransferHandler$SwingDropTarget();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component* c);
	virtual void addDropTargetListener(::java::awt::dnd::DropTargetListener* dtl) override;
	virtual void dragEnter(::java::awt::dnd::DropTargetDragEvent* e) override;
	virtual void dragExit(::java::awt::dnd::DropTargetEvent* e) override;
	virtual void dragOver(::java::awt::dnd::DropTargetDragEvent* e) override;
	virtual void drop(::java::awt::dnd::DropTargetDropEvent* e) override;
	virtual void dropActionChanged(::java::awt::dnd::DropTargetDragEvent* e) override;
	virtual void removeDropTargetListener(::java::awt::dnd::DropTargetListener* dtl) override;
	virtual $String* toString() override;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$SwingDropTarget_h_