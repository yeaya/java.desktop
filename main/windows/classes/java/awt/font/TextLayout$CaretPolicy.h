#ifndef _java_awt_font_TextLayout$CaretPolicy_h_
#define _java_awt_font_TextLayout$CaretPolicy_h_
//$ class java.awt.font.TextLayout$CaretPolicy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace font {
			class TextHitInfo;
			class TextLayout;
		}
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export TextLayout$CaretPolicy : public ::java::lang::Object {
	$class(TextLayout$CaretPolicy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TextLayout$CaretPolicy();
	void init$();
	virtual ::java::awt::font::TextHitInfo* getStrongCaret(::java::awt::font::TextHitInfo* hit1, ::java::awt::font::TextHitInfo* hit2, ::java::awt::font::TextLayout* layout);
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_TextLayout$CaretPolicy_h_