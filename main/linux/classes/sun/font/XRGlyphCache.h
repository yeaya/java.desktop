#ifndef _sun_font_XRGlyphCache_h_
#define _sun_font_XRGlyphCache_h_
//$ class sun.font.XRGlyphCache
//$ extends sun.font.GlyphDisposedListener

#include <java/lang/Array.h>
#include <sun/font/GlyphDisposedListener.h>

#pragma push_macro("MAX_CACHED_PIXELS")
#undef MAX_CACHED_PIXELS

namespace java {
	namespace util {
		class ArrayList;
		class HashMap;
		class List;
	}
}
namespace sun {
	namespace font {
		class GlyphList;
		class XRGlyphCacheEntry;
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class GrowableIntArray;
			class MutableInteger;
			class XRBackend;
			class XRCompositeManager;
		}
	}
}

namespace sun {
	namespace font {

class XRGlyphCache : public ::sun::font::GlyphDisposedListener {
	$class(XRGlyphCache, $NO_CLASS_INIT, ::sun::font::GlyphDisposedListener)
public:
	XRGlyphCache();
	void init$(::sun::java2d::xr::XRCompositeManager* maskBuf);
	virtual $Array<::sun::font::XRGlyphCacheEntry>* cacheGlyphs(::sun::font::GlyphList* glyphList);
	virtual void clearCache($Array<::sun::font::XRGlyphCacheEntry>* glyps);
	virtual bool containsLCDGlyphs(::java::util::List* entries);
	void freeGlyphs(::sun::java2d::xr::GrowableIntArray* glyphIdList);
	virtual $bytes* generateGlyphImageStream(::java::util::List* glyphList);
	virtual ::sun::font::XRGlyphCacheEntry* getEntryForPointer(int64_t imgPtr);
	virtual int32_t getFreeGlyphID();
	virtual void glyphDisposed(::java::util::ArrayList* glyphPtrList) override;
	virtual $Array<::java::util::List>* seperateGlyphTypes(::java::util::List* glyphList, bool containsLCDGlyphs);
	virtual void uploadGlyphs($Array<::sun::font::XRGlyphCacheEntry>* glyphs, ::java::util::ArrayList* uncachedGlyphs, ::sun::font::GlyphList* gl, $ints* glIndices);
	::sun::java2d::xr::XRBackend* con = nullptr;
	::sun::java2d::xr::XRCompositeManager* maskBuffer = nullptr;
	::java::util::HashMap* cacheMap = nullptr;
	int32_t nextID = 0;
	::sun::java2d::xr::MutableInteger* tmp = nullptr;
	int32_t grayGlyphSet = 0;
	int32_t lcdGlyphSet = 0;
	int32_t time = 0;
	int32_t cachedPixels = 0;
	static const int32_t MAX_CACHED_PIXELS = 0x000186A0;
	::java::util::ArrayList* freeGlyphIDs = nullptr;
	static const bool batchGlyphUpload = true;
};

	} // font
} // sun

#pragma pop_macro("MAX_CACHED_PIXELS")

#endif // _sun_font_XRGlyphCache_h_