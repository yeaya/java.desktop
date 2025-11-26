#ifndef _StubLeafElement_h_
#define _StubLeafElement_h_
//$ class StubLeafElement
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

class StubLeafElement : public ::javax::swing::text::Element {
	$class(StubLeafElement, $NO_CLASS_INIT, ::javax::swing::text::Element)
public:
	StubLeafElement();
	void init$($String* context, ::javax::swing::text::Element* parent, int32_t position);
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
	::javax::swing::text::Document* document = nullptr;
	$String* context = nullptr;
	::javax::swing::text::Element* parent = nullptr;
	int32_t position = 0;
};

#endif // _StubLeafElement_h_