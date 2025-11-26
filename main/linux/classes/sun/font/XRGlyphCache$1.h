#ifndef _sun_font_XRGlyphCache$1_h_
#define _sun_font_XRGlyphCache$1_h_
//$ class sun.font.XRGlyphCache$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace sun {
	namespace font {
		class XRGlyphCache;
		class XRGlyphCacheEntry;
	}
}

namespace sun {
	namespace font {

class XRGlyphCache$1 : public ::java::util::Comparator {
	$class(XRGlyphCache$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	XRGlyphCache$1();
	void init$(::sun::font::XRGlyphCache* this$0);
	virtual int32_t compare(::sun::font::XRGlyphCacheEntry* e1, ::sun::font::XRGlyphCacheEntry* e2);
	virtual int32_t compare(Object$* e1, Object$* e2) override;
	::sun::font::XRGlyphCache* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_XRGlyphCache$1_h_