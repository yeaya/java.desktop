#ifndef _sun_font_CFont_h_
#define _sun_font_CFont_h_
//$ class sun.font.CFont
//$ extends sun.font.PhysicalFont
//$ implements sun.font.FontSubstitution

#include <java/lang/Array.h>
#include <sun/font/FontSubstitution.h>
#include <sun/font/PhysicalFont.h>

#pragma push_macro("DEFAULT_FRC")
#undef DEFAULT_FRC

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
			class GeneralPath;
			class Point2D$Float;
			class Rectangle2D$Float;
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
		class CharToGlyphMapper;
		class CompositeFont;
		class FontStrike;
		class FontStrikeDesc;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class CFont : public ::sun::font::PhysicalFont, public ::sun::font::FontSubstitution {
	$class(CFont, $HAS_FINALIZE, ::sun::font::PhysicalFont, ::sun::font::FontSubstitution)
public:
	CFont();
	using ::sun::font::PhysicalFont::getStrike;
	using ::sun::font::PhysicalFont::getFontMetrics;
	virtual $Object* clone() override;
	void init$($String* name);
	void init$($String* name, $String* inFamilyName);
	void init$(::sun::font::CFont* other, $String* logicalFamilyName);
	::sun::font::CompositeFont* createCompositeFont();
	::sun::font::CFont* createItalicVariant();
	static int64_t createNativeFont($String* nativeFontName, int32_t style);
	virtual ::sun::font::FontStrike* createStrike(::sun::font::FontStrikeDesc* desc) override;
	static void disposeNativeFont(int64_t nativeFontPtr);
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	int64_t getCGFontPtrNative(int64_t ptr);
	static void getCascadeList(int64_t nativeFontPtr, ::java::util::ArrayList* listOfString);
	virtual ::sun::font::CompositeFont* getCompositeFont2D() override;
	virtual ::sun::font::StrikeMetrics* getFontMetrics(int64_t pScalerContext) override;
	virtual float getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) override;
	virtual int64_t getGlyphImage(int64_t pScalerContext, int32_t glyphCode) override;
	virtual void getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, ::java::awt::geom::Point2D$Float* metrics) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) override;
	virtual ::sun::font::CharToGlyphMapper* getMapper() override;
	int64_t getNativeFontPtr();
	virtual int64_t getPlatformNativeFontPtr() override;
	virtual ::sun::font::FontStrike* getStrike(::java::awt::Font* font) override;
	virtual $bytes* getTableBytes(int32_t tag) override;
	$bytes* getTableBytesNative(int64_t nativeFontPtr, int32_t tag);
	virtual int32_t getWeight() override;
	float getWeightNative(int64_t nativeFontPtr);
	virtual int32_t getWidth() override;
	float getWidthNative(int64_t nativeFontPtr);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	bool isFakeItalic = false;
	$String* nativeFontName = nullptr;
	int64_t nativeFontPtr = 0;
	int32_t fontWidth = 0;
	int32_t fontWeight = 0;
	::sun::font::CompositeFont* compFont = nullptr;
	static ::java::awt::font::FontRenderContext* DEFAULT_FRC;
};

	} // font
} // sun

#pragma pop_macro("DEFAULT_FRC")

#endif // _sun_font_CFont_h_