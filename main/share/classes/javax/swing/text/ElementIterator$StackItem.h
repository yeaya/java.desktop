#ifndef _javax_swing_text_ElementIterator$StackItem_h_
#define _javax_swing_text_ElementIterator$StackItem_h_
//$ class javax.swing.text.ElementIterator$StackItem
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class ElementIterator;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class ElementIterator$StackItem : public ::java::lang::Cloneable {
	$class(ElementIterator$StackItem, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	ElementIterator$StackItem();
	void init$(::javax::swing::text::ElementIterator* this$0, ::javax::swing::text::Element* elem);
	virtual $Object* clone() override;
	::javax::swing::text::Element* getElement();
	int32_t getIndex();
	void incrementIndex();
	::javax::swing::text::ElementIterator* this$0 = nullptr;
	::javax::swing::text::Element* item = nullptr;
	int32_t childIndex = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ElementIterator$StackItem_h_