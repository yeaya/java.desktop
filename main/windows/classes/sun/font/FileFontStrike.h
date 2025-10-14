#ifndef _sun_font_FileFontStrike_h_
#define _sun_font_FileFontStrike_h_
//$ class sun.font.FileFontStrike
//$ extends sun.font.PhysicalStrike

#include <java/lang/Array.h>
#include <sun/font/PhysicalStrike.h>

#pragma push_macro("INTARRAY")
#undef INTARRAY
#pragma push_macro("INVISIBLE_GLYPHS")
#undef INVISIBLE_GLYPHS
#pragma push_macro("LONGARRAY")
#undef LONGARRAY
#pragma push_macro("SEGINTARRAY")
#undef SEGINTARRAY
#pragma push_macro("SEGLONGARRAY")
#undef SEGLONGARRAY
#pragma push_macro("SEGSHIFT")
#undef SEGSHIFT
#pragma push_macro("SEGSIZE")
#undef SEGSIZE
#pragma push_macro("UNINITIALISED")
#undef UNINITIALISED

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class GeneralPath;
			class Point2D$Float;
			class Rectangle2D;
			class Rectangle2D$Float;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace sun {
	namespace font {
		class FileFont;
		class FontStrikeDesc;
		class NativeStrike;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class FileFontStrike : public ::sun::font::PhysicalStrike {
	$class(FileFontStrike, 0, ::sun::font::PhysicalStrike)
public:
	FileFontStrike();
	void init$(::sun::font::FileFont* fileFont, ::sun::font::FontStrikeDesc* desc);
	int64_t _getGlyphImageFromWindows($String* family, int32_t style, int32_t size, int32_t glyphCode, bool fracMetrics, int32_t fontDataSize);
	virtual void adjustPoint(::java::awt::geom::Point2D$Float* pt) override;
	virtual int64_t getCachedGlyphPtr(int32_t glyphCode);
	int64_t getCachedGlyphPtrInternal(int32_t glyphCode);
	virtual ::java::awt::geom::Point2D$Float* getCharMetrics(char16_t ch) override;
	virtual float getCodePointAdvance(int32_t cp) override;
	virtual ::sun::font::StrikeMetrics* getFontMetrics() override;
	virtual float getGlyphAdvance(int32_t glyphCode) override;
	float getGlyphAdvance(int32_t glyphCode, bool getUserAdv);
	virtual void getGlyphImageBounds(int32_t glyphCode, ::java::awt::geom::Point2D$Float* pt, ::java::awt::Rectangle* result) override;
	virtual int64_t getGlyphImageFromNative(int32_t glyphCode);
	virtual int64_t getGlyphImageFromWindows(int32_t glyphCode);
	virtual int64_t getGlyphImageFromX11(int32_t glyphCode);
	int32_t getGlyphImageMinX(int64_t ptr, int32_t origMinX);
	virtual int64_t getGlyphImagePtr(int32_t glyphCode) override;
	virtual void getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) override;
	virtual ::java::awt::geom::Point2D$Float* getGlyphMetrics(int32_t glyphCode) override;
	::java::awt::geom::Point2D$Float* getGlyphMetrics(int32_t glyphCode, bool getImage);
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline($ints* glyphs, float x, float y) override;
	virtual int32_t getNumGlyphs() override;
	virtual ::java::awt::geom::Rectangle2D* getOutlineBounds(int32_t glyphCode);
	virtual int32_t getSlot0GlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) override;
	void initGlyphCache();
	static bool initNative();
	int64_t setCachedGlyphPtr(int32_t glyphCode, int64_t glyphPtr);
	int64_t setCachedGlyphPtrInternal(int32_t glyphCode, int64_t glyphPtr);
	static const int32_t INVISIBLE_GLYPHS = 0x0000FFFE;
	::sun::font::FileFont* fileFont = nullptr;
	static const int32_t UNINITIALISED = 0;
	static const int32_t INTARRAY = 1;
	static const int32_t LONGARRAY = 2;
	static const int32_t SEGINTARRAY = 3;
	static const int32_t SEGLONGARRAY = 4;
	$volatile(int32_t) glyphCacheFormat = 0;
	static const int32_t SEGSHIFT = 5;
	static const int32_t SEGSIZE = 32; // 1 << SEGSHIFT
	bool segmentedCache = false;
	$Array<int32_t, 2>* segIntGlyphImages = nullptr;
	$Array<int64_t, 2>* segLongGlyphImages = nullptr;
	$floats* horizontalAdvances = nullptr;
	$Array<float, 2>* segHorizontalAdvances = nullptr;
	::java::util::concurrent::ConcurrentHashMap* boundsMap = nullptr;
	::java::lang::ref::SoftReference* glyphMetricsMapRef = nullptr;
	::java::awt::geom::AffineTransform* invertDevTx = nullptr;
	bool useNatives = false;
	$Array<::sun::font::NativeStrike>* nativeStrikes = nullptr;
	int32_t intPtSize = 0;
	static bool isXPorLater;
	::java::lang::ref::WeakReference* outlineMapRef = nullptr;
};

	} // font
} // sun

#pragma pop_macro("INTARRAY")
#pragma pop_macro("INVISIBLE_GLYPHS")
#pragma pop_macro("LONGARRAY")
#pragma pop_macro("SEGINTARRAY")
#pragma pop_macro("SEGLONGARRAY")
#pragma pop_macro("SEGSHIFT")
#pragma pop_macro("SEGSIZE")
#pragma pop_macro("UNINITIALISED")

#endif // _sun_font_FileFontStrike_h_