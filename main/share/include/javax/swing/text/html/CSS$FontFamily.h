#ifndef _javax_swing_text_html_CSS$FontFamily_h_
#define _javax_swing_text_html_CSS$FontFamily_h_
//$ class javax.swing.text.html.CSS$FontFamily
//$ extends javax.swing.text.html.CSS$CssValue

#include <javax/swing/text/html/CSS$CssValue.h>

namespace javax {
	namespace swing {
		namespace text {
			class StyleConstants;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS$FontFamily : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$FontFamily, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$FontFamily();
	void init$();
	virtual $Object* fromStyleConstants(::javax::swing::text::StyleConstants* key, Object$* value) override;
	virtual $String* getValue();
	virtual $Object* parseCssValue($String* value) override;
	virtual $Object* parseHtmlValue($String* value) override;
	void setFontName(::javax::swing::text::html::CSS$FontFamily* ff, $String* fontName);
	virtual $Object* toStyleConstants(::javax::swing::text::StyleConstants* key, ::javax::swing::text::View* v) override;
	$String* family = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$FontFamily_h_