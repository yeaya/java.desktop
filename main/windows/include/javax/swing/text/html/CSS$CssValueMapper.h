#ifndef _javax_swing_text_html_CSS$CssValueMapper_h_
#define _javax_swing_text_html_CSS$CssValueMapper_h_
//$ class javax.swing.text.html.CSS$CssValueMapper
//$ extends javax.swing.text.html.CSS$CssValue

#include <javax/swing/text/html/CSS$CssValue.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS$CssValueMapper : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$CssValueMapper, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$CssValueMapper();
	void init$();
	virtual $Object* parseCssValue($String* value) override;
	virtual $Object* parseHtmlValue($String* value) override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$CssValueMapper_h_