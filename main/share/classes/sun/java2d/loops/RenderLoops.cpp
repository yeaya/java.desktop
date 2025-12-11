#include <sun/java2d/loops/RenderLoops.h>

#include <sun/java2d/loops/DrawGlyphList.h>
#include <sun/java2d/loops/DrawGlyphListAA.h>
#include <sun/java2d/loops/DrawGlyphListColor.h>
#include <sun/java2d/loops/DrawGlyphListLCD.h>
#include <sun/java2d/loops/DrawLine.h>
#include <sun/java2d/loops/DrawParallelogram.h>
#include <sun/java2d/loops/DrawPath.h>
#include <sun/java2d/loops/DrawPolygons.h>
#include <sun/java2d/loops/DrawRect.h>
#include <sun/java2d/loops/FillParallelogram.h>
#include <sun/java2d/loops/FillPath.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/FillSpans.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _RenderLoops_FieldInfo_[] = {
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderLoops, primTypeID)},
	{"drawLineLoop", "Lsun/java2d/loops/DrawLine;", nullptr, $PUBLIC, $field(RenderLoops, drawLineLoop)},
	{"fillRectLoop", "Lsun/java2d/loops/FillRect;", nullptr, $PUBLIC, $field(RenderLoops, fillRectLoop)},
	{"drawRectLoop", "Lsun/java2d/loops/DrawRect;", nullptr, $PUBLIC, $field(RenderLoops, drawRectLoop)},
	{"drawPolygonsLoop", "Lsun/java2d/loops/DrawPolygons;", nullptr, $PUBLIC, $field(RenderLoops, drawPolygonsLoop)},
	{"drawPathLoop", "Lsun/java2d/loops/DrawPath;", nullptr, $PUBLIC, $field(RenderLoops, drawPathLoop)},
	{"fillPathLoop", "Lsun/java2d/loops/FillPath;", nullptr, $PUBLIC, $field(RenderLoops, fillPathLoop)},
	{"fillSpansLoop", "Lsun/java2d/loops/FillSpans;", nullptr, $PUBLIC, $field(RenderLoops, fillSpansLoop)},
	{"fillParallelogramLoop", "Lsun/java2d/loops/FillParallelogram;", nullptr, $PUBLIC, $field(RenderLoops, fillParallelogramLoop)},
	{"drawParallelogramLoop", "Lsun/java2d/loops/DrawParallelogram;", nullptr, $PUBLIC, $field(RenderLoops, drawParallelogramLoop)},
	{"drawGlyphListLoop", "Lsun/java2d/loops/DrawGlyphList;", nullptr, $PUBLIC, $field(RenderLoops, drawGlyphListLoop)},
	{"drawGlyphListAALoop", "Lsun/java2d/loops/DrawGlyphListAA;", nullptr, $PUBLIC, $field(RenderLoops, drawGlyphListAALoop)},
	{"drawGlyphListLCDLoop", "Lsun/java2d/loops/DrawGlyphListLCD;", nullptr, $PUBLIC, $field(RenderLoops, drawGlyphListLCDLoop)},
	{"drawGlyphListColorLoop", "Lsun/java2d/loops/DrawGlyphListColor;", nullptr, $PUBLIC, $field(RenderLoops, drawGlyphListColorLoop)},
	{}
};

$MethodInfo _RenderLoops_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RenderLoops::*)()>(&RenderLoops::init$))},
	{}
};

$ClassInfo _RenderLoops_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.RenderLoops",
	"java.lang.Object",
	nullptr,
	_RenderLoops_FieldInfo_,
	_RenderLoops_MethodInfo_
};

$Object* allocate$RenderLoops($Class* clazz) {
	return $of($alloc(RenderLoops));
}

int32_t RenderLoops::primTypeID = 0;

void RenderLoops::init$() {
}

void clinit$RenderLoops($Class* class$) {
	RenderLoops::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

RenderLoops::RenderLoops() {
}

$Class* RenderLoops::load$($String* name, bool initialize) {
	$loadClass(RenderLoops, name, initialize, &_RenderLoops_ClassInfo_, clinit$RenderLoops, allocate$RenderLoops);
	return class$;
}

$Class* RenderLoops::class$ = nullptr;

		} // loops
	} // java2d
} // sun