#include <sun/java2d/windows/GDIRenderer$Tracer.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/Path2D$Float.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/windows/GDIRenderer.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $Region = ::sun::java2d::pipe::Region;
using $GDIRenderer = ::sun::java2d::windows::GDIRenderer;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace java2d {
		namespace windows {

$MethodInfo _GDIRenderer$Tracer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GDIRenderer$Tracer::*)()>(&GDIRenderer$Tracer::init$))},
	{"devCopyArea", "(Lsun/java2d/windows/GDIWindowSurfaceData;IIIIII)V", nullptr, $PUBLIC},
	{"doDrawArc", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIIIII)V", nullptr, 0},
	{"doDrawLine", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, 0},
	{"doDrawOval", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, 0},
	{"doDrawPoly", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;III[I[IIZ)V", nullptr, 0},
	{"doDrawRect", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, 0},
	{"doDrawRoundRect", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIIIII)V", nullptr, 0},
	{"doFillArc", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIIIII)V", nullptr, 0},
	{"doFillOval", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, 0},
	{"doFillPoly", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;III[I[II)V", nullptr, 0},
	{"doFillRect", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIII)V", nullptr, 0},
	{"doFillRoundRect", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIIIIII)V", nullptr, 0},
	{"doShape", "(Lsun/java2d/windows/GDIWindowSurfaceData;Lsun/java2d/pipe/Region;Ljava/awt/Composite;IIILjava/awt/geom/Path2D$Float;Z)V", nullptr, 0},
	{}
};

$InnerClassInfo _GDIRenderer$Tracer_InnerClassesInfo_[] = {
	{"sun.java2d.windows.GDIRenderer$Tracer", "sun.java2d.windows.GDIRenderer", "Tracer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _GDIRenderer$Tracer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.windows.GDIRenderer$Tracer",
	"sun.java2d.windows.GDIRenderer",
	nullptr,
	nullptr,
	_GDIRenderer$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_GDIRenderer$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.windows.GDIRenderer"
};

$Object* allocate$GDIRenderer$Tracer($Class* clazz) {
	return $of($alloc(GDIRenderer$Tracer));
}

void GDIRenderer$Tracer::init$() {
	$GDIRenderer::init$();
}

void GDIRenderer$Tracer::doDrawLine($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$GraphicsPrimitive::tracePrimitive("GDIDrawLine"_s);
	$GDIRenderer::doDrawLine(sData, clip, comp, color, x1, y1, x2, y2);
}

void GDIRenderer$Tracer::doDrawRect($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("GDIDrawRect"_s);
	$GDIRenderer::doDrawRect(sData, clip, comp, color, x, y, w, h);
}

void GDIRenderer$Tracer::doDrawRoundRect($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	$GraphicsPrimitive::tracePrimitive("GDIDrawRoundRect"_s);
	$GDIRenderer::doDrawRoundRect(sData, clip, comp, color, x, y, w, h, arcW, arcH);
}

void GDIRenderer$Tracer::doDrawOval($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("GDIDrawOval"_s);
	$GDIRenderer::doDrawOval(sData, clip, comp, color, x, y, w, h);
}

void GDIRenderer$Tracer::doDrawArc($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) {
	$GraphicsPrimitive::tracePrimitive("GDIDrawArc"_s);
	$GDIRenderer::doDrawArc(sData, clip, comp, color, x, y, w, h, angleStart, angleExtent);
}

void GDIRenderer$Tracer::doDrawPoly($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed) {
	$GraphicsPrimitive::tracePrimitive("GDIDrawPoly"_s);
	$GDIRenderer::doDrawPoly(sData, clip, comp, color, transx, transy, xpoints, ypoints, npoints, isclosed);
}

void GDIRenderer$Tracer::doFillRect($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("GDIFillRect"_s);
	$GDIRenderer::doFillRect(sData, clip, comp, color, x, y, w, h);
}

void GDIRenderer$Tracer::doFillRoundRect($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	$GraphicsPrimitive::tracePrimitive("GDIFillRoundRect"_s);
	$GDIRenderer::doFillRoundRect(sData, clip, comp, color, x, y, w, h, arcW, arcH);
}

void GDIRenderer$Tracer::doFillOval($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("GDIFillOval"_s);
	$GDIRenderer::doFillOval(sData, clip, comp, color, x, y, w, h);
}

void GDIRenderer$Tracer::doFillArc($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) {
	$GraphicsPrimitive::tracePrimitive("GDIFillArc"_s);
	$GDIRenderer::doFillArc(sData, clip, comp, color, x, y, w, h, angleStart, angleExtent);
}

void GDIRenderer$Tracer::doFillPoly($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$GraphicsPrimitive::tracePrimitive("GDIFillPoly"_s);
	$GDIRenderer::doFillPoly(sData, clip, comp, color, transx, transy, xpoints, ypoints, npoints);
}

void GDIRenderer$Tracer::doShape($GDIWindowSurfaceData* sData, $Region* clip, $Composite* comp, int32_t color, int32_t transX, int32_t transY, $Path2D$Float* p2df, bool isfill) {
	$GraphicsPrimitive::tracePrimitive(isfill ? $of("GDIFillShape"_s) : $of("GDIDrawShape"_s));
	$GDIRenderer::doShape(sData, clip, comp, color, transX, transY, p2df, isfill);
}

void GDIRenderer$Tracer::devCopyArea($GDIWindowSurfaceData* sData, int32_t srcx, int32_t srcy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$GraphicsPrimitive::tracePrimitive("GDICopyArea"_s);
	$GDIRenderer::devCopyArea(sData, srcx, srcy, dx, dy, w, h);
}

GDIRenderer$Tracer::GDIRenderer$Tracer() {
}

$Class* GDIRenderer$Tracer::load$($String* name, bool initialize) {
	$loadClass(GDIRenderer$Tracer, name, initialize, &_GDIRenderer$Tracer_ClassInfo_, allocate$GDIRenderer$Tracer);
	return class$;
}

$Class* GDIRenderer$Tracer::class$ = nullptr;

		} // windows
	} // java2d
} // sun