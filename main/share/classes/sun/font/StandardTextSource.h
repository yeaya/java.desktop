#ifndef _sun_font_StandardTextSource_h_
#define _sun_font_StandardTextSource_h_
//$ class sun.font.StandardTextSource
//$ extends sun.font.TextSource

#include <java/lang/Array.h>
#include <sun/font/TextSource.h>

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
namespace sun {
	namespace font {
		class CoreMetrics;
	}
}

namespace sun {
	namespace font {

class StandardTextSource : public ::sun::font::TextSource {
	$class(StandardTextSource, $NO_CLASS_INIT, ::sun::font::TextSource)
public:
	StandardTextSource();
	void init$($chars* chars, int32_t start, int32_t len, int32_t cstart, int32_t clen, int32_t level, int32_t flags, ::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, ::sun::font::CoreMetrics* cm);
	virtual int32_t getBidiLevel() override;
	virtual $chars* getChars() override;
	virtual int32_t getContextLength() override;
	virtual int32_t getContextStart() override;
	virtual ::sun::font::CoreMetrics* getCoreMetrics() override;
	virtual ::java::awt::font::FontRenderContext* getFRC() override;
	virtual ::java::awt::Font* getFont() override;
	virtual int32_t getLayoutFlags() override;
	virtual int32_t getLength() override;
	virtual int32_t getStart() override;
	virtual ::sun::font::TextSource* getSubSource(int32_t start, int32_t length, int32_t dir) override;
	virtual $String* toString() override;
	virtual $String* toString(bool withContext) override;
	$chars* chars = nullptr;
	int32_t start = 0;
	int32_t len = 0;
	int32_t cstart = 0;
	int32_t clen = 0;
	int32_t level = 0;
	int32_t flags = 0;
	::java::awt::Font* font = nullptr;
	::java::awt::font::FontRenderContext* frc = nullptr;
	::sun::font::CoreMetrics* cm = nullptr;
};

	} // font
} // sun

#endif // _sun_font_StandardTextSource_h_