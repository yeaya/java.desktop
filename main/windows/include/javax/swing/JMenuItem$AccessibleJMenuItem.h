#ifndef _javax_swing_JMenuItem$AccessibleJMenuItem_h_
#define _javax_swing_JMenuItem$AccessibleJMenuItem_h_
//$ class javax.swing.JMenuItem$AccessibleJMenuItem
//$ extends javax.swing.AbstractButton$AccessibleAbstractButton
//$ implements javax.swing.event.ChangeListener

#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JMenuItem;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {

class $import JMenuItem$AccessibleJMenuItem : public ::javax::swing::AbstractButton$AccessibleAbstractButton, public ::javax::swing::event::ChangeListener {
	$class(JMenuItem$AccessibleJMenuItem, $NO_CLASS_INIT, ::javax::swing::AbstractButton$AccessibleAbstractButton, ::javax::swing::event::ChangeListener)
public:
	JMenuItem$AccessibleJMenuItem();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JMenuItem* this$0);
	void fireAccessibilityFocusedEvent(::javax::swing::JMenuItem* toCheck);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JMenuItem* this$0 = nullptr;
	bool isArmed = false;
	bool hasFocus = false;
	bool isPressed = false;
	bool isSelected = false;
};

	} // swing
} // javax

#endif // _javax_swing_JMenuItem$AccessibleJMenuItem_h_