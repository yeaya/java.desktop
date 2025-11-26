#ifndef _java_awt_MenuItem$AccessibleAWTMenuItem_h_
#define _java_awt_MenuItem$AccessibleAWTMenuItem_h_
//$ class java.awt.MenuItem$AccessibleAWTMenuItem
//$ extends java.awt.MenuComponent$AccessibleAWTMenuComponent
//$ implements javax.accessibility.AccessibleAction,javax.accessibility.AccessibleValue

#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleValue.h>

namespace java {
	namespace awt {
		class MenuItem;
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

class $export MenuItem$AccessibleAWTMenuItem : public ::java::awt::MenuComponent$AccessibleAWTMenuComponent, public ::javax::accessibility::AccessibleAction, public ::javax::accessibility::AccessibleValue {
	$class(MenuItem$AccessibleAWTMenuItem, $NO_CLASS_INIT, ::java::awt::MenuComponent$AccessibleAWTMenuComponent, ::javax::accessibility::AccessibleAction, ::javax::accessibility::AccessibleValue)
public:
	MenuItem$AccessibleAWTMenuItem();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::MenuItem* this$0);
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
	::java::awt::MenuItem* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xFCFA0C8D11C58EFF;
};

	} // awt
} // java

#endif // _java_awt_MenuItem$AccessibleAWTMenuItem_h_