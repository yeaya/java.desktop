#ifndef _java_awt_FontMetrics_h_
#define _java_awt_FontMetrics_h_
//$ class java.awt.FontMetrics
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_FRC")
#undef DEFAULT_FRC

namespace java {
	namespace awt {
		class Font;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class LineMetrics;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace text {
		class CharacterIterator;
	}
}

namespace java {
	namespace awt {

class $import FontMetrics : public ::java::io::Serializable {
	$class(FontMetrics, 0, ::java::io::Serializable)
public:
	FontMetrics();
	void init$(::java::awt::Font* font);
	virtual int32_t bytesWidth($bytes* data, int32_t off, int32_t len);
	virtual int32_t charWidth(int32_t codePoint);
	virtual int32_t charWidth(char16_t ch);
	virtual int32_t charsWidth($chars* data, int32_t off, int32_t len);
	virtual int32_t getAscent();
	virtual int32_t getDescent();
	virtual ::java::awt::Font* getFont();
	virtual ::java::awt::font::FontRenderContext* getFontRenderContext();
	virtual int32_t getHeight();
	virtual int32_t getLeading();
	virtual ::java::awt::font::LineMetrics* getLineMetrics($String* str, ::java::awt::Graphics* context);
	virtual ::java::awt::font::LineMetrics* getLineMetrics($String* str, int32_t beginIndex, int32_t limit, ::java::awt::Graphics* context);
	virtual ::java::awt::font::LineMetrics* getLineMetrics($chars* chars, int32_t beginIndex, int32_t limit, ::java::awt::Graphics* context);
	virtual ::java::awt::font::LineMetrics* getLineMetrics(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::Graphics* context);
	virtual int32_t getMaxAdvance();
	virtual int32_t getMaxAscent();
	virtual ::java::awt::geom::Rectangle2D* getMaxCharBounds(::java::awt::Graphics* context);
	virtual int32_t getMaxDecent();
	virtual int32_t getMaxDescent();
	virtual ::java::awt::geom::Rectangle2D* getStringBounds($String* str, ::java::awt::Graphics* context);
	virtual ::java::awt::geom::Rectangle2D* getStringBounds($String* str, int32_t beginIndex, int32_t limit, ::java::awt::Graphics* context);
	virtual ::java::awt::geom::Rectangle2D* getStringBounds($chars* chars, int32_t beginIndex, int32_t limit, ::java::awt::Graphics* context);
	virtual ::java::awt::geom::Rectangle2D* getStringBounds(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::Graphics* context);
	virtual $ints* getWidths();
	virtual bool hasUniformLineMetrics();
	static void initIDs();
	::java::awt::font::FontRenderContext* myFRC(::java::awt::Graphics* context);
	virtual int32_t stringWidth($String* str);
	virtual $String* toString() override;
	static ::java::awt::font::FontRenderContext* DEFAULT_FRC;
	::java::awt::Font* font = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x17548F6513F0BB23;
};

	} // awt
} // java

#pragma pop_macro("DEFAULT_FRC")

#endif // _java_awt_FontMetrics_h_