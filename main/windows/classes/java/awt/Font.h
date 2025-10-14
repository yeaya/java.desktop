#ifndef _java_awt_Font_h_
#define _java_awt_Font_h_
//$ class java.awt.Font
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("BOLD")
#undef BOLD
#pragma push_macro("CENTER_BASELINE")
#undef CENTER_BASELINE
#pragma push_macro("DIALOG")
#undef DIALOG
#pragma push_macro("DIALOG_INPUT")
#undef DIALOG_INPUT
#pragma push_macro("EXTRA_MASK")
#undef EXTRA_MASK
#pragma push_macro("HANGING_BASELINE")
#undef HANGING_BASELINE
#pragma push_macro("ITALIC")
#undef ITALIC
#pragma push_macro("LAYOUT_LEFT_TO_RIGHT")
#undef LAYOUT_LEFT_TO_RIGHT
#pragma push_macro("LAYOUT_MASK")
#undef LAYOUT_MASK
#pragma push_macro("LAYOUT_NO_LIMIT_CONTEXT")
#undef LAYOUT_NO_LIMIT_CONTEXT
#pragma push_macro("LAYOUT_NO_START_CONTEXT")
#undef LAYOUT_NO_START_CONTEXT
#pragma push_macro("LAYOUT_RIGHT_TO_LEFT")
#undef LAYOUT_RIGHT_TO_LEFT
#pragma push_macro("MONOSPACED")
#undef MONOSPACED
#pragma push_macro("PLAIN")
#undef PLAIN
#pragma push_macro("PRIMARY_MASK")
#undef PRIMARY_MASK
#pragma push_macro("RECOGNIZED_MASK")
#undef RECOGNIZED_MASK
#pragma push_macro("ROMAN_BASELINE")
#undef ROMAN_BASELINE
#pragma push_macro("SANS_SERIF")
#undef SANS_SERIF
#pragma push_macro("SECONDARY_MASK")
#undef SECONDARY_MASK
#pragma push_macro("SERIF")
#undef SERIF
#pragma push_macro("TRUETYPE_FONT")
#undef TRUETYPE_FONT
#pragma push_macro("TYPE1_FONT")
#undef TYPE1_FONT

namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class GlyphVector;
			class LineMetrics;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class FontPeer;
		}
	}
}
namespace java {
	namespace io {
		class File;
		class InputStream;
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator$Attribute;
		class CharacterIterator;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Locale;
		class Map;
	}
}
namespace sun {
	namespace font {
		class AttributeValues;
		class CreatedFontTracker;
		class Font2D;
		class Font2DHandle;
		class FontLineMetrics;
	}
}

