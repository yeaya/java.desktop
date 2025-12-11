#include <sun/java2d/loops/FillParallelogram.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillParallelogram$TraceFillParallelogram.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillParallelogram$TraceFillParallelogram = ::sun::java2d::loops::FillParallelogram$TraceFillParallelogram;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _FillParallelogram_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillParallelogram, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillParallelogram, primTypeID)},
	{}
};

$MethodInfo _FillParallelogram_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(FillParallelogram::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillParallelogram::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(FillParallelogram::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillParallelogram::init$))},
	{"FillParallelogram", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;DDDDDD)V", nullptr, $PUBLIC | $NATIVE},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/FillParallelogram;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FillParallelogram*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillParallelogram::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_FillParallelogram$ 2

$InnerClassInfo _FillParallelogram_InnerClassesInfo_[] = {
	{"sun.java2d.loops.FillParallelogram$TraceFillParallelogram", "sun.java2d.loops.FillParallelogram", "TraceFillParallelogram", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FillParallelogram_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.FillParallelogram",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_FillParallelogram_FieldInfo_,
	_FillParallelogram_MethodInfo_,
	nullptr,
	nullptr,
	_FillParallelogram_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.FillParallelogram$TraceFillParallelogram"
};

$Object* allocate$FillParallelogram($Class* clazz) {
	return $of($alloc(FillParallelogram));
}

$String* FillParallelogram::methodSignature = nullptr;
int32_t FillParallelogram::primTypeID = 0;

FillParallelogram* FillParallelogram::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(FillParallelogram);
	return $cast(FillParallelogram, $GraphicsPrimitiveMgr::locate(FillParallelogram::primTypeID, srctype, comptype, dsttype));
}

void FillParallelogram::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(FillParallelogram::methodSignature, FillParallelogram::primTypeID, srctype, comptype, dsttype);
}

void FillParallelogram::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, FillParallelogram::methodSignature, FillParallelogram::primTypeID, srctype, comptype, dsttype);
}

void FillParallelogram::FillParallelogram$($SunGraphics2D* sg2d, $SurfaceData* dest, double x0, double y0, double dx1, double dy1, double dx2, double dy2) {
	$prepareNative(FillParallelogram, FillParallelogram$, void, $SunGraphics2D* sg2d, $SurfaceData* dest, double x0, double y0, double dx1, double dy1, double dx2, double dy2);
	$invokeNative(sg2d, dest, x0, y0, dx1, dy1, dx2, dy2);
	$finishNative();
}

$GraphicsPrimitive* FillParallelogram::traceWrap() {
	return $new($FillParallelogram$TraceFillParallelogram, this);
}

void clinit$FillParallelogram($Class* class$) {
	$assignStatic(FillParallelogram::methodSignature, "FillParallelogram(...)"_s->toString());
	FillParallelogram::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

FillParallelogram::FillParallelogram() {
}

$Class* FillParallelogram::load$($String* name, bool initialize) {
	$loadClass(FillParallelogram, name, initialize, &_FillParallelogram_ClassInfo_, clinit$FillParallelogram, allocate$FillParallelogram);
	return class$;
}

$Class* FillParallelogram::class$ = nullptr;

		} // loops
	} // java2d
} // sun