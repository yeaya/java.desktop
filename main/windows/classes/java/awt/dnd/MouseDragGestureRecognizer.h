#ifndef _java_awt_dnd_MouseDragGestureRecognizer_h_
#define _java_awt_dnd_MouseDragGestureRecognizer_h_
//$ class java.awt.dnd.MouseDragGestureRecognizer
//$ extends java.awt.dnd.DragGestureRecognizer
//$ implements java.awt.event.MouseListener,java.awt.event.MouseMotionListener

#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureListener;
			class DragSource;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $export MouseDragGestureRecognizer : public ::java::awt::dnd::DragGestureRecognizer, public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener {
	$class(MouseDragGestureRecognizer, $NO_CLASS_INIT, ::java::awt::dnd::DragGestureRecognizer, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener)
public:
	MouseDragGestureRecognizer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t act, ::java::awt::dnd::DragGestureListener* dgl);
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t act);
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c);
	void init$(::java::awt::dnd::DragSource* ds);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void registerListeners() override;
	virtual $String* toString() override;
	virtual void unregisterListeners() override;
	static const int64_t serialVersionUID = (int64_t)0x56523B65E5A003A0;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_MouseDragGestureRecognizer_h_