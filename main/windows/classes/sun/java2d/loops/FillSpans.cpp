#include <sun/java2d/loops/FillSpans.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillSpans$TraceFillSpans.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillSpans$TraceFillSpans = ::sun::java2d::loops::FillSpans$TraceFillSpans;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _FillSpans_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillSpans, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillSpans, primTypeID)},
	{}
};

$MethodInfo _FillSpans_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(FillSpans::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillSpans::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(FillSpans::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillSpans::init$))},
	{"FillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IJLsun/java2d/pipe/SpanIterator;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(FillSpans::*)($SunGraphics2D*,$SurfaceData*,int32_t,int64_t,$SpanIterator*)>(&FillSpans::FillSpans$))},
	{"FillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/java2d/pipe/SpanIterator;)V", nullptr, $PUBLIC},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/FillSpans;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FillSpans*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillSpans::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_FillSpans$ 2

$InnerClassInfo _FillSpans_InnerClassesInfo_[] = {
	{"sun.java2d.loops.FillSpans$TraceFillSpans", "sun.java2d.loops.FillSpans", "TraceFillSpans", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FillSpans_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.FillSpans",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_FillSpans_FieldInfo_,
	_FillSpans_MethodInfo_,
	nullptr,
	nullptr,
	_FillSpans_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.FillSpans$TraceFillSpans"
};

$Object* allocate$FillSpans($Class* clazz) {
	return $of($alloc(FillSpans));
}

$String* FillSpans::methodSignature = nullptr;
int32_t FillSpans::primTypeID = 0;

FillSpans* FillSpans::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(FillSpans);
	return $cast(FillSpans, $GraphicsPrimitiveMgr::locate(FillSpans::primTypeID, srctype, comptype, dsttype));
}

void FillSpans::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(FillSpans::methodSignature, FillSpans::primTypeID, srctype, comptype, dsttype);
}

void FillSpans::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, FillSpans::methodSignature, FillSpans::primTypeID, srctype, comptype, dsttype);
}

void FillSpans::FillSpans$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t pixel, int64_t pIterator, $SpanIterator* si) {
	$prepareNative(FillSpans, FillSpans$, void, $SunGraphics2D* sg2d, $SurfaceData* dest, int32_t pixel, int64_t pIterator, $SpanIterator* si);
	$invokeNative(FillSpans, FillSpans$, sg2d, dest, pixel, pIterator, si);
	$finishNative();
}

void FillSpans::FillSpans$($SunGraphics2D* sg2d, $SurfaceData* dest, $SpanIterator* si) {
	FillSpans$(sg2d, dest, $nc(sg2d)->pixel, $nc(si)->getNativeIterator(), si);
}

$GraphicsPrimitive* FillSpans::traceWrap() {
	return $new($FillSpans$TraceFillSpans, this);
}

void clinit$FillSpans($Class* class$) {
	$assignStatic(FillSpans::methodSignature, "FillSpans(...)"_s->toString());
	FillSpans::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

FillSpans::FillSpans() {
}

$Class* FillSpans::load$($String* name, bool initialize) {
	$loadClass(FillSpans, name, initialize, &_FillSpans_ClassInfo_, clinit$FillSpans, allocate$FillSpans);
	return class$;
}

$Class* FillSpans::class$ = nullptr;

		} // loops
	} // java2d
} // sun