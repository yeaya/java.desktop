#ifndef _javax_swing_JMenuItem$MenuItemFocusListener_h_
#define _javax_swing_JMenuItem$MenuItemFocusListener_h_
//$ class javax.swing.JMenuItem$MenuItemFocusListener
//$ extends java.awt.event.FocusListener
//$ implements java.io.Serializable

#include <java/awt/event/FocusListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JMenuItem$MenuItemFocusListener : public ::java::awt::event::FocusListener, public ::java::io::Serializable {
	$class(JMenuItem$MenuItemFocusListener, $NO_CLASS_INIT, ::java::awt::event::FocusListener, ::java::io::Serializable)
public:
	JMenuItem$MenuItemFocusListener();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void focusGained(::java::awt::event::FocusEvent* event) override;
	virtual void focusLost(::java::awt::event::FocusEvent* event) override;
	virtual $String* toString() override;
};

	} // swing
} // javax

#endif // _javax_swing_JMenuItem$MenuItemFocusListener_h_