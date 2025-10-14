#ifndef _sun_font_GlyphLayout_h_
#define _sun_font_GlyphLayout_h_
//$ class sun.font.GlyphLayout
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
namespace java {
	namespace awt {
		namespace geom {
			class Point2D$Float;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace sun {
	namespace font {
		class Font2D;
		class FontRunIterator;
		class FontStrikeDesc;
		class GlyphLayout$GVData;
		class GlyphLayout$LayoutEngineFactory;
		class ScriptRun;
		class StandardGlyphVector;
		class TextRecord;
	}
}

namespace sun {
	namespace font {

class GlyphLayout : public ::java::lang::Object {
	$class(GlyphLayout, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlyphLayout();
	void init$();
	static void done(::sun::font::GlyphLayout* gl);
	static ::sun::font::GlyphLayout* get(::sun::font::GlyphLayout$LayoutEngineFactory* lef);
	void init(int32_t capacity);
	::sun::font::StandardGlyphVector* layout(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, $chars* text, int32_t offset, int32_t count, int32_t flags, ::sun::font::StandardGlyphVector* result);
	void nextEngineRecord(int32_t start, int32_t limit, int32_t script, int32_t lang, ::sun::font::Font2D* font, int32_t gmask);
	::sun::font::GlyphLayout$GVData* _gvdata = nullptr;
	static $volatile(::sun::font::GlyphLayout*) cache;
	::sun::font::GlyphLayout$LayoutEngineFactory* _lef = nullptr;
	::sun::font::TextRecord* _textRecord = nullptr;
	::sun::font::ScriptRun* _scriptRuns = nullptr;
	::sun::font::FontRunIterator* _fontRuns = nullptr;
	int32_t _ercount = 0;
	::java::util::ArrayList* _erecords = nullptr;
	::java::awt::geom::Point2D$Float* _pt = nullptr;
	::sun::font::FontStrikeDesc* _sd = nullptr;
	$floats* _mat = nullptr;
	float ptSize = 0.0;
	int32_t _typo_flags = 0;
	int32_t _offset = 0;
};

	} // font
} // sun

#endif // _sun_font_GlyphLayout_h_