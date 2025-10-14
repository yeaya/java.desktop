#ifndef _java_awt_Choice$AccessibleAWTChoice_h_
#define _java_awt_Choice$AccessibleAWTChoice_h_
//$ class java.awt.Choice$AccessibleAWTChoice
//$ extends java.awt.Component$AccessibleAWTComponent
//$ implements javax.accessibility.AccessibleAction

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <javax/accessibility/AccessibleAction.h>

namespace java {
	namespace awt {
		class Choice;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}

namespace java {
	namespace awt {

class $import Choice$AccessibleAWTChoice : public ::java::awt::Component$AccessibleAWTComponent, public ::javax::accessibility::AccessibleAction {
	$class(Choice$AccessibleAWTChoice, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent, ::javax::accessibility::AccessibleAction)
public:
	Choice$AccessibleAWTChoice();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Choice* this$0);
	virtual bool doAccessibleAction(int32_t i) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual int32_t getAccessibleActionCount() override;
	virtual $String* getAccessibleActionDescription(int32_t i) override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual $String* toString() override;
	::java::awt::Choice* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x6394DD70B3ABF48A;
};

	} // awt
} // java

#endif // _java_awt_Choice$AccessibleAWTChoice_h_