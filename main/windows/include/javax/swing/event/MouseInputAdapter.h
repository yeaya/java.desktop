#ifndef _javax_swing_event_MouseInputAdapter_h_
#define _javax_swing_event_MouseInputAdapter_h_
//$ class javax.swing.event.MouseInputAdapter
//$ extends java.awt.event.MouseAdapter
//$ implements javax.swing.event.MouseInputListener

#include <java/awt/event/MouseAdapter.h>
#include <javax/swing/event/MouseInputListener.h>

namespace javax {
	namespace swing {
		namespace event {

class $import MouseInputAdapter : public ::java::awt::event::MouseAdapter, public ::javax::swing::event::MouseInputListener {
	$class(MouseInputAdapter, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter, ::javax::swing::event::MouseInputListener)
public:
	MouseInputAdapter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	virtual $String* toString() override;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_MouseInputAdapter_h_