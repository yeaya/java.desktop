#ifndef _javax_swing_text_html_HTMLDocument$FixedLengthDocument_h_
#define _javax_swing_text_html_HTMLDocument$FixedLengthDocument_h_
//$ class javax.swing.text.html.HTMLDocument$FixedLengthDocument
//$ extends javax.swing.text.PlainDocument

#include <javax/swing/text/PlainDocument.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class HTMLDocument$FixedLengthDocument : public ::javax::swing::text::PlainDocument {
	$class(HTMLDocument$FixedLengthDocument, $NO_CLASS_INIT, ::javax::swing::text::PlainDocument)
public:
	HTMLDocument$FixedLengthDocument();
	void init$(int32_t maxLength);
	virtual void insertString(int32_t offset, $String* str, ::javax::swing::text::AttributeSet* a) override;
	int32_t maxLength = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$FixedLengthDocument_h_