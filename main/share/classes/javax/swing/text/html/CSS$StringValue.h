#ifndef _javax_swing_text_html_CSS$StringValue_h_
#define _javax_swing_text_html_CSS$StringValue_h_
//$ class javax.swing.text.html.CSS$StringValue
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

class $export CSS$StringValue : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$StringValue, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$StringValue();
	void init$();
	virtual $Object* fromStyleConstants(::javax::swing::text::StyleConstants* key, Object$* value) override;
	virtual bool isItalic();
	virtual bool isStrike();
	virtual bool isSub();
	virtual bool isSup();
	virtual bool isUnderline();
	virtual $Object* parseCssValue($String* value) override;
	virtual $Object* toStyleConstants(::javax::swing::text::StyleConstants* key, ::javax::swing::text::View* v) override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$StringValue_h_