#ifndef _javax_swing_text_html_StyleSheet$SelectorMapping_h_
#define _javax_swing_text_html_StyleSheet$SelectorMapping_h_
//$ class javax.swing.text.html.StyleSheet$SelectorMapping
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		class HashMap;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Style;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export StyleSheet$SelectorMapping : public ::java::io::Serializable {
	$class(StyleSheet$SelectorMapping, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	StyleSheet$SelectorMapping();
	void init$(int32_t specificity);
	virtual ::javax::swing::text::html::StyleSheet$SelectorMapping* createChildSelectorMapping(int32_t specificity);
	virtual ::javax::swing::text::html::StyleSheet$SelectorMapping* getChildSelectorMapping($String* selector, bool create);
	virtual int32_t getChildSpecificity($String* selector);
	virtual int32_t getSpecificity();
	virtual ::javax::swing::text::Style* getStyle();
	virtual void setStyle(::javax::swing::text::Style* style);
	int32_t specificity = 0;
	::javax::swing::text::Style* style = nullptr;
	::java::util::HashMap* children = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$SelectorMapping_h_