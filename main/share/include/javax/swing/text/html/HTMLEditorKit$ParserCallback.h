#ifndef _javax_swing_text_html_HTMLEditorKit$ParserCallback_h_
#define _javax_swing_text_html_HTMLEditorKit$ParserCallback_h_
//$ class javax.swing.text.html.HTMLEditorKit$ParserCallback
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("IMPLIED")
#undef IMPLIED

namespace javax {
	namespace swing {
		namespace text {
			class MutableAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Tag;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import HTMLEditorKit$ParserCallback : public ::java::lang::Object {
	$class(HTMLEditorKit$ParserCallback, 0, ::java::lang::Object)
public:
	HTMLEditorKit$ParserCallback();
	void init$();
	virtual void flush();
	virtual void handleComment($chars* data, int32_t pos);
	virtual void handleEndOfLineString($String* eol);
	virtual void handleEndTag(::javax::swing::text::html::HTML$Tag* t, int32_t pos);
	virtual void handleError($String* errorMsg, int32_t pos);
	virtual void handleSimpleTag(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a, int32_t pos);
	virtual void handleStartTag(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a, int32_t pos);
	virtual void handleText($chars* data, int32_t pos);
	static $Object* IMPLIED;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("IMPLIED")

#endif // _javax_swing_text_html_HTMLEditorKit$ParserCallback_h_