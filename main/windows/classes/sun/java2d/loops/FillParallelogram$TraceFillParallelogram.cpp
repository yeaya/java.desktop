#include <sun/java2d/loops/FillParallelogram$TraceFillParallelogram.h>

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
#include <sun/java2d/loops/FillParallelogram.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillParallelogram = ::sun::java2d::loops::FillParallelogram;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _FillParallelogram$TraceFillParallelogram_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/FillParallelogram;", nullptr, 0, $field(FillParallelogram$TraceFillParallelogram, target)},
	{}
};

$MethodInfo _FillParallelogram$TraceFillParallelogram_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/FillParallelogram;)V", nullptr, $PUBLIC, $method(static_cast<void(FillParallelogram$TraceFillParallelogram::*)($FillParallelogram*)>(&FillParallelogram$TraceFillParallelogram::init$))},
	{"FillParallelogram", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;DDDDDD)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FillParallelogram$TraceFillParallelogram_InnerClassesInfo_[] = {
	{"sun.java2d.loops.FillParallelogram$TraceFillParallelogram", "sun.java2d.loops.FillParallelogram", "TraceFillParallelogram", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FillParallelogram$TraceFillParallelogram_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.FillParallelogram$TraceFillParallelogram",
	"sun.java2d.loops.FillParallelogram",
	nullptr,
	_FillParallelogram$TraceFillParallelogram_FieldInfo_,
	_FillParallelogram$TraceFillParallelogram_MethodInfo_,
	nullptr,
	nullptr,
	_FillParallelogram$TraceFillParallelogram_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.FillParallelogram"
};

$Object* allocate$FillParallelogram$TraceFillParallelogram($Class* clazz) {
	return $of($alloc(FillParallelogram$TraceFillParallelogram));
}

void FillParallelogram$TraceFillParallelogram::init$($FillParallelogram* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$FillParallelogram::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* FillParallelogram$TraceFillParallelogram::traceWrap() {
	return this;
}

void FillParallelogram$TraceFillParallelogram::FillParallelogram$($SunGraphics2D* sg2d, $SurfaceData* dest, double x0, double y0, double dx1, double dy1, double dx2, double dy2) {
	tracePrimitive(this->target);
	$nc(this->target)->FillParallelogram$(sg2d, dest, x0, y0, dx1, dy1, dx2, dy2);
}

FillParallelogram$TraceFillParallelogram::FillParallelogram$TraceFillParallelogram() {
}

$Class* FillParallelogram$TraceFillParallelogram::load$($String* name, bool initialize) {
	$loadClass(FillParallelogram$TraceFillParallelogram, name, initialize, &_FillParallelogram$TraceFillParallelogram_ClassInfo_, allocate$FillParallelogram$TraceFillParallelogram);
	return class$;
}

$Class* FillParallelogram$TraceFillParallelogram::class$ = nullptr;

		} // loops
	} // java2d
} // sun