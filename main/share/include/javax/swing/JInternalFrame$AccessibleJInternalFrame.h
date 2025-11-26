#ifndef _javax_swing_JInternalFrame$AccessibleJInternalFrame_h_
#define _javax_swing_JInternalFrame$AccessibleJInternalFrame_h_
//$ class javax.swing.JInternalFrame$AccessibleJInternalFrame
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
	}
}
namespace javax {
	namespace swing {
		class JInternalFrame;
	}
}

namespace javax {
	namespace swing {

class $import JInternalFrame$AccessibleJInternalFrame : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleValue {
	$class(JInternalFrame$AccessibleJInternalFrame, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleValue)
public:
	JInternalFrame$AccessibleJInternalFrame();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JInternalFrame* this$0);
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual $String* toString() override;
	::javax::swing::JInternalFrame* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JInternalFrame$AccessibleJInternalFrame_h_