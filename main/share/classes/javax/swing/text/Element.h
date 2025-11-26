#ifndef _javax_swing_text_Element_h_
#define _javax_swing_text_Element_h_
//$ interface javax.swing.text.Element
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export Element : public ::java::lang::Object {
	$interface(Element, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::text::AttributeSet* getAttributes() {return nullptr;}
	virtual ::javax::swing::text::Document* getDocument() {return nullptr;}
	virtual ::javax::swing::text::Element* getElement(int32_t index) {return nullptr;}
	virtual int32_t getElementCount() {return 0;}
	virtual int32_t getElementIndex(int32_t offset) {return 0;}
	virtual int32_t getEndOffset() {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual ::javax::swing::text::Element* getParentElement() {return nullptr;}
	virtual int32_t getStartOffset() {return 0;}
	virtual bool isLeaf() {return false;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Element_h_