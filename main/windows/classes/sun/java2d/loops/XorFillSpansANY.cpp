#include <sun/java2d/loops/XorFillSpansANY.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillSpans.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillSpans = ::sun::java2d::loops::FillSpans;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _XorFillSpansANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XorFillSpansANY::*)()>(&XorFillSpansANY::init$))},
	{"FillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/java2d/pipe/SpanIterator;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XorFillSpansANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.XorFillSpansANY",
	"sun.java2d.loops.FillSpans",
	nullptr,
	nullptr,
	_XorFillSpansANY_MethodInfo_
};

$Object* allocate$XorFillSpansANY($Class* clazz) {
	return $of($alloc(XorFillSpansANY));
}

void XorFillSpansANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$FillSpans::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorFillSpansANY::FillSpans$($SunGraphics2D* sg2d, $SurfaceData* sData, $SpanIterator* si) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	$var($ints, span, $new($ints, 4));
	while ($nc(si)->nextSpan(span)) {
		$GeneralRenderer::doSetRect(sData, pw, span->get(0), span->get(1), span->get(2), span->get(3));
	}
}

XorFillSpansANY::XorFillSpansANY() {
}

$Class* XorFillSpansANY::load$($String* name, bool initialize) {
	$loadClass(XorFillSpansANY, name, initialize, &_XorFillSpansANY_ClassInfo_, allocate$XorFillSpansANY);
	return class$;
}

$Class* XorFillSpansANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun