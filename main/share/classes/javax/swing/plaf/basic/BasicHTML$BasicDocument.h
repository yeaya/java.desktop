#ifndef _javax_swing_plaf_basic_BasicHTML$BasicDocument_h_
#define _javax_swing_plaf_basic_BasicHTML$BasicDocument_h_
//$ class javax.swing.plaf.basic.BasicHTML$BasicDocument
//$ extends javax.swing.text.html.HTMLDocument

#include <javax/swing/text/html/HTMLDocument.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicHTML$BasicDocument : public ::javax::swing::text::html::HTMLDocument {
	$class(BasicHTML$BasicDocument, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLDocument)
public:
	BasicHTML$BasicDocument();
	void init$(::javax::swing::text::html::StyleSheet* s, ::java::awt::Font* defaultFont, ::java::awt::Color* foreground);
	void setFontAndColor(::java::awt::Font* font, ::java::awt::Color* fg);
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicHTML$BasicDocument_h_