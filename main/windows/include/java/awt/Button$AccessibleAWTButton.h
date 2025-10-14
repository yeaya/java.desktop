#ifndef _java_awt_Button$AccessibleAWTButton_h_
#define _java_awt_Button$AccessibleAWTButton_h_
//$ class java.awt.Button$AccessibleAWTButton
//$ extends java.awt.Component$AccessibleAWTComponent
//$ implements javax.accessibility.AccessibleAction,javax.accessibility.AccessibleValue

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleValue.h>

namespace java {
	namespace awt {
		class Button;
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
	}
}

namespace java {
	namespace awt {

class $import Button$AccessibleAWTButton : public ::java::awt::Component$AccessibleAWTComponent, public ::javax::accessibility::AccessibleAction, public ::javax::accessibility::AccessibleValue {
	$class(Button$AccessibleAWTButton, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent, ::javax::accessibility::AccessibleAction, ::javax::accessibility::AccessibleValue)
public:
	Button$AccessibleAWTButton();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Button* this$0);
	virtual bool doAccessibleAction(int32_t i) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual int32_t getAccessibleActionCount() override;
	virtual $String* getAccessibleActionDescription(int32_t i) override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual $String* toString() override;
	::java::awt::Button* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xADAC93E8FE65A032;
};

	} // awt
} // java

#endif // _java_awt_Button$AccessibleAWTButton_h_