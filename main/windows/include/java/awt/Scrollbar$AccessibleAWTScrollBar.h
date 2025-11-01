#ifndef _java_awt_Scrollbar$AccessibleAWTScrollBar_h_
#define _java_awt_Scrollbar$AccessibleAWTScrollBar_h_
//$ class java.awt.Scrollbar$AccessibleAWTScrollBar
//$ extends java.awt.Component$AccessibleAWTComponent
//$ implements javax.accessibility.AccessibleValue

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <javax/accessibility/AccessibleValue.h>

namespace java {
	namespace awt {
		class Scrollbar;
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

class $import Scrollbar$AccessibleAWTScrollBar : public ::java::awt::Component$AccessibleAWTComponent, public ::javax::accessibility::AccessibleValue {
	$class(Scrollbar$AccessibleAWTScrollBar, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent, ::javax::accessibility::AccessibleValue)
public:
	Scrollbar$AccessibleAWTScrollBar();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Scrollbar* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual $String* toString() override;
	::java::awt::Scrollbar* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xFB38AB1422B77971;
};

	} // awt
} // java

#endif // _java_awt_Scrollbar$AccessibleAWTScrollBar_h_