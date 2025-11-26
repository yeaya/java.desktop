#ifndef _sun_font_FileFont_h_
#define _sun_font_FileFont_h_
//$ class sun.font.FileFont
//$ extends sun.font.PhysicalFont

#include <java/lang/Array.h>
#include <sun/font/PhysicalFont.h>

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
	namespace io {
		class File;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace font {
		class CreatedFontTracker;
		class FontScaler;
		class FontStrike;
		class FontStrikeDesc;
		class NativeFont;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class FileFont : public ::sun::font::PhysicalFont {
	$class(FileFont, $NO_CLASS_INIT, ::sun::font::PhysicalFont)
public:
	FileFont();
	using ::sun::font::PhysicalFont::getFontMetrics;
	void init$($String* platname, Object$* nativeNames);
	virtual bool canDoStyle(int32_t style) override;
	virtual void close() {}
	virtual ::sun::font::FontStrike* createStrike(::sun::font::FontStrikeDesc* desc) override;
	virtual void deregisterFontAndClearStrikeCache();
	virtual ::sun::font::StrikeMetrics* getFontMetrics(int64_t pScalerContext) override;
	virtual float getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) override;
	virtual int64_t getGlyphImage(int64_t pScalerContext, int32_t glyphCode) override;
	virtual void getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, ::java::awt::geom::Point2D$Float* metrics) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) override;
	virtual $String* getPublicFileName();
	virtual ::sun::font::FontScaler* getScaler() {return nullptr;}
	virtual int64_t getUnitsPerEm() override;
	virtual ::java::nio::ByteBuffer* readBlock(int32_t offset, int32_t length) {return nullptr;}
	static void setFileToRemove(::java::util::List* fonts, ::java::io::File* file, int32_t cnt, ::sun::font::CreatedFontTracker* tracker);
	bool useJavaRasterizer = false;
	int32_t fileSize = 0;
	::sun::font::FontScaler* scaler = nullptr;
	$Array<::sun::font::NativeFont>* nativeFonts = nullptr;
	$chars* glyphToCharMap = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FileFont_h_