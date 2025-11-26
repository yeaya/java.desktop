#ifndef _javax_swing_JProgressBar$AccessibleJProgressBar_h_
#define _javax_swing_JProgressBar$AccessibleJProgressBar_h_
//$ class javax.swing.JProgressBar$AccessibleJProgressBar
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
		class JProgressBar;
	}
}

namespace javax {
	namespace swing {

class $export JProgressBar$AccessibleJProgressBar : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleValue {
	$class(JProgressBar$AccessibleJProgressBar, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleValue)
public:
	JProgressBar$AccessibleJProgressBar();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JProgressBar* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual $String* toString() override;
	::javax::swing::JProgressBar* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JProgressBar$AccessibleJProgressBar_h_