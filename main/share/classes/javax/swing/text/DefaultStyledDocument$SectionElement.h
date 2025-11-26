#ifndef _javax_swing_text_DefaultStyledDocument$SectionElement_h_
#define _javax_swing_text_DefaultStyledDocument$SectionElement_h_
//$ class javax.swing.text.DefaultStyledDocument$SectionElement
//$ extends javax.swing.text.AbstractDocument$BranchElement

#include <javax/swing/text/AbstractDocument$BranchElement.h>

namespace javax {
	namespace swing {
		namespace text {
			class DefaultStyledDocument;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultStyledDocument$SectionElement : public ::javax::swing::text::AbstractDocument$BranchElement {
	$class(DefaultStyledDocument$SectionElement, $NO_CLASS_INIT, ::javax::swing::text::AbstractDocument$BranchElement)
public:
	DefaultStyledDocument$SectionElement();
	void init$(::javax::swing::text::DefaultStyledDocument* this$0);
	virtual $String* getName() override;
	::javax::swing::text::DefaultStyledDocument* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$SectionElement_h_