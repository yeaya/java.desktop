#ifndef _javax_swing_text_ElementIterator_h_
#define _javax_swing_text_ElementIterator_h_
//$ class javax.swing.text.ElementIterator
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace util {
		class Stack;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import ElementIterator : public ::java::lang::Cloneable {
	$class(ElementIterator, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	ElementIterator();
	void init$(::javax::swing::text::Document* document);
	void init$(::javax::swing::text::Element* root);
	virtual $Object* clone() override;
	virtual ::javax::swing::text::Element* current();
	virtual int32_t depth();
	void dumpTree();
	virtual ::javax::swing::text::Element* first();
	::javax::swing::text::Element* getDeepestLeaf(::javax::swing::text::Element* parent);
	virtual ::javax::swing::text::Element* next();
	virtual ::javax::swing::text::Element* previous();
	::javax::swing::text::Element* root = nullptr;
	::java::util::Stack* elementStack = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ElementIterator_h_