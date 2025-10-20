#include <sun/java2d/loops/SetFillSpansANY.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _SetFillSpansANY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SetFillSpansANY::*)()>(&SetFillSpansANY::init$))},
	{"FillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/java2d/pipe/SpanIterator;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SetFillSpansANY_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.SetFillSpansANY",
	"sun.java2d.loops.FillSpans",
	nullptr,
	nullptr,
	_SetFillSpansANY_MethodInfo_
};

$Object* allocate$SetFillSpansANY($Class* clazz) {
	return $of($alloc(SetFillSpansANY));
}

void SetFillSpansANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$FillSpans::init$($SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any);
}

void SetFillSpansANY::FillSpans$($SunGraphics2D* sg2d, $SurfaceData* sData, $SpanIterator* si) {
	$useLocalCurrentObjectStackCache();
	$var($PixelWriter, pw, $GeneralRenderer::createSolidPixelWriter(sg2d, sData));
	$var($ints, span, $new($ints, 4));
	while ($nc(si)->nextSpan(span)) {
		$GeneralRenderer::doSetRect(sData, pw, span->get(0), span->get(1), span->get(2), span->get(3));
	}
}

SetFillSpansANY::SetFillSpansANY() {
}

$Class* SetFillSpansANY::load$($String* name, bool initialize) {
	$loadClass(SetFillSpansANY, name, initialize, &_SetFillSpansANY_ClassInfo_, allocate$SetFillSpansANY);
	return class$;
}

$Class* SetFillSpansANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun