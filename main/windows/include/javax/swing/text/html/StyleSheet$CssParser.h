#ifndef _javax_swing_text_html_StyleSheet$CssParser_h_
#define _javax_swing_text_html_StyleSheet$CssParser_h_
//$ class javax.swing.text.html.StyleSheet$CssParser
//$ extends javax.swing.text.html.CSSParser$CSSParserCallback

#include <javax/swing/text/html/CSSParser$CSSParserCallback.h>

namespace java {
	namespace io {
		class Reader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class MutableAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSSParser;
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import StyleSheet$CssParser : public ::javax::swing::text::html::CSSParser$CSSParserCallback {
	$class(StyleSheet$CssParser, $NO_CLASS_INIT, ::javax::swing::text::html::CSSParser$CSSParserCallback)
public:
	StyleSheet$CssParser();
	void init$(::javax::swing::text::html::StyleSheet* this$0);
	void addSelector();
	virtual void endRule() override;
	virtual void handleImport($String* importString) override;
	virtual void handleProperty($String* property) override;
	virtual void handleSelector($String* selector) override;
	virtual void handleValue($String* value) override;
	virtual void parse(::java::net::URL* base, ::java::io::Reader* r, bool parseDeclaration, bool isLink);
	virtual ::javax::swing::text::AttributeSet* parseDeclaration($String* string);
	virtual ::javax::swing::text::AttributeSet* parseDeclaration(::java::io::Reader* r);
	virtual void startRule() override;
	::javax::swing::text::html::StyleSheet* this$0 = nullptr;
	::java::util::Vector* selectors = nullptr;
	::java::util::Vector* selectorTokens = nullptr;
	$String* propertyName = nullptr;
	::javax::swing::text::MutableAttributeSet* declaration = nullptr;
	bool parsingDeclaration = false;
	bool isLink = false;
	::java::net::URL* base = nullptr;
	::javax::swing::text::html::CSSParser* parser = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$CssParser_h_