#ifndef _sun_font_XRGlyphCacheEntry_h_
#define _sun_font_XRGlyphCacheEntry_h_
//$ class sun.font.XRGlyphCacheEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ByteArrayOutputStream;
	}
}
namespace sun {
	namespace font {
		class GlyphList;
	}
}

namespace sun {
	namespace font {

class XRGlyphCacheEntry : public ::java::lang::Object {
	$class(XRGlyphCacheEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XRGlyphCacheEntry();
	void init$(int64_t glyphInfoPtr, ::sun::font::GlyphList* gl);
	virtual int32_t getDestinationRowBytes(bool listContainsLCDGlyphs);
	virtual int32_t getGlyphDataLenth(bool listContainsLCDGlyphs);
	static int32_t getGlyphID(int64_t glyphInfoPtr);
	virtual int32_t getGlyphID();
	virtual int64_t getGlyphInfoPtr();
	virtual int32_t getGlyphSet();
	virtual int32_t getHeight();
	virtual int32_t getLastUsed();
	virtual int32_t getPaddedWidth(bool listContainsLCDGlyphs);
	virtual int32_t getPixelCnt();
	virtual int32_t getSourceRowBytes();
	virtual float getTopLeftXOffset();
	virtual float getTopLeftYOffset();
	virtual int32_t getWidth();
	virtual float getXAdvance();
	virtual int32_t getXOff();
	virtual float getYAdvance();
	virtual int32_t getYOff();
	virtual bool isGrayscale(bool listContainsLCDGlyphs);
	virtual bool isPinned();
	static void setGlyphID(int64_t glyphInfoPtr, int32_t id);
	virtual void setGlyphID(int32_t id);
	virtual void setGlyphSet(int32_t glyphSet);
	virtual void setLastUsed(int32_t lastUsed);
	virtual void setPinned();
	virtual void setUnpinned();
	virtual void writePixelData(::java::io::ByteArrayOutputStream* os, bool uploadAsLCD);
	int64_t glyphInfoPtr = 0;
	int32_t lastUsed = 0;
	bool pinned = false;
	int32_t xOff = 0;
	int32_t yOff = 0;
	int32_t glyphSet = 0;
};

	} // font
} // sun

#endif // _sun_font_XRGlyphCacheEntry_h_