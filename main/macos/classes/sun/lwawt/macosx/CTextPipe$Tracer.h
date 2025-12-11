#ifndef _sun_lwawt_macosx_CTextPipe$Tracer_h_
#define _sun_lwawt_macosx_CTextPipe$Tracer_h_
//$ class sun.lwawt.macosx.CTextPipe$Tracer
//$ extends sun.lwawt.macosx.CTextPipe

#include <java/lang/Array.h>
#include <sun/lwawt/macosx/CTextPipe.h>

namespace java {
	namespace awt {
		namespace font {
			class GlyphVector;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CTextPipe$Tracer : public ::sun::lwawt::macosx::CTextPipe {
	$class(CTextPipe$Tracer, $NO_CLASS_INIT, ::sun::lwawt::macosx::CTextPipe)
public:
	CTextPipe$Tracer();
	using ::sun::lwawt::macosx::CTextPipe::doDrawString;
	void init$();
	virtual void doDrawGlyphs(::sun::java2d::SurfaceData* sData, int64_t nativeStrikePtr, ::java::awt::font::GlyphVector* gV, float x, float y) override;
	virtual void doDrawString(::sun::java2d::SurfaceData* sData, int64_t nativeStrikePtr, $String* s, float x, float y);
	virtual void doOneUnicode(::sun::java2d::SurfaceData* sData, int64_t nativeStrikePtr, char16_t aUnicode, float x, float y) override;
	virtual void doUnicodes(::sun::java2d::SurfaceData* sData, int64_t nativeStrikePtr, $chars* unicodes, int32_t offset, int32_t length, float x, float y) override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CTextPipe$Tracer_h_