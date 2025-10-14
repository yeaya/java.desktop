#ifndef _javax_swing_JMenu$AccessibleJMenu_h_
#define _javax_swing_JMenu$AccessibleJMenu_h_
//$ class javax.swing.JMenu$AccessibleJMenu
//$ extends javax.swing.JMenuItem$AccessibleJMenuItem
//$ implements javax.accessibility.AccessibleSelection

#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>

namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JMenu;
	}
}

namespace javax {
	namespace swing {

class $import JMenu$AccessibleJMenu : public ::javax::swing::JMenuItem$AccessibleJMenuItem, public ::javax::accessibility::AccessibleSelection {
	$class(JMenu$AccessibleJMenu, $NO_CLASS_INIT, ::javax::swing::JMenuItem$AccessibleJMenuItem, ::javax::accessibility::AccessibleSelection)
public:
	JMenu$AccessibleJMenu();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JMenu* this$0);
	virtual void addAccessibleSelection(int32_t i) override;
	virtual void clearAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) override;
	virtual int32_t getAccessibleSelectionCount() override;
	virtual bool isAccessibleChildSelected(int32_t i) override;
	virtual void removeAccessibleSelection(int32_t i) override;
	virtual void selectAllAccessibleSelection() override;
	virtual $String* toString() override;
	::javax::swing::JMenu* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JMenu$AccessibleJMenu_h_