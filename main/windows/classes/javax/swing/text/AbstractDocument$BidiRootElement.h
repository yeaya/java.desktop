#ifndef _javax_swing_text_AbstractDocument$BidiRootElement_h_
#define _javax_swing_text_AbstractDocument$BidiRootElement_h_
//$ class javax.swing.text.AbstractDocument$BidiRootElement
//$ extends javax.swing.text.AbstractDocument$BranchElement

#include <javax/swing/text/AbstractDocument$BranchElement.h>

namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export AbstractDocument$BidiRootElement : public ::javax::swing::text::AbstractDocument$BranchElement {
	$class(AbstractDocument$BidiRootElement, $NO_CLASS_INIT, ::javax::swing::text::AbstractDocument$BranchElement)
public:
	AbstractDocument$BidiRootElement();
	void init$(::javax::swing::text::AbstractDocument* this$0);
	virtual $String* getName() override;
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$BidiRootElement_h_