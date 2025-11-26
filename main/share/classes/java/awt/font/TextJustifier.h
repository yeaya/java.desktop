#ifndef _java_awt_font_TextJustifier_h_
#define _java_awt_font_TextJustifier_h_
//$ class java.awt.font.TextJustifier
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("MAX_PRIORITY")
#undef MAX_PRIORITY

namespace java {
	namespace awt {
		namespace font {
			class GlyphJustificationInfo;
		}
	}
}

namespace java {
	namespace awt {
		namespace font {

class TextJustifier : public ::java::lang::Object {
	$class(TextJustifier, 0, ::java::lang::Object)
public:
	TextJustifier();
	void init$($Array<::java::awt::font::GlyphJustificationInfo>* info, int32_t start, int32_t limit);
	virtual $floats* justify(float delta);
	$Array<::java::awt::font::GlyphJustificationInfo>* info = nullptr;
	int32_t start = 0;
	int32_t limit = 0;
	static bool DEBUG;
	static const int32_t MAX_PRIORITY = 3;
};

		} // font
	} // awt
} // java

#pragma pop_macro("DEBUG")
#pragma pop_macro("MAX_PRIORITY")

#endif // _java_awt_font_TextJustifier_h_