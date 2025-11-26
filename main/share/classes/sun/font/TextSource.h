#ifndef _sun_font_TextSource_h_
#define _sun_font_TextSource_h_
//$ class sun.font.TextSource
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("WITHOUT_CONTEXT")
#undef WITHOUT_CONTEXT
#pragma push_macro("WITH_CONTEXT")
#undef WITH_CONTEXT

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
		}
	}
}
namespace sun {
	namespace font {
		class CoreMetrics;
	}
}

namespace sun {
	namespace font {

class TextSource : public ::java::lang::Object {
	$class(TextSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TextSource();
	void init$();
	virtual int32_t getBidiLevel() {return 0;}
	virtual $chars* getChars() {return nullptr;}
	virtual int32_t getContextLength() {return 0;}
	virtual int32_t getContextStart() {return 0;}
	virtual ::sun::font::CoreMetrics* getCoreMetrics() {return nullptr;}
	virtual ::java::awt::font::FontRenderContext* getFRC() {return nullptr;}
	virtual ::java::awt::Font* getFont() {return nullptr;}
	virtual int32_t getLayoutFlags() {return 0;}
	virtual int32_t getLength() {return 0;}
	virtual int32_t getStart() {return 0;}
	virtual ::sun::font::TextSource* getSubSource(int32_t start, int32_t length, int32_t dir) {return nullptr;}
	using ::java::lang::Object::toString;
	virtual $String* toString(bool withContext) {return nullptr;}
	static const bool WITHOUT_CONTEXT = false;
	static const bool WITH_CONTEXT = true;
};

	} // font
} // sun

#pragma pop_macro("WITHOUT_CONTEXT")
#pragma pop_macro("WITH_CONTEXT")

#endif // _sun_font_TextSource_h_