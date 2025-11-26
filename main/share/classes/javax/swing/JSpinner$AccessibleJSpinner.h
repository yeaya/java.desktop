#ifndef _javax_swing_JSpinner$AccessibleJSpinner_h_
#define _javax_swing_JSpinner$AccessibleJSpinner_h_
//$ class javax.swing.JSpinner$AccessibleJSpinner
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleValue,javax.accessibility.AccessibleAction,javax.accessibility.AccessibleEditableText,javax.swing.event.ChangeListener

#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace lang {
		class Number;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleContext;
		class AccessibleRole;
		class AccessibleText;
	}
}
namespace javax {
	namespace swing {
		class JSpinner;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace swing {

class $export JSpinner$AccessibleJSpinner : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleValue, public ::javax::accessibility::AccessibleAction, public ::javax::accessibility::AccessibleEditableText, public ::javax::swing::event::ChangeListener {
	$class(JSpinner$AccessibleJSpinner, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleValue, ::javax::accessibility::AccessibleAction, ::javax::accessibility::AccessibleEditableText, ::javax::swing::event::ChangeListener)
public:
	JSpinner$AccessibleJSpinner();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JSpinner* this$0);
	virtual void cut(int32_t startIndex, int32_t endIndex) override;
	virtual void delete$(int32_t startIndex, int32_t endIndex) override;
	virtual bool doAccessibleAction(int32_t i) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual int32_t getAccessibleActionCount() override;
	virtual $String* getAccessibleActionDescription(int32_t i) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleText* getAccessibleText() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual $String* getAfterIndex(int32_t part, int32_t index) override;
	virtual $String* getAtIndex(int32_t part, int32_t index) override;
	virtual $String* getBeforeIndex(int32_t part, int32_t index) override;
	virtual int32_t getCaretPosition() override;
	virtual int32_t getCharCount() override;
	virtual ::javax::swing::text::AttributeSet* getCharacterAttribute(int32_t i) override;
	virtual ::java::awt::Rectangle* getCharacterBounds(int32_t i) override;
	virtual ::java::lang::Number* getCurrentAccessibleValue() override;
	::javax::accessibility::AccessibleContext* getEditorAccessibleContext();
	::javax::accessibility::AccessibleEditableText* getEditorAccessibleEditableText();
	::javax::accessibility::AccessibleText* getEditorAccessibleText();
	virtual int32_t getIndexAtPoint(::java::awt::Point* p) override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual $String* getSelectedText() override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	virtual $String* getTextRange(int32_t startIndex, int32_t endIndex) override;
	virtual void insertTextAtIndex(int32_t index, $String* s) override;
	virtual void paste(int32_t startIndex) override;
	virtual void replaceText(int32_t startIndex, int32_t endIndex, $String* s) override;
	bool sameWindowAncestor(::java::awt::Component* src, ::java::awt::Component* dest);
	virtual void selectText(int32_t startIndex, int32_t endIndex) override;
	virtual void setAttributes(int32_t startIndex, int32_t endIndex, ::javax::swing::text::AttributeSet* as) override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual void setTextContents($String* s) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JSpinner* this$0 = nullptr;
	$Object* oldModelValue = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$AccessibleJSpinner_h_