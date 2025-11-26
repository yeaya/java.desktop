#ifndef _javax_swing_text_AbstractDocument$BidiElement_h_
#define _javax_swing_text_AbstractDocument$BidiElement_h_
//$ class javax.swing.text.AbstractDocument$BidiElement
//$ extends javax.swing.text.AbstractDocument$LeafElement

#include <javax/swing/text/AbstractDocument$LeafElement.h>

namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument;
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export AbstractDocument$BidiElement : public ::javax::swing::text::AbstractDocument$LeafElement {
	$class(AbstractDocument$BidiElement, $NO_CLASS_INIT, ::javax::swing::text::AbstractDocument$LeafElement)
public:
	AbstractDocument$BidiElement();
	void init$(::javax::swing::text::AbstractDocument* this$0, ::javax::swing::text::Element* parent, int32_t start, int32_t end, int32_t level);
	virtual int32_t getLevel();
	virtual $String* getName() override;
	virtual bool isLeftToRight();
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$BidiElement_h_