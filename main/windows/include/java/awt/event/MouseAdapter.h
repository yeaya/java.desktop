#ifndef _java_awt_event_MouseAdapter_h_
#define _java_awt_event_MouseAdapter_h_
//$ class java.awt.event.MouseAdapter
//$ extends java.awt.event.MouseListener
//$ implements java.awt.event.MouseWheelListener,java.awt.event.MouseMotionListener

#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
			class MouseWheelEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import MouseAdapter : public ::java::awt::event::MouseListener, public ::java::awt::event::MouseWheelListener, public ::java::awt::event::MouseMotionListener {
	$class(MouseAdapter, $NO_CLASS_INIT, ::java::awt::event::MouseListener, ::java::awt::event::MouseWheelListener, ::java::awt::event::MouseMotionListener)
public:
	MouseAdapter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void mouseWheelMoved(::java::awt::event::MouseWheelEvent* e) override;
	virtual $String* toString() override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_MouseAdapter_h_