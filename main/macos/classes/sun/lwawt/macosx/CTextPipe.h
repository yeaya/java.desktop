#ifndef _sun_lwawt_macosx_CTextPipe_h_
#define _sun_lwawt_macosx_CTextPipe_h_
//$ class sun.lwawt.macosx.CTextPipe
//$ extends sun.java2d.pipe.TextPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/TextPipe.h>

namespace java {
	namespace awt {
		namespace font {
			class GlyphVector;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CTextPipe : public ::sun::java2d::pipe::TextPipe {
	$class(CTextPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::TextPipe)
public:
	CTextPipe();
	void init$();
	virtual void doDrawGlyphs(::sun::java2d::SurfaceData* sData, int64_t nativeStrikePtr, ::java::awt::font::GlyphVector* gV, float x, float y);
	virtual void doDrawString(::sun::java2d::SurfaceData* sData, int64_t nativeStrikePtr, $String* s, double x, double y);
	virtual void doOneUnicode(::sun::java2d::SurfaceData* sData, int64_t nativeStrikePtr, char16_t aUnicode, float x, float y);
	virtual void doUnicodes(::sun::java2d::SurfaceData* sData, int64_t nativeStrikePtr, $chars* unicodes, int32_t offset, int32_t length, float x, float y);
	virtual void drawChars(::sun::java2d::SunGraphics2D* sg2d, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual void drawGlyphVector(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::font::GlyphVector* gV, float x, float y) override;
	virtual void drawGlyphVectorAsShape(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::font::GlyphVector* gv, float x, float y);
	virtual void drawString(::sun::java2d::SunGraphics2D* sg2d, $String* s, double x, double y) override;
	virtual void drawTextAsShape(::sun::java2d::SunGraphics2D* sg2d, $String* s, double x, double y);
	virtual int64_t getNativeStrikePtr(::sun::java2d::SunGraphics2D* sg2d);
	virtual ::sun::lwawt::macosx::CTextPipe* traceWrap();
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CTextPipe_h_