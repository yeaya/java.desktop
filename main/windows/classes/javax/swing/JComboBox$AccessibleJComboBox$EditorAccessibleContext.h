#ifndef _javax_swing_JComboBox$AccessibleJComboBox$EditorAccessibleContext_h_
#define _javax_swing_JComboBox$AccessibleJComboBox$EditorAccessibleContext_h_
//$ class javax.swing.JComboBox$AccessibleJComboBox$EditorAccessibleContext
//$ extends javax.accessibility.AccessibleContext

#include <java/lang/Array.h>
#include <javax/accessibility/AccessibleContext.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleAction;
		class AccessibleComponent;
		class AccessibleEditableText;
		class AccessibleIcon;
		class AccessibleRelationSet;
		class AccessibleRole;
		class AccessibleSelection;
		class AccessibleStateSet;
		class AccessibleTable;
		class AccessibleText;
		class AccessibleValue;
	}
}
namespace javax {
	namespace swing {
		class JComboBox$AccessibleJComboBox;
	}
}

namespace javax {
	namespace swing {

class JComboBox$AccessibleJComboBox$EditorAccessibleContext : public ::javax::accessibility::AccessibleContext {
	$class(JComboBox$AccessibleJComboBox$EditorAccessibleContext, $NO_CLASS_INIT, ::javax::accessibility::AccessibleContext)
public:
	JComboBox$AccessibleJComboBox$EditorAccessibleContext();
	void init$(::javax::swing::JComboBox$AccessibleJComboBox* this$1);
	void init$(::javax::swing::JComboBox$AccessibleJComboBox* this$1, ::javax::accessibility::Accessible* a);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
	virtual $String* getAccessibleDescription() override;
	virtual ::javax::accessibility::AccessibleEditableText* getAccessibleEditableText() override;
	virtual $Array<::javax::accessibility::AccessibleIcon>* getAccessibleIcon() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::Accessible* getAccessibleParent() override;
	virtual ::javax::accessibility::AccessibleRelationSet* getAccessibleRelationSet() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleTable* getAccessibleTable() override;
	virtual ::javax::accessibility::AccessibleText* getAccessibleText() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void setAccessibleDescription($String* s) override;
	virtual void setAccessibleName($String* s) override;
	virtual void setAccessibleParent(::javax::accessibility::Accessible* a) override;
	::javax::swing::JComboBox$AccessibleJComboBox* this$1 = nullptr;
	::javax::accessibility::AccessibleContext* ac = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$AccessibleJComboBox$EditorAccessibleContext_h_