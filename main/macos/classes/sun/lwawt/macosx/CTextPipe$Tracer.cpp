#include <sun/lwawt/macosx/CTextPipe$Tracer.h>

#include <java/awt/font/GlyphVector.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/lwawt/macosx/CTextPipe.h>
#include <jcpp.h>

using $GlyphVector = ::java::awt::font::GlyphVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $CTextPipe = ::sun::lwawt::macosx::CTextPipe;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CTextPipe$Tracer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CTextPipe$Tracer::*)()>(&CTextPipe$Tracer::init$))},
	{"doDrawGlyphs", "(Lsun/java2d/SurfaceData;JLjava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC},
	{"doDrawString", "(Lsun/java2d/SurfaceData;JLjava/lang/String;FF)V", nullptr, 0},
	{"doOneUnicode", "(Lsun/java2d/SurfaceData;JCFF)V", nullptr, $PUBLIC},
	{"doUnicodes", "(Lsun/java2d/SurfaceData;J[CIIFF)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CTextPipe$Tracer_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CTextPipe$Tracer", "sun.lwawt.macosx.CTextPipe", "Tracer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CTextPipe$Tracer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CTextPipe$Tracer",
	"sun.lwawt.macosx.CTextPipe",
	nullptr,
	nullptr,
	_CTextPipe$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_CTextPipe$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CTextPipe"
};

$Object* allocate$CTextPipe$Tracer($Class* clazz) {
	return $of($alloc(CTextPipe$Tracer));
}

void CTextPipe$Tracer::init$() {
	$CTextPipe::init$();
}

void CTextPipe$Tracer::doDrawString($SurfaceData* sData, int64_t nativeStrikePtr, $String* s, float x, float y) {
	$GraphicsPrimitive::tracePrimitive("QuartzDrawString"_s);
	$CTextPipe::doDrawString(sData, nativeStrikePtr, s, x, y);
}

void CTextPipe$Tracer::doDrawGlyphs($SurfaceData* sData, int64_t nativeStrikePtr, $GlyphVector* gV, float x, float y) {
	$GraphicsPrimitive::tracePrimitive("QuartzDrawGlyphs"_s);
	$CTextPipe::doDrawGlyphs(sData, nativeStrikePtr, gV, x, y);
}

void CTextPipe$Tracer::doUnicodes($SurfaceData* sData, int64_t nativeStrikePtr, $chars* unicodes, int32_t offset, int32_t length, float x, float y) {
	$GraphicsPrimitive::tracePrimitive("QuartzDrawUnicodes"_s);
	$CTextPipe::doUnicodes(sData, nativeStrikePtr, unicodes, offset, length, x, y);
}

void CTextPipe$Tracer::doOneUnicode($SurfaceData* sData, int64_t nativeStrikePtr, char16_t aUnicode, float x, float y) {
	$GraphicsPrimitive::tracePrimitive("QuartzDrawUnicode"_s);
	$CTextPipe::doOneUnicode(sData, nativeStrikePtr, aUnicode, x, y);
}

CTextPipe$Tracer::CTextPipe$Tracer() {
}

$Class* CTextPipe$Tracer::load$($String* name, bool initialize) {
	$loadClass(CTextPipe$Tracer, name, initialize, &_CTextPipe$Tracer_ClassInfo_, allocate$CTextPipe$Tracer);
	return class$;
}

$Class* CTextPipe$Tracer::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun