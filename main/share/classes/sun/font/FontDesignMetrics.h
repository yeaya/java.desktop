#ifndef _sun_font_FontDesignMetrics_h_
#define _sun_font_FontDesignMetrics_h_
//$ class sun.font.FontDesignMetrics
//$ extends java.awt.FontMetrics

#include <java/awt/FontMetrics.h>
#include <java/lang/Array.h>

#pragma push_macro("CURRENT_VERSION")
#undef CURRENT_VERSION
#pragma push_macro("DEFAULT_FRC")
#undef DEFAULT_FRC
#pragma push_macro("MAXRECENT")
#undef MAXRECENT
#pragma push_macro("UNKNOWN_WIDTH")
#undef UNKNOWN_WIDTH

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
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
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
		class FontStrike;
	}
}

namespace sun {
	namespace font {

class FontDesignMetrics : public ::java::awt::FontMetrics {
	$class(FontDesignMetrics, 0, ::java::awt::FontMetrics)
public:
	FontDesignMetrics();
	void init$(::java::awt::Font* font);
	void init$(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	virtual int32_t charWidth(char16_t ch) override;
	virtual int32_t charWidth(int32_t ch) override;
	virtual int32_t charsWidth($chars* data, int32_t off, int32_t len) override;
	virtual int32_t getAscent() override;
	static ::java::awt::font::FontRenderContext* getDefaultFrc();
	virtual int32_t getDescent() override;
	virtual ::java::awt::font::FontRenderContext* getFontRenderContext() override;
	virtual int32_t getHeight() override;
	float getLatinCharWidth(char16_t ch);
	virtual int32_t getLeading() override;
	virtual int32_t getMaxAdvance() override;
	static ::sun::font::FontDesignMetrics* getMetrics(::java::awt::Font* font);
	static ::sun::font::FontDesignMetrics* getMetrics(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	::java::awt::geom::Rectangle2D* getSimpleBounds($chars* data, int32_t off, int32_t len);
	virtual $ints* getWidths() override;
	float handleCharWidth(int32_t ch);
	void initAdvCache();
	void initMatrixAndMetrics();
	void readObject(::java::io::ObjectInputStream* in);
	virtual int32_t stringWidth($String* str) override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x3E2C678B9727DBDD;
	static float UNKNOWN_WIDTH;
	static const int32_t CURRENT_VERSION = 1;
	static float roundingUpValue;
	::java::awt::Font* font = nullptr;
	float ascent = 0.0;
	float descent = 0.0;
	float leading = 0.0;
	float maxAdvance = 0.0;
	$doubles* matrix = nullptr;
	$ints* cache = nullptr;
	int32_t serVersion = 0;
	bool isAntiAliased = false;
	bool usesFractionalMetrics = false;
	::java::awt::geom::AffineTransform* frcTx = nullptr;
	$floats* advCache = nullptr;
	int32_t height = 0;
	::java::awt::font::FontRenderContext* frc = nullptr;
	$doubles* devmatrix = nullptr;
	::sun::font::FontStrike* fontStrike = nullptr;
	static ::java::awt::font::FontRenderContext* DEFAULT_FRC;
	static ::java::util::concurrent::ConcurrentHashMap* metricsCache;
	static const int32_t MAXRECENT = 5;
	static $Array<::sun::font::FontDesignMetrics>* recentMetrics;
	static int32_t recentIndex;
};

	} // font
} // sun

#pragma pop_macro("CURRENT_VERSION")
#pragma pop_macro("DEFAULT_FRC")
#pragma pop_macro("MAXRECENT")
#pragma pop_macro("UNKNOWN_WIDTH")

#endif // _sun_font_FontDesignMetrics_h_