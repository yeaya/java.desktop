#ifndef _sun_font_GlyphLayout$EngineRecord_h_
#define _sun_font_GlyphLayout$EngineRecord_h_
//$ class sun.font.GlyphLayout$EngineRecord
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {
		class Font2D;
		class GlyphLayout;
		class GlyphLayout$LayoutEngine;
		class GlyphLayout$LayoutEngineKey;
	}
}

namespace sun {
	namespace font {

class GlyphLayout$EngineRecord : public ::java::lang::Object {
	$class(GlyphLayout$EngineRecord, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlyphLayout$EngineRecord();
	void init$(::sun::font::GlyphLayout* this$0);
	void init(int32_t start, int32_t limit, ::sun::font::Font2D* font, int32_t script, int32_t lang, int32_t gmask);
	void layout();
	::sun::font::GlyphLayout* this$0 = nullptr;
	int32_t start = 0;
	int32_t limit = 0;
	int32_t gmask = 0;
	int32_t eflags = 0;
	::sun::font::GlyphLayout$LayoutEngineKey* key = nullptr;
	::sun::font::GlyphLayout$LayoutEngine* engine = nullptr;
};

	} // font
} // sun

#endif // _sun_font_GlyphLayout$EngineRecord_h_