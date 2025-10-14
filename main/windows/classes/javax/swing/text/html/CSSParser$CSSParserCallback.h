#ifndef _javax_swing_text_html_CSSParser$CSSParserCallback_h_
#define _javax_swing_text_html_CSSParser$CSSParserCallback_h_
//$ interface javax.swing.text.html.CSSParser$CSSParserCallback
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export CSSParser$CSSParserCallback : public ::java::lang::Object {
	$interface(CSSParser$CSSParserCallback, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void endRule() {}
	virtual void handleImport($String* importString) {}
	virtual void handleProperty($String* property) {}
	virtual void handleSelector($String* selector) {}
	virtual void handleValue($String* value) {}
	virtual void startRule() {}
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSSParser$CSSParserCallback_h_