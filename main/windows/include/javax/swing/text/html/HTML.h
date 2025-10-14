#ifndef _javax_swing_text_html_HTML_h_
#define _javax_swing_text_html_HTML_h_
//$ class javax.swing.text.html.HTML
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HTML")
#undef HTML
#pragma push_macro("NULL_ATTRIBUTE_VALUE")
#undef NULL_ATTRIBUTE_VALUE

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class StyleConstants;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Attribute;
				class HTML$Tag;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import HTML : public ::java::lang::Object {
	$class(HTML, 0, ::java::lang::Object)
public:
	HTML();
	void init$();
	static $Array<::javax::swing::text::html::HTML$Attribute>* getAllAttributeKeys();
	static $Array<::javax::swing::text::html::HTML$Tag>* getAllTags();
	static ::javax::swing::text::html::HTML$Attribute* getAttributeKey($String* attName);
	static int32_t getIntegerAttributeValue(::javax::swing::text::AttributeSet* attr, ::javax::swing::text::html::HTML$Attribute* key, int32_t def);
	static ::javax::swing::text::html::HTML$Tag* getTag($String* tagName);
	static ::javax::swing::text::html::HTML$Tag* getTagForStyleConstantsKey(::javax::swing::text::StyleConstants* sc);
	static ::java::util::Hashtable* tagHashtable;
	static ::java::util::Hashtable* scMapping;
	static $String* NULL_ATTRIBUTE_VALUE;
	static ::java::util::Hashtable* attHashtable;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("HTML")
#pragma pop_macro("NULL_ATTRIBUTE_VALUE")

#endif // _javax_swing_text_html_HTML_h_