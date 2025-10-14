#ifndef _javax_swing_text_JTextComponent$AccessibleJTextComponent_h_
#define _javax_swing_text_JTextComponent$AccessibleJTextComponent_h_
//$ class javax.swing.text.JTextComponent$AccessibleJTextComponent
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.swing.event.CaretListener,javax.swing.event.DocumentListener,javax.accessibility.AccessibleAction,javax.accessibility.AccessibleEditableText,javax.accessibility.AccessibleExtendedText

#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleExtendedText.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/event/CaretListener.h>
#include <javax/swing/event/DocumentListener.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
		class AccessibleStateSet;
		class AccessibleText;
		class AccessibleTextSequence;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CaretEvent;
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class JTextComponent;
			class JTextComponent$AccessibleJTextComponent$IndexedSegment;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import JTextComponent$AccessibleJTextComponent : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::swing::event::CaretListener, public ::javax::swing::event::DocumentListener, public ::javax::accessibility::AccessibleAction, public ::javax::accessibility::AccessibleEditableText, public ::javax::accessibility::AccessibleExtendedText {
	$class(JTextComponent$AccessibleJTextComponent, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::swing::event::CaretListener, ::javax::swing::event::DocumentListener, ::javax::accessibility::AccessibleAction, ::javax::accessibility::AccessibleEditableText, ::javax::accessibility::AccessibleExtendedText)
public:
	JTextComponent$AccessibleJTextComponent();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::JTextComponent* this$0);
	virtual void caretUpdate(::javax::swing::event::CaretEvent* e) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void cut(int32_t startIndex, int32_t endIndex) override;
	virtual void delete$(int32_t startIndex, int32_t endIndex) override;
	virtual bool doAccessibleAction(int32_t i) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual int32_t getAccessibleActionCount() override;
	virtual $String* getAccessibleActionDescription(int32_t i) override;
	virtual ::javax::accessibility::AccessibleEditableText* getAccessibleEditableText() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleText* getAccessibleText() override;
	virtual $String* getAfterIndex(int32_t part, int32_t index) override;
	virtual $String* getAtIndex(int32_t part, int32_t index) override;
	$String* getAtIndex(int32_t part, int32_t index, int32_t direction);
	virtual $String* getBeforeIndex(int32_t part, int32_t index) override;
	virtual int32_t getCaretPosition() override;
	virtual int32_t getCharCount() override;
	virtual ::javax::swing::text::AttributeSet* getCharacterAttribute(int32_t i) override;
	virtual ::java::awt::Rectangle* getCharacterBounds(int32_t i) override;
	virtual int32_t getIndexAtPoint(::java::awt::Point* p) override;
	::javax::swing::text::Element* getParagraphElement(int32_t index);
	::javax::swing::text::JTextComponent$AccessibleJTextComponent$IndexedSegment* getParagraphElementText(int32_t index);
	virtual ::java::awt::Rectangle* getRootEditorRect();
	int32_t getRunEdge(int32_t index, int32_t direction);
	::javax::swing::text::JTextComponent$AccessibleJTextComponent$IndexedSegment* getSegmentAt(int32_t part, int32_t index);
	virtual $String* getSelectedText() override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	::javax::accessibility::AccessibleTextSequence* getSequenceAtIndex(int32_t part, int32_t index, int32_t direction);
	virtual ::java::awt::Rectangle* getTextBounds(int32_t startIndex, int32_t endIndex) override;
	virtual $String* getTextRange(int32_t startIndex, int32_t endIndex) override;
	virtual ::javax::accessibility::AccessibleTextSequence* getTextSequenceAfter(int32_t part, int32_t index) override;
	virtual ::javax::accessibility::AccessibleTextSequence* getTextSequenceAt(int32_t part, int32_t index) override;
	virtual ::javax::accessibility::AccessibleTextSequence* getTextSequenceBefore(int32_t part, int32_t index) override;
	virtual void insertTextAtIndex(int32_t index, $String* s) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void paste(int32_t startIndex) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void replaceText(int32_t startIndex, int32_t endIndex, $String* s) override;
	virtual void selectText(int32_t startIndex, int32_t endIndex) override;
	virtual void setAttributes(int32_t startIndex, int32_t endIndex, ::javax::swing::text::AttributeSet* as) override;
	virtual void setTextContents($String* s) override;
	virtual $String* toString() override;
	::javax::swing::text::JTextComponent* this$0 = nullptr;
	int32_t caretPos = 0;
	::java::awt::Point* oldLocationOnScreen = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$AccessibleJTextComponent_h_