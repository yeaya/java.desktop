#ifndef _javax_swing_text_html_CSS$LengthValue_h_
#define _javax_swing_text_html_CSS$LengthValue_h_
//$ class javax.swing.text.html.CSS$LengthValue
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

class $export CSS$LengthValue : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$LengthValue, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$LengthValue();
	void init$();
	void init$(bool mayBeNegative);
	virtual $Object* fromStyleConstants(::javax::swing::text::StyleConstants* key, Object$* value) override;
	virtual float getValue();
	virtual float getValue(bool isW3CLengthUnits);
	virtual float getValue(float currentValue);
	virtual float getValue(float currentValue, bool isW3CLengthUnits);
	virtual bool isPercentage();
	virtual $Object* parseCssValue($String* value) override;
	virtual $Object* parseHtmlValue($String* value) override;
	virtual $Object* toStyleConstants(::javax::swing::text::StyleConstants* key, ::javax::swing::text::View* v) override;
	bool mayBeNegative = false;
	bool percentage = false;
	float span = 0.0;
	$String* units = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$LengthValue_h_