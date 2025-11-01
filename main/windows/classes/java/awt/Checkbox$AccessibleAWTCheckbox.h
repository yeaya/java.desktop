#ifndef _java_awt_Checkbox$AccessibleAWTCheckbox_h_
#define _java_awt_Checkbox$AccessibleAWTCheckbox_h_
//$ class java.awt.Checkbox$AccessibleAWTCheckbox
//$ extends java.awt.Component$AccessibleAWTComponent
//$ implements java.awt.event.ItemListener,javax.accessibility.AccessibleAction,javax.accessibility.AccessibleValue

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/event/ItemListener.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleValue.h>

namespace java {
	namespace awt {
		class Checkbox;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
		}
	}
}
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

namespace java {
	namespace awt {

class $export Checkbox$AccessibleAWTCheckbox : public ::java::awt::Component$AccessibleAWTComponent, public ::java::awt::event::ItemListener, public ::javax::accessibility::AccessibleAction, public ::javax::accessibility::AccessibleValue {
	$class(Checkbox$AccessibleAWTCheckbox, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent, ::java::awt::event::ItemListener, ::javax::accessibility::AccessibleAction, ::javax::accessibility::AccessibleValue)
public:
	Checkbox$AccessibleAWTCheckbox();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Checkbox* this$0);
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
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual $String* toString() override;
	::java::awt::Checkbox* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x6D60FE8DDCB04FBB;
};

	} // awt
} // java

#endif // _java_awt_Checkbox$AccessibleAWTCheckbox_h_