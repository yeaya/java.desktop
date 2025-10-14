#ifndef _java_awt_CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_h_
#define _java_awt_CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_h_
//$ class java.awt.CheckboxMenuItem$AccessibleAWTCheckboxMenuItem
//$ extends java.awt.MenuItem$AccessibleAWTMenuItem

#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>

namespace java {
	namespace awt {
		class CheckboxMenuItem;
	}
}
namespace java {
	namespace lang {
		class Number;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleAction;
		class AccessibleRole;
		class AccessibleValue;
	}
}

namespace java {
	namespace awt {

class $export CheckboxMenuItem$AccessibleAWTCheckboxMenuItem : public ::java::awt::MenuItem$AccessibleAWTMenuItem {
	$class(CheckboxMenuItem$AccessibleAWTCheckboxMenuItem, $NO_CLASS_INIT, ::java::awt::MenuItem$AccessibleAWTMenuItem)
public:
	CheckboxMenuItem$AccessibleAWTCheckboxMenuItem();
	void init$(::java::awt::CheckboxMenuItem* this$0);
	virtual bool doAccessibleAction(int32_t i) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual int32_t getAccessibleActionCount() override;
	virtual $String* getAccessibleActionDescription(int32_t i) override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	::java::awt::CheckboxMenuItem* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xFFFC02F650E7318C;
};

	} // awt
} // java

#endif // _java_awt_CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_h_