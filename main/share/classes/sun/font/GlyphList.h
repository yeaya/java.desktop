#ifndef _sun_font_GlyphList_h_
#define _sun_font_GlyphList_h_
//$ class sun.font.GlyphList
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_LENGTH")
#undef DEFAULT_LENGTH
#pragma push_macro("MAXGRAYLENGTH")
#undef MAXGRAYLENGTH
#pragma push_macro("MINGRAYLENGTH")
#undef MINGRAYLENGTH

namespace java {
	namespace awt {
		namespace font {
			class GlyphVector;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace sun {
	namespace font {
		class ColorGlyphSurfaceData;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class FontInfo;
		}
	}
}

namespace sun {
	namespace font {

class GlyphList : public ::java::lang::Object {
	$class(GlyphList, 0, ::java::lang::Object)
public:
	GlyphList();
	void init$();
	static bool canContainColorGlyphs();
	void dispose();
	void ensureCapacity(int32_t len);
	void fillBounds($ints* bounds, int32_t endGlyphIndex);
	$ints* getBounds(int32_t endGlyphIndex);
	::sun::java2d::SurfaceData* getColorGlyphData();
	$bytes* getGrayBits();
	$longs* getImages();
	static ::sun::font::GlyphList* getInstance();
	$ints* getMetrics();
	int32_t getNumGlyphs();
	$floats* getPositions();
	$Object* getStrike();
	float getX();
	float getY();
	bool isColorGlyph(int32_t glyphIndex);
	bool isRGBOrder();
	bool isSubPixPos();
	bool mapChars(::sun::java2d::loops::FontInfo* info, int32_t len);
	bool setFromChars(::sun::java2d::loops::FontInfo* info, $chars* chars, int32_t off, int32_t alen, float x, float y);
	void setFromGlyphVector(::sun::java2d::loops::FontInfo* info, ::java::awt::font::GlyphVector* gv, float x, float y);
	bool setFromString(::sun::java2d::loops::FontInfo* info, $String* str, float x, float y);
	void setGlyphIndex(int32_t i);
	void startGlyphIteration();
	bool usePositions();
	static const int32_t MINGRAYLENGTH = 1024;
	static const int32_t MAXGRAYLENGTH = 8192;
	static const int32_t DEFAULT_LENGTH = 32;
	int32_t glyphindex = 0;
	$ints* metrics = nullptr;
	$bytes* graybits = nullptr;
	$Object* strikelist = nullptr;
	int32_t len = 0;
	int32_t maxLen = 0;
	int32_t maxPosLen = 0;
	$ints* glyphData = nullptr;
	$chars* chData = nullptr;
	$longs* images = nullptr;
	$floats* positions = nullptr;
	float x = 0.0;
	float y = 0.0;
	float gposx = 0.0;
	float gposy = 0.0;
	bool usePositions$ = false;
	bool lcdRGBOrder = false;
	bool lcdSubPixPos = false;
	static ::sun::font::GlyphList* reusableGL;
	static ::java::util::concurrent::atomic::AtomicBoolean* inUse;
	::sun::font::ColorGlyphSurfaceData* glyphSurfaceData = nullptr;
};

	} // font
} // sun

#pragma pop_macro("DEFAULT_LENGTH")
#pragma pop_macro("MAXGRAYLENGTH")
#pragma pop_macro("MINGRAYLENGTH")

#endif // _sun_font_GlyphList_h_