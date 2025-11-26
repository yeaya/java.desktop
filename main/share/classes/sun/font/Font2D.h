#ifndef _sun_font_Font2D_h_
#define _sun_font_Font2D_h_
//$ class sun.font.Font2D
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_FRC")
#undef DEFAULT_FRC
#pragma push_macro("DEFAULT_RANK")
#undef DEFAULT_RANK
#pragma push_macro("FONT_CONFIG_RANK")
#undef FONT_CONFIG_RANK
#pragma push_macro("FWEIGHT_BOLD")
#undef FWEIGHT_BOLD
#pragma push_macro("FWEIGHT_NORMAL")
#undef FWEIGHT_NORMAL
#pragma push_macro("FWIDTH_NORMAL")
#undef FWIDTH_NORMAL
#pragma push_macro("JRE_RANK")
#undef JRE_RANK
#pragma push_macro("NATIVE_RANK")
#undef NATIVE_RANK
#pragma push_macro("TTF_RANK")
#undef TTF_RANK
#pragma push_macro("TYPE1_RANK")
#undef TYPE1_RANK
#pragma push_macro("UNKNOWN_RANK")
#undef UNKNOWN_RANK

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
			class AffineTransform;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
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
		class CharToGlyphMapper;
		class Font2DHandle;
		class FontFamily;
		class FontStrike;
		class FontStrikeDesc;
	}
}

namespace sun {
	namespace font {

class Font2D : public ::java::lang::Object {
	$class(Font2D, 0, ::java::lang::Object)
public:
	Font2D();
	void init$();
	virtual bool canDisplay(char16_t c);
	virtual bool canDisplay(int32_t cp);
	virtual bool canDoStyle(int32_t style);
	virtual int32_t charToGlyph(int32_t wchar);
	virtual int32_t charToVariationGlyph(int32_t wchar, int32_t variationSelector);
	virtual ::sun::font::FontStrike* createStrike(::sun::font::FontStrikeDesc* desc) {return nullptr;}
	virtual int8_t getBaselineFor(char16_t c);
	virtual $String* getFamilyName(::java::util::Locale* l);
	virtual void getFontMetrics(::java::awt::Font* font, ::java::awt::geom::AffineTransform* at, Object$* aaHint, Object$* fmHint, $floats* metrics);
	virtual void getFontMetrics(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, $floats* metrics);
	virtual $String* getFontName(::java::util::Locale* l);
	virtual float getItalicAngle(::java::awt::Font* font, ::java::awt::geom::AffineTransform* at, Object$* aaHint, Object$* fmHint);
	virtual ::sun::font::CharToGlyphMapper* getMapper() {return nullptr;}
	virtual int32_t getMissingGlyphCode();
	virtual int32_t getNumGlyphs();
	virtual int64_t getPlatformNativeFontPtr();
	virtual $String* getPostscriptName();
	virtual int32_t getRank();
	virtual ::sun::font::FontStrike* getStrike(::java::awt::Font* font);
	virtual ::sun::font::FontStrike* getStrike(::java::awt::Font* font, ::java::awt::geom::AffineTransform* devTx, int32_t aa, int32_t fm);
	virtual ::sun::font::FontStrike* getStrike(::java::awt::Font* font, ::java::awt::geom::AffineTransform* devTx, ::java::awt::geom::AffineTransform* glyphTx, int32_t aa, int32_t fm);
	virtual ::sun::font::FontStrike* getStrike(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	virtual ::sun::font::FontStrike* getStrike(::sun::font::FontStrikeDesc* desc);
	::sun::font::FontStrike* getStrike(::sun::font::FontStrikeDesc* desc, bool copy);
	virtual int32_t getStyle();
	virtual void getStyleMetrics(float pointSize, $floats* metrics, int32_t offset);
	virtual $bytes* getTableBytes(int32_t tag);
	virtual int64_t getUnitsPerEm();
	virtual int32_t getValidatedGlyphCode(int32_t glyphCode);
	virtual int32_t getWeight();
	virtual int32_t getWidth();
	virtual bool hasSupplementaryChars();
	virtual void setRank(int32_t rank);
	virtual void setStyle();
	virtual void setUseWeakRefs(bool weak, int32_t maxStrikes);
	virtual bool supportsEncoding($String* encoding);
	virtual void updateLastStrikeRef(::sun::font::FontStrike* strike);
	virtual bool useAAForPtSize(int32_t ptsize);
	static const int32_t FONT_CONFIG_RANK = 2;
	static const int32_t JRE_RANK = 2;
	static const int32_t TTF_RANK = 3;
	static const int32_t TYPE1_RANK = 4;
	static const int32_t NATIVE_RANK = 5;
	static const int32_t UNKNOWN_RANK = 6;
	static const int32_t DEFAULT_RANK = 4;
	static $StringArray* boldNames;
	static $StringArray* italicNames;
	static $StringArray* boldItalicNames;
	static ::java::awt::font::FontRenderContext* DEFAULT_FRC;
	::sun::font::Font2DHandle* handle = nullptr;
	$String* familyName = nullptr;
	$String* fullName = nullptr;
	int32_t style = 0;
	::sun::font::FontFamily* family = nullptr;
	int32_t fontRank = 0;
	::sun::font::CharToGlyphMapper* mapper = nullptr;
	::java::util::concurrent::ConcurrentHashMap* strikeCache = nullptr;
	::java::lang::ref::Reference* lastFontStrike = nullptr;
	int32_t strikeCacheMax = 0;
	bool useWeak = false;
	static const int32_t FWIDTH_NORMAL = 5;
	static const int32_t FWEIGHT_NORMAL = 400;
	static const int32_t FWEIGHT_BOLD = 700;
};

	} // font
} // sun

#pragma pop_macro("DEFAULT_FRC")
#pragma pop_macro("DEFAULT_RANK")
#pragma pop_macro("FONT_CONFIG_RANK")
#pragma pop_macro("FWEIGHT_BOLD")
#pragma pop_macro("FWEIGHT_NORMAL")
#pragma pop_macro("FWIDTH_NORMAL")
#pragma pop_macro("JRE_RANK")
#pragma pop_macro("NATIVE_RANK")
#pragma pop_macro("TTF_RANK")
#pragma pop_macro("TYPE1_RANK")
#pragma pop_macro("UNKNOWN_RANK")

#endif // _sun_font_Font2D_h_