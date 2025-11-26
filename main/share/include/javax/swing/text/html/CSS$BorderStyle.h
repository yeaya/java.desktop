#ifndef _javax_swing_text_html_CSS$BorderStyle_h_
#define _javax_swing_text_html_CSS$BorderStyle_h_
//$ class javax.swing.text.html.CSS$BorderStyle
//$ extends javax.swing.text.html.CSS$CssValue

#include <javax/swing/text/html/CSS$CssValue.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS$Value;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS$BorderStyle : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$BorderStyle, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$BorderStyle();
	void init$();
	virtual ::javax::swing::text::html::CSS$Value* getValue();
	virtual $Object* parseCssValue($String* value) override;
	void readObject(::java::io::ObjectInputStream* s);
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::text::html::CSS$Value* style = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$BorderStyle_h_