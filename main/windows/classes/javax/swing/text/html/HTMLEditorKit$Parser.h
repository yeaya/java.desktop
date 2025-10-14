#ifndef _javax_swing_text_html_HTMLEditorKit$Parser_h_
#define _javax_swing_text_html_HTMLEditorKit$Parser_h_
//$ class javax.swing.text.html.HTMLEditorKit$Parser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class Reader;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTMLEditorKit$ParserCallback;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTMLEditorKit$Parser : public ::java::lang::Object {
	$class(HTMLEditorKit$Parser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HTMLEditorKit$Parser();
	void init$();
	virtual void parse(::java::io::Reader* r, ::javax::swing::text::html::HTMLEditorKit$ParserCallback* cb, bool ignoreCharSet) {}
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$Parser_h_