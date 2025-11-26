#ifndef _javax_swing_text_html_CSS$ColorValue_h_
#define _javax_swing_text_html_CSS$ColorValue_h_
//$ class javax.swing.text.html.CSS$ColorValue
//$ extends javax.swing.text.html.CSS$CssValue

#include <javax/swing/text/html/CSS$CssValue.h>

namespace java {
	namespace awt {
		class Color;
	}
}
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

class $import CSS$ColorValue : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$ColorValue, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$ColorValue();
	void init$();
	virtual $Object* fromStyleConstants(::javax::swing::text::StyleConstants* key, Object$* value) override;
	virtual ::java::awt::Color* getValue();
	virtual $Object* parseCssValue($String* value) override;
	virtual $Object* parseHtmlValue($String* value) override;
	virtual $Object* toStyleConstants(::javax::swing::text::StyleConstants* key, ::javax::swing::text::View* v) override;
	::java::awt::Color* c = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$ColorValue_h_