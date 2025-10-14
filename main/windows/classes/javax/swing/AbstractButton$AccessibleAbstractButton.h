#ifndef _javax_swing_AbstractButton$AccessibleAbstractButton_h_
#define _javax_swing_AbstractButton$AccessibleAbstractButton_h_
//$ class javax.swing.AbstractButton$AccessibleAbstractButton
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleAction,javax.accessibility.AccessibleValue,javax.accessibility.AccessibleText

#include <java/lang/Array.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace java {
	namespace awt {
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
		class AccessibleExtendedComponent;
		class AccessibleIcon;
		class AccessibleKeyBinding;
		class AccessibleRelationSet;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
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

class $export AbstractButton$AccessibleAbstractButton : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleAction, public ::javax::accessibility::AccessibleValue, public ::javax::accessibility::AccessibleText {
	$class(AbstractButton$AccessibleAbstractButton, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleAction, ::javax::accessibility::AccessibleValue, ::javax::accessibility::AccessibleText)
public:
	AbstractButton$AccessibleAbstractButton();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::AbstractButton* this$0);
	virtual bool doAccessibleAction(int32_t i) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual int32_t getAccessibleActionCount() override;
	virtual $String* getAccessibleActionDescription(int32_t i) override;
	virtual ::javax::accessibility::AccessibleExtendedComponent* getAccessibleExtendedComponent() override;
	virtual $Array<::javax::accessibility::AccessibleIcon>* getAccessibleIcon() override;
	virtual ::javax::accessibility::AccessibleKeyBinding* getAccessibleKeyBinding() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRelationSet* getAccessibleRelationSet() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
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
	virtual int32_t getIndexAtPoint(::java::awt::Point* p) override;
	virtual ::java::lang::Number* getMaximumAccessibleValue() override;
	virtual ::java::lang::Number* getMinimumAccessibleValue() override;
	virtual $String* getSelectedText() override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	$String* getText(int32_t offset, int32_t length);
	::java::awt::Rectangle* getTextRectangle();
	virtual $String* getTitledBorderText() override;
	virtual $String* getToolTipText() override;
	virtual bool setCurrentAccessibleValue(::java::lang::Number* n) override;
	virtual $String* toString() override;
	::javax::swing::AbstractButton* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_AbstractButton$AccessibleAbstractButton_h_