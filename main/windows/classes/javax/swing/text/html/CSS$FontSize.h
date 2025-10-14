#ifndef _javax_swing_text_html_CSS$FontSize_h_
#define _javax_swing_text_html_CSS$FontSize_h_
//$ class javax.swing.text.html.CSS$FontSize
//$ extends javax.swing.text.html.CSS$CssValue

#include <javax/swing/text/html/CSS$CssValue.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class StyleConstants;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS;
				class CSS$LengthUnit;
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export CSS$FontSize : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$FontSize, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$FontSize();
	void init$(::javax::swing::text::html::CSS* this$0);
	virtual $Object* fromStyleConstants(::javax::swing::text::StyleConstants* key, Object$* value) override;
	virtual int32_t getValue(::javax::swing::text::AttributeSet* a, ::javax::swing::text::html::StyleSheet* ss);
	virtual $Object* parseCssValue($String* value) override;
	virtual $Object* parseHtmlValue($String* value) override;
	virtual $Object* toStyleConstants(::javax::swing::text::StyleConstants* key, ::javax::swing::text::View* v) override;
	::javax::swing::text::html::CSS* this$0 = nullptr;
	float value = 0.0;
	bool index = false;
	::javax::swing::text::html::CSS$LengthUnit* lu = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$FontSize_h_