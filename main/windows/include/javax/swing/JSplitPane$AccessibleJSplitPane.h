#ifndef _javax_swing_JSplitPane$AccessibleJSplitPane_h_
#define _javax_swing_JSplitPane$AccessibleJSplitPane_h_
//$ class javax.swing.JSplitPane$AccessibleJSplitPane
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
		class JSplitPane;
	}
}

namespace javax {
	namespace swing {

class $import JSplitPane$AccessibleJSplitPane : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleValue {
	$class(JSplitPane$AccessibleJSplitPane, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleValue)
public:
	JSplitPane$AccessibleJSplitPane();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JSplitPane* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual $String* toString() override;
	::javax::swing::JSplitPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSplitPane$AccessibleJSplitPane_h_