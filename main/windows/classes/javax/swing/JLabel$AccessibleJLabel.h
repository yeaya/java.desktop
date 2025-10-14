#ifndef _javax_swing_JLabel$AccessibleJLabel_h_
#define _javax_swing_JLabel$AccessibleJLabel_h_
//$ class javax.swing.JLabel$AccessibleJLabel
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleText

#include <java/lang/Array.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleExtendedComponent;
		class AccessibleIcon;
		class AccessibleKeyBinding;
		class AccessibleRelationSet;
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JLabel;
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

class $export JLabel$AccessibleJLabel : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleText {
	$class(JLabel$AccessibleJLabel, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleText)
public:
	JLabel$AccessibleJLabel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JLabel* this$0);
	virtual ::javax::accessibility::AccessibleExtendedComponent* getAccessibleExtendedComponent() override;
	virtual $Array<::javax::accessibility::AccessibleIcon>* getAccessibleIcon() override;
	virtual ::javax::accessibility::AccessibleKeyBinding* getAccessibleKeyBinding() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRelationSet* getAccessibleRelationSet() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleText* getAccessibleText() override;
	virtual $String* getAfterIndex(int32_t part, int32_t index) override;
	virtual $String* getAtIndex(int32_t part, int32_t index) override;
	virtual $String* getBeforeIndex(int32_t part, int32_t index) override;
	virtual int32_t getCaretPosition() override;
	virtual int32_t getCharCount() override;
	virtual ::javax::swing::text::AttributeSet* getCharacterAttribute(int32_t i) override;
	virtual ::java::awt::Rectangle* getCharacterBounds(int32_t i) override;
	virtual int32_t getIndexAtPoint(::java::awt::Point* p) override;
	virtual $String* getSelectedText() override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	$String* getText(int32_t offset, int32_t length);
	::java::awt::Rectangle* getTextRectangle();
	virtual $String* getTitledBorderText() override;
	virtual $String* getToolTipText() override;
	virtual $String* toString() override;
	::javax::swing::JLabel* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JLabel$AccessibleJLabel_h_