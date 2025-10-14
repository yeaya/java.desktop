#ifndef _javax_swing_JToggleButton$AccessibleJToggleButton_h_
#define _javax_swing_JToggleButton$AccessibleJToggleButton_h_
//$ class javax.swing.JToggleButton$AccessibleJToggleButton
//$ extends javax.swing.AbstractButton$AccessibleAbstractButton
//$ implements java.awt.event.ItemListener

#include <java/awt/event/ItemListener.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>

namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
		}
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JToggleButton;
	}
}

namespace javax {
	namespace swing {

class $export JToggleButton$AccessibleJToggleButton : public ::javax::swing::AbstractButton$AccessibleAbstractButton, public ::java::awt::event::ItemListener {
	$class(JToggleButton$AccessibleJToggleButton, $NO_CLASS_INIT, ::javax::swing::AbstractButton$AccessibleAbstractButton, ::java::awt::event::ItemListener)
public:
	JToggleButton$AccessibleJToggleButton();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JToggleButton* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JToggleButton* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JToggleButton$AccessibleJToggleButton_h_