#ifndef _javax_swing_TransferHandler$DropHandler_h_
#define _javax_swing_TransferHandler$DropHandler_h_
//$ class javax.swing.TransferHandler$DropHandler
//$ extends java.awt.dnd.DropTargetListener
//$ implements java.io.Serializable,java.awt.event.ActionListener

#include <java/awt/dnd/DropTargetListener.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>

#pragma push_macro("AUTOSCROLL_INSET")
#undef AUTOSCROLL_INSET

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
	}
}
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
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class Timer;
		class TransferHandler$TransferSupport;
	}
}

namespace javax {
	namespace swing {

class TransferHandler$DropHandler : public ::java::awt::dnd::DropTargetListener, public ::java::io::Serializable, public ::java::awt::event::ActionListener {
	$class(TransferHandler$DropHandler, $NO_CLASS_INIT, ::java::awt::dnd::DropTargetListener, ::java::io::Serializable, ::java::awt::event::ActionListener)
public:
	TransferHandler$DropHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void autoscroll(::javax::swing::JComponent* c, ::java::awt::Point* pos);
	void cleanup(bool forDrop);
	virtual void dragEnter(::java::awt::dnd::DropTargetDragEvent* e) override;
	virtual void dragExit(::java::awt::dnd::DropTargetEvent* e) override;
	virtual void dragOver(::java::awt::dnd::DropTargetDragEvent* e) override;
	virtual void drop(::java::awt::dnd::DropTargetDropEvent* e) override;
	virtual void dropActionChanged(::java::awt::dnd::DropTargetDragEvent* e) override;
	void handleDrag(::java::awt::dnd::DropTargetDragEvent* e);
	void initPropertiesIfNecessary();
	void setComponentDropLocation(::javax::swing::TransferHandler$TransferSupport* support, bool forDrop);
	virtual $String* toString() override;
	void updateAutoscrollRegion(::javax::swing::JComponent* c);
	::javax::swing::Timer* timer = nullptr;
	::java::awt::Point* lastPosition = nullptr;
	::java::awt::Rectangle* outer = nullptr;
	::java::awt::Rectangle* inner = nullptr;
	int32_t hysteresis = 0;
	::java::awt::Component* component = nullptr;
	$Object* state = nullptr;
	::javax::swing::TransferHandler$TransferSupport* support = nullptr;
	static const int32_t AUTOSCROLL_INSET = 10;
};

	} // swing
} // javax

#pragma pop_macro("AUTOSCROLL_INSET")

#endif // _javax_swing_TransferHandler$DropHandler_h_