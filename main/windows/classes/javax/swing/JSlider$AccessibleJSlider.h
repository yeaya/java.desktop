#ifndef _javax_swing_JSlider$AccessibleJSlider_h_
#define _javax_swing_JSlider$AccessibleJSlider_h_
//$ class javax.swing.JSlider$AccessibleJSlider
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleValue,javax.swing.event.ChangeListener,javax.accessibility.AccessibleAction

#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace lang {
		class Number;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JSlider;
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

class $export JSlider$AccessibleJSlider : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleValue, public ::javax::swing::event::ChangeListener, public ::javax::accessibility::AccessibleAction {
	$class(JSlider$AccessibleJSlider, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleValue, ::javax::swing::event::ChangeListener, ::javax::accessibility::AccessibleAction)
public:
	JSlider$AccessibleJSlider();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JSlider* this$0);
	virtual bool doAccessibleAction(int32_t i) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual int32_t getAccessibleActionCount() override;
	virtual $String* getAccessibleActionDescription(int32_t i) override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JSlider* this$0 = nullptr;
	int32_t oldModelValue = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JSlider$AccessibleJSlider_h_