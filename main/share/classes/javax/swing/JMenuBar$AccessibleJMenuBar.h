#ifndef _javax_swing_JMenuBar$AccessibleJMenuBar_h_
#define _javax_swing_JMenuBar$AccessibleJMenuBar_h_
//$ class javax.swing.JMenuBar$AccessibleJMenuBar
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleSelection

#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JMenuBar;
	}
}

namespace javax {
	namespace swing {

class $export JMenuBar$AccessibleJMenuBar : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleSelection {
	$class(JMenuBar$AccessibleJMenuBar, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleSelection)
public:
	JMenuBar$AccessibleJMenuBar();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JMenuBar* this$0);
	virtual void addAccessibleSelection(int32_t i) override;
	virtual void clearAccessibleSelection() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) override;
	virtual int32_t getAccessibleSelectionCount() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual bool isAccessibleChildSelected(int32_t i) override;
	virtual void removeAccessibleSelection(int32_t i) override;
	virtual void selectAllAccessibleSelection() override;
	virtual $String* toString() override;
	::javax::swing::JMenuBar* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JMenuBar$AccessibleJMenuBar_h_