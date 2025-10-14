#ifndef _javax_swing_text_html_TextAreaDocument_h_
#define _javax_swing_text_html_TextAreaDocument_h_
//$ class javax.swing.text.html.TextAreaDocument
//$ extends javax.swing.text.PlainDocument

#include <javax/swing/text/PlainDocument.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class TextAreaDocument : public ::javax::swing::text::PlainDocument {
	$class(TextAreaDocument, $NO_CLASS_INIT, ::javax::swing::text::PlainDocument)
public:
	TextAreaDocument();
	void init$();
	virtual void reset();
	virtual void storeInitialText();
	$String* initialText = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_TextAreaDocument_h_