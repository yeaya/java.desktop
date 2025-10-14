#ifndef _javax_swing_text_AbstractDocument$BranchElement_h_
#define _javax_swing_text_AbstractDocument$BranchElement_h_
//$ class javax.swing.text.AbstractDocument$BranchElement
//$ extends javax.swing.text.AbstractDocument$AbstractElement

#include <java/lang/Array.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument;
			class AttributeSet;
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export AbstractDocument$BranchElement : public ::javax::swing::text::AbstractDocument$AbstractElement {
	$class(AbstractDocument$BranchElement, $NO_CLASS_INIT, ::javax::swing::text::AbstractDocument$AbstractElement)
public:
	AbstractDocument$BranchElement();
	void init$(::javax::swing::text::AbstractDocument* this$0, ::javax::swing::text::Element* parent, ::javax::swing::text::AttributeSet* a);
	virtual ::java::util::Enumeration* children() override;
	virtual bool getAllowsChildren() override;
	virtual ::javax::swing::text::Element* getElement(int32_t index) override;
	virtual int32_t getElementCount() override;
	virtual int32_t getElementIndex(int32_t offset) override;
	virtual int32_t getEndOffset() override;
	virtual $String* getName() override;
	virtual int32_t getStartOffset() override;
	virtual bool isLeaf() override;
	virtual ::javax::swing::text::Element* positionToElement(int32_t pos);
	virtual void replace(int32_t offset, int32_t length, $Array<::javax::swing::text::Element>* elems);
	virtual $String* toString() override;
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
	$Array<::javax::swing::text::AbstractDocument$AbstractElement>* children$ = nullptr;
	int32_t nchildren = 0;
	int32_t lastIndex = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$BranchElement_h_