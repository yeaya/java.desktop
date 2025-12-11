#include <sun/java2d/CRenderer$Tracer.h>

#include <java/nio/FloatBuffer.h>
#include <java/nio/IntBuffer.h>
#include <sun/java2d/CRenderer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $CRenderer = ::sun::java2d::CRenderer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;

namespace sun {
	namespace java2d {

$MethodInfo _CRenderer$Tracer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CRenderer$Tracer::*)()>(&CRenderer$Tracer::init$))},
	{"doArc", "(Lsun/java2d/SurfaceData;FFFFFFIZ)V", nullptr, 0},
	{"doImage", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;ZZIIIIIIIIII)V", nullptr, 0},
	{"doLine", "(Lsun/java2d/SurfaceData;FFFF)V", nullptr, 0},
	{"doOval", "(Lsun/java2d/SurfaceData;FFFFZ)V", nullptr, 0},
	{"doPoly", "(Lsun/java2d/SurfaceData;[I[IIZZ)V", nullptr, 0},
	{"doRect", "(Lsun/java2d/SurfaceData;FFFFZ)V", nullptr, 0},
	{"doRoundRect", "(Lsun/java2d/SurfaceData;FFFFFFZ)V", nullptr, 0},
	{"doShape", "(Lsun/java2d/SurfaceData;ILjava/nio/FloatBuffer;Ljava/nio/IntBuffer;IZZ)V", nullptr, 0},
	{}
};

$InnerClassInfo _CRenderer$Tracer_InnerClassesInfo_[] = {
	{"sun.java2d.CRenderer$Tracer", "sun.java2d.CRenderer", "Tracer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CRenderer$Tracer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.CRenderer$Tracer",
	"sun.java2d.CRenderer",
	nullptr,
	nullptr,
	_CRenderer$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_CRenderer$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.CRenderer"
};

$Object* allocate$CRenderer$Tracer($Class* clazz) {
	return $of($alloc(CRenderer$Tracer));
}

void CRenderer$Tracer::init$() {
	$CRenderer::init$();
}

void CRenderer$Tracer::doLine($SurfaceData* sData, float x1, float y1, float x2, float y2) {
	$GraphicsPrimitive::tracePrimitive("QuartzLine"_s);
	$CRenderer::doLine(sData, x1, y1, x2, y2);
}

void CRenderer$Tracer::doRect($SurfaceData* sData, float x, float y, float width, float height, bool isfill) {
	$GraphicsPrimitive::tracePrimitive("QuartzRect"_s);
	$CRenderer::doRect(sData, x, y, width, height, isfill);
}

void CRenderer$Tracer::doRoundRect($SurfaceData* sData, float x, float y, float width, float height, float arcW, float arcH, bool isfill) {
	$GraphicsPrimitive::tracePrimitive("QuartzRoundRect"_s);
	$CRenderer::doRoundRect(sData, x, y, width, height, arcW, arcH, isfill);
}

void CRenderer$Tracer::doOval($SurfaceData* sData, float x, float y, float width, float height, bool isfill) {
	$GraphicsPrimitive::tracePrimitive("QuartzOval"_s);
	$CRenderer::doOval(sData, x, y, width, height, isfill);
}

void CRenderer$Tracer::doArc($SurfaceData* sData, float x, float y, float width, float height, float angleStart, float angleExtent, int32_t type, bool isfill) {
	$GraphicsPrimitive::tracePrimitive("QuartzArc"_s);
	$CRenderer::doArc(sData, x, y, width, height, angleStart, angleExtent, type, isfill);
}

void CRenderer$Tracer::doPoly($SurfaceData* sData, $ints* xpoints, $ints* ypoints, int32_t npoints, bool ispolygon, bool isfill) {
	$GraphicsPrimitive::tracePrimitive("QuartzDoPoly"_s);
	$CRenderer::doPoly(sData, xpoints, ypoints, npoints, ispolygon, isfill);
}

void CRenderer$Tracer::doShape($SurfaceData* sData, int32_t length, $FloatBuffer* coordinates, $IntBuffer* types, int32_t windingRule, bool isfill, bool shouldApplyOffset) {
	$GraphicsPrimitive::tracePrimitive("QuartzFillOrDrawShape"_s);
	$CRenderer::doShape(sData, length, coordinates, types, windingRule, isfill, shouldApplyOffset);
}

void CRenderer$Tracer::doImage($SurfaceData* sData, $SurfaceData* img, bool fliph, bool flipv, int32_t w, int32_t h, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh) {
	$GraphicsPrimitive::tracePrimitive("QuartzDrawImage"_s);
	$CRenderer::doImage(sData, img, fliph, flipv, w, h, sx, sy, sw, sh, dx, dy, dw, dh);
}

CRenderer$Tracer::CRenderer$Tracer() {
}

$Class* CRenderer$Tracer::load$($String* name, bool initialize) {
	$loadClass(CRenderer$Tracer, name, initialize, &_CRenderer$Tracer_ClassInfo_, allocate$CRenderer$Tracer);
	return class$;
}

$Class* CRenderer$Tracer::class$ = nullptr;

	} // java2d
} // sun