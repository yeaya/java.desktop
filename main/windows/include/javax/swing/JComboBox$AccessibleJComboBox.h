#ifndef _javax_swing_JComboBox$AccessibleJComboBox_h_
#define _javax_swing_JComboBox$AccessibleJComboBox_h_
//$ class javax.swing.JComboBox$AccessibleJComboBox
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleAction,javax.accessibility.AccessibleSelection

#include <javax/accessibility/AccessibleAction.h>
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
		class JComboBox;
		class JComboBox$AccessibleJComboBox$EditorAccessibleContext;
		class JList;
	}
}

namespace javax {
	namespace swing {

class $import JComboBox$AccessibleJComboBox : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleAction, public ::javax::accessibility::AccessibleSelection {
	$class(JComboBox$AccessibleJComboBox, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleAction, ::javax::accessibility::AccessibleSelection)
public:
	JComboBox$AccessibleJComboBox();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComboBox* this$0);
	virtual void addAccessibleSelection(int32_t i) override;
	virtual void clearAccessibleSelection() override;
	virtual bool doAccessibleAction(int32_t i) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual int32_t getAccessibleActionCount() override;
	virtual $String* getAccessibleActionDescription(int32_t i) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) override;
	virtual int32_t getAccessibleSelectionCount() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual bool isAccessibleChildSelected(int32_t i) override;
	virtual void removeAccessibleSelection(int32_t i) override;
	virtual void selectAllAccessibleSelection() override;
	void setEditorNameAndDescription();
	virtual $String* toString() override;
	::javax::swing::JComboBox* this$0 = nullptr;
	::javax::swing::JList* popupList = nullptr;
	::javax::accessibility::Accessible* previousSelectedAccessible = nullptr;
	::javax::swing::JComboBox$AccessibleJComboBox$EditorAccessibleContext* editorAccessibleContext = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$AccessibleJComboBox_h_