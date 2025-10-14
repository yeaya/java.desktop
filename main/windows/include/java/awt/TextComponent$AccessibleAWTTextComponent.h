#ifndef _java_awt_TextComponent$AccessibleAWTTextComponent_h_
#define _java_awt_TextComponent$AccessibleAWTTextComponent_h_
//$ class java.awt.TextComponent$AccessibleAWTTextComponent
//$ extends java.awt.Component$AccessibleAWTComponent
//$ implements javax.accessibility.AccessibleText,java.awt.event.TextListener

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/event/TextListener.h>
#include <javax/accessibility/AccessibleText.h>

#pragma push_macro("NEXT")
#undef NEXT
#pragma push_macro("PREVIOUS")
#undef PREVIOUS

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
		class TextComponent;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class TextEvent;
		}
	}
}
namespace java {
	namespace text {
		class BreakIterator;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace java {
	namespace awt {

class $import TextComponent$AccessibleAWTTextComponent : public ::java::awt::Component$AccessibleAWTComponent, public ::javax::accessibility::AccessibleText, public ::java::awt::event::TextListener {
	$class(TextComponent$AccessibleAWTTextComponent, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent, ::javax::accessibility::AccessibleText, ::java::awt::event::TextListener)
public:
	TextComponent$AccessibleAWTTextComponent();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::TextComponent* this$0);
	int32_t findWordLimit(int32_t index, ::java::text::BreakIterator* words, bool direction, $String* s);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
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
	virtual void textValueChanged(::java::awt::event::TextEvent* textEvent) override;
	virtual $String* toString() override;
	::java::awt::TextComponent* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x32657080E8B29DF3;
	static const bool NEXT = true;
	static const bool PREVIOUS = false;
};

	} // awt
} // java

#pragma pop_macro("NEXT")
#pragma pop_macro("PREVIOUS")

#endif // _java_awt_TextComponent$AccessibleAWTTextComponent_h_