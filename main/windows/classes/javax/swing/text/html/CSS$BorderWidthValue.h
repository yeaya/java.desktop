#ifndef _javax_swing_text_html_CSS$BorderWidthValue_h_
#define _javax_swing_text_html_CSS$BorderWidthValue_h_
//$ class javax.swing.text.html.CSS$BorderWidthValue
//$ extends javax.swing.text.html.CSS$LengthValue

#include <java/lang/Array.h>
#include <javax/swing/text/html/CSS$LengthValue.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export CSS$BorderWidthValue : public ::javax::swing::text::html::CSS$LengthValue {
	$class(CSS$BorderWidthValue, 0, ::javax::swing::text::html::CSS$LengthValue)
public:
	CSS$BorderWidthValue();
	void init$($String* svalue, int32_t index);
	virtual $Object* parseCssValue($String* value) override;
	virtual $Object* parseHtmlValue($String* value) override;
	static $floats* values;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$BorderWidthValue_h_