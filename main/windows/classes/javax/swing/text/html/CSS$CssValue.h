#ifndef _javax_swing_text_html_CSS$CssValue_h_
#define _javax_swing_text_html_CSS$CssValue_h_
//$ class javax.swing.text.html.CSS$CssValue
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

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

class $export CSS$CssValue : public ::java::io::Serializable {
	$class(CSS$CssValue, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CSS$CssValue();
	void init$();
	virtual $Object* fromStyleConstants(::javax::swing::text::StyleConstants* key, Object$* value);
	virtual $Object* parseCssValue($String* value);
	virtual $Object* parseHtmlValue($String* value);
	virtual $String* toString() override;
	virtual $Object* toStyleConstants(::javax::swing::text::StyleConstants* key, ::javax::swing::text::View* v);
	$String* svalue = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$CssValue_h_