namespace java {
	namespace awt {

class $export Font : public ::java::io::Serializable {
	$class(Font, 0, ::java::io::Serializable)
public:
	Font();
	void init$($String* name, int32_t style, int32_t size);
	void init$($String* name, int32_t style, float sizePts);
	void init$($String* name, int32_t style, float sizePts, bool created, ::sun::font::Font2DHandle* handle);
	void init$(::java::io::File* fontFile, int32_t fontFormat, bool isCopy, ::sun::font::CreatedFontTracker* tracker);
	void init$(::sun::font::AttributeValues* values, $String* oldName, int32_t oldStyle, bool created, ::sun::font::Font2DHandle* handle);
	void init$(::java::util::Map* attributes);
	void init$(::java::awt::Font* font);
	void init$(::sun::font::Font2D* font2D);
	static void applyStyle(int32_t style, ::sun::font::AttributeValues* values);
	static void applyTransform(::java::awt::geom::AffineTransform* trans, ::sun::font::AttributeValues* values);
	virtual bool canDisplay(char16_t c);
	virtual bool canDisplay(int32_t codePoint);
	virtual int32_t canDisplayUpTo($String* str);
	virtual int32_t canDisplayUpTo($chars* text, int32_t start, int32_t limit);
	virtual int32_t canDisplayUpTo(::java::text::CharacterIterator* iter, int32_t start, int32_t limit);
	static ::java::io::File* checkFontFile(int32_t fontFormat, ::java::io::File* fontFile);
	static ::java::awt::Font* createFont(int32_t fontFormat, ::java::io::InputStream* fontStream);
	static ::java::awt::Font* createFont(int32_t fontFormat, ::java::io::File* fontFile);
	static $Array<::java::awt::Font>* createFont0(int32_t fontFormat, ::java::io::InputStream* fontStream, bool allFonts, ::sun::font::CreatedFontTracker* tracker);
	static $Array<::java::awt::Font>* createFonts(::java::io::InputStream* fontStream);
	static $Array<::java::awt::Font>* createFonts(::java::io::File* fontFile);
	virtual ::java::awt::font::GlyphVector* createGlyphVector(::java::awt::font::FontRenderContext* frc, $String* str);
	virtual ::java::awt::font::GlyphVector* createGlyphVector(::java::awt::font::FontRenderContext* frc, $chars* chars);
	virtual ::java::awt::font::GlyphVector* createGlyphVector(::java::awt::font::FontRenderContext* frc, ::java::text::CharacterIterator* ci);
	virtual ::java::awt::font::GlyphVector* createGlyphVector(::java::awt::font::FontRenderContext* frc, $ints* glyphCodes);
	static ::java::awt::Font* decode($String* str);
	::sun::font::FontLineMetrics* defaultLineMetrics(::java::awt::font::FontRenderContext* frc);
	virtual ::java::awt::Font* deriveFont(int32_t style, float size);
	virtual ::java::awt::Font* deriveFont(int32_t style, ::java::awt::geom::AffineTransform* trans);
	virtual ::java::awt::Font* deriveFont(float size);
	virtual ::java::awt::Font* deriveFont(::java::awt::geom::AffineTransform* trans);
	virtual ::java::awt::Font* deriveFont(int32_t style);
	virtual ::java::awt::Font* deriveFont(::java::util::Map* attributes);
	virtual bool equals(Object$* obj) override;
	::sun::font::AttributeValues* getAttributeValues();
	virtual ::java::util::Map* getAttributes();
	virtual $Array<::java::text::AttributedCharacterIterator$Attribute>* getAvailableAttributes();
	virtual int8_t getBaselineFor(char16_t c);
	virtual $String* getFamily();
	virtual $String* getFamily(::java::util::Locale* l);
	$String* getFamily_NoClientCode();
	static ::java::awt::Font* getFont(::java::util::Map* attributes);
	static ::java::awt::Font* getFont($String* nm);
	static ::java::awt::Font* getFont($String* nm, ::java::awt::Font* font);
	::sun::font::Font2D* getFont2D();
	virtual $String* getFontName();
	virtual $String* getFontName(::java::util::Locale* l);
	::java::awt::peer::FontPeer* getFontPeer();
	virtual float getItalicAngle();
	float getItalicAngle(::java::awt::font::FontRenderContext* frc);
	virtual ::java::awt::font::LineMetrics* getLineMetrics($String* str, ::java::awt::font::FontRenderContext* frc);
	virtual ::java::awt::font::LineMetrics* getLineMetrics($String* str, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
	virtual ::java::awt::font::LineMetrics* getLineMetrics($chars* chars, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
	virtual ::java::awt::font::LineMetrics* getLineMetrics(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
	virtual ::java::awt::geom::Rectangle2D* getMaxCharBounds(::java::awt::font::FontRenderContext* frc);
	virtual int32_t getMissingGlyphCode();
	virtual $String* getName();
	virtual int32_t getNumGlyphs();
	virtual $String* getPSName();
	virtual int32_t getSize();
	virtual float getSize2D();
	virtual ::java::awt::geom::Rectangle2D* getStringBounds($String* str, ::java::awt::font::FontRenderContext* frc);
	virtual ::java::awt::geom::Rectangle2D* getStringBounds($String* str, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
	virtual ::java::awt::geom::Rectangle2D* getStringBounds($chars* chars, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
	virtual ::java::awt::geom::Rectangle2D* getStringBounds(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
	virtual int32_t getStyle();
	virtual ::java::awt::geom::AffineTransform* getTransform();
	virtual bool hasLayoutAttributes();
	static bool hasTempPermission();
	virtual bool hasUniformLineMetrics();
	virtual int32_t hashCode() override;
	void initFromValues(::sun::font::AttributeValues* values);
	static void initIDs();
	virtual bool isBold();
	virtual bool isItalic();
	virtual bool isPlain();
	virtual bool isTransformed();
	virtual ::java::awt::font::GlyphVector* layoutGlyphVector(::java::awt::font::FontRenderContext* frc, $chars* text, int32_t start, int32_t limit, int32_t flags);
	void readObject(::java::io::ObjectInputStream* s);
	static bool textRequiresLayout($chars* chars, int32_t start, int32_t end);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::util::Hashtable* fRequestedAttributes = nullptr;
	static $String* DIALOG;
	static $String* DIALOG_INPUT;
	static $String* SANS_SERIF;
	static $String* SERIF;
	static $String* MONOSPACED;
	static const int32_t PLAIN = 0;
	static const int32_t BOLD = 1;
	static const int32_t ITALIC = 2;
	static const int32_t ROMAN_BASELINE = 0;
	static const int32_t CENTER_BASELINE = 1;
	static const int32_t HANGING_BASELINE = 2;
	static const int32_t TRUETYPE_FONT = 0;
	static const int32_t TYPE1_FONT = 1;
	$String* name = nullptr;
	int32_t style = 0;
	int32_t size = 0;
	float pointSize = 0.0;
	::java::awt::peer::FontPeer* peer = nullptr;
	int64_t pData = 0;
	::sun::font::Font2DHandle* font2DHandle = nullptr;
	::sun::font::AttributeValues* values = nullptr;
	bool hasLayoutAttributes$ = false;
	bool createdFont = false;
	bool nonIdentityTx = false;
	static ::java::awt::geom::AffineTransform* identityTx;
	static const int64_t serialVersionUID = (int64_t)0xC5A135E6CCDE5673;
	static int32_t RECOGNIZED_MASK;
	static int32_t PRIMARY_MASK;
	static int32_t SECONDARY_MASK;
	static int32_t LAYOUT_MASK;
	static int32_t EXTRA_MASK;
	static $floats* ssinfo;
	int32_t hash = 0;
	int32_t fontSerializedDataVersion = 0;
	::java::lang::ref::SoftReference* flmref = nullptr;
	static const int32_t LAYOUT_LEFT_TO_RIGHT = 0;
	static const int32_t LAYOUT_RIGHT_TO_LEFT = 1;
	static const int32_t LAYOUT_NO_START_CONTEXT = 2;
	static const int32_t LAYOUT_NO_LIMIT_CONTEXT = 4;
};

	} // awt
} // java

#pragma pop_macro("BOLD")
#pragma pop_macro("CENTER_BASELINE")
#pragma pop_macro("DIALOG")
#pragma pop_macro("DIALOG_INPUT")
#pragma pop_macro("EXTRA_MASK")
#pragma pop_macro("HANGING_BASELINE")
#pragma pop_macro("ITALIC")
#pragma pop_macro("LAYOUT_LEFT_TO_RIGHT")
#pragma pop_macro("LAYOUT_MASK")
#pragma pop_macro("LAYOUT_NO_LIMIT_CONTEXT")
#pragma pop_macro("LAYOUT_NO_START_CONTEXT")
#pragma pop_macro("LAYOUT_RIGHT_TO_LEFT")
#pragma pop_macro("MONOSPACED")
#pragma pop_macro("PLAIN")
#pragma pop_macro("PRIMARY_MASK")
#pragma pop_macro("RECOGNIZED_MASK")
#pragma pop_macro("ROMAN_BASELINE")
#pragma pop_macro("SANS_SERIF")
#pragma pop_macro("SECONDARY_MASK")
#pragma pop_macro("SERIF")
#pragma pop_macro("TRUETYPE_FONT")
#pragma pop_macro("TYPE1_FONT")

#endif // _java_awt_Font_h_