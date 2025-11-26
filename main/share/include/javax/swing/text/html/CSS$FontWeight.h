#ifndef _javax_swing_text_html_CSS$FontWeight_h_
#define _javax_swing_text_html_CSS$FontWeight_h_
//$ class javax.swing.text.html.CSS$FontWeight
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

class $import CSS$FontWeight : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$FontWeight, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$FontWeight();
	void init$();
	virtual $Object* fromStyleConstants(::javax::swing::text::StyleConstants* key, Object$* value) override;
	virtual int32_t getValue();
	virtual bool isBold();
	virtual $Object* parseCssValue($String* value) override;
	virtual $Object* toStyleConstants(::javax::swing::text::StyleConstants* key, ::javax::swing::text::View* v) override;
	int32_t weight = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$FontWeight_h_