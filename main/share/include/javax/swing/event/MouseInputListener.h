#ifndef _javax_swing_event_MouseInputListener_h_
#define _javax_swing_event_MouseInputListener_h_
//$ interface javax.swing.event.MouseInputListener
//$ extends java.awt.event.MouseListener,java.awt.event.MouseMotionListener

#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>

namespace javax {
	namespace swing {
		namespace event {

class $import MouseInputListener : public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener {
	$interface(MouseInputListener, $NO_CLASS_INIT, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_MouseInputListener_h_