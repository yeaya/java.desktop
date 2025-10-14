#ifndef _TestObjectView$UserElement_h_
#define _TestObjectView$UserElement_h_
//$ class TestObjectView$UserElement
//$ extends javax.swing.text.Element

#include <javax/swing/text/Element.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
		}
	}
}

class $export TestObjectView$UserElement : public ::javax::swing::text::Element {
	$class(TestObjectView$UserElement, $NO_CLASS_INIT, ::javax::swing::text::Element)
public:
	TestObjectView$UserElement();
	void init$();
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual ::javax::swing::text::Document* getDocument() override;
	virtual ::javax::swing::text::Element* getElement(int32_t index) override;
	virtual int32_t getElementCount() override;
	virtual int32_t getElementIndex(int32_t offset) override;
	virtual int32_t getEndOffset() override;
	virtual $String* getName() override;
	virtual ::javax::swing::text::Element* getParentElement() override;
	virtual int32_t getStartOffset() override;
	virtual bool isLeaf() override;
};

#endif // _TestObjectView$UserElement_h_