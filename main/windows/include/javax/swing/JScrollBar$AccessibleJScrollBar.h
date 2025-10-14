#ifndef _javax_swing_JScrollBar$AccessibleJScrollBar_h_
#define _javax_swing_JScrollBar$AccessibleJScrollBar_h_
//$ class javax.swing.JScrollBar$AccessibleJScrollBar
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleValue

#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>

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
		class JScrollBar;
	}
}

namespace javax {
	namespace swing {

class $import JScrollBar$AccessibleJScrollBar : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleValue {
	$class(JScrollBar$AccessibleJScrollBar, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleValue)
public:
	JScrollBar$AccessibleJScrollBar();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JScrollBar* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual $String* toString() override;
	::javax::swing::JScrollBar* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JScrollBar$AccessibleJScrollBar_h_