#ifndef _sun_awt_windows_WFontMetrics_h_
#define _sun_awt_windows_WFontMetrics_h_
//$ class sun.awt.windows.WFontMetrics
//$ extends java.awt.FontMetrics

#include <java/awt/FontMetrics.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WFontMetrics : public ::java::awt::FontMetrics {
	$class(WFontMetrics, 0, ::java::awt::FontMetrics)
public:
	WFontMetrics();
	void init$(::java::awt::Font* font);
	virtual int32_t bytesWidth($bytes* data, int32_t off, int32_t len) override;
	virtual int32_t charsWidth($chars* data, int32_t off, int32_t len) override;
	virtual int32_t getAscent() override;
	virtual int32_t getDescent() override;
	static ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font);
	virtual int32_t getHeight() override;
	virtual int32_t getLeading() override;
	virtual int32_t getMaxAdvance() override;
	virtual int32_t getMaxAscent() override;
	virtual int32_t getMaxDescent() override;
	virtual $ints* getWidths() override;
	void init();
	static void initIDs();
	virtual int32_t stringWidth($String* str) override;
	$ints* widths = nullptr;
	int32_t ascent = 0;
	int32_t descent = 0;
	int32_t leading = 0;
	int32_t height = 0;
	int32_t maxAscent = 0;
	int32_t maxDescent = 0;
	int32_t maxHeight = 0;
	int32_t maxAdvance = 0;
	static ::java::util::Hashtable* table;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WFontMetrics_h_