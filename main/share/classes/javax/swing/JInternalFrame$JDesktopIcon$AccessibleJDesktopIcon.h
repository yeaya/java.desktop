#ifndef _javax_swing_JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_h_
#define _javax_swing_JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_h_
//$ class javax.swing.JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon
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
		class JInternalFrame$JDesktopIcon;
	}
}

namespace javax {
	namespace swing {

class $export JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleValue {
	$class(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleValue)
public:
	JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JInternalFrame$JDesktopIcon* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual $String* toString() override;
	::javax::swing::JInternalFrame$JDesktopIcon* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_h_