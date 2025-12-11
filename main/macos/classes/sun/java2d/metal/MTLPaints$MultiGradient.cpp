#include <sun/java2d/metal/MTLPaints$MultiGradient.h>

#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/Paint.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLPaints.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <jcpp.h>

using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLPaints = ::sun::java2d::metal::MTLPaints;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLPaints$MultiGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MTLPaints$MultiGradient::*)()>(&MTLPaints$MultiGradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _MTLPaints$MultiGradient_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLPaints$MultiGradient", "sun.java2d.metal.MTLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MTLPaints$MultiGradient_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.java2d.metal.MTLPaints$MultiGradient",
	"sun.java2d.metal.MTLPaints",
	nullptr,
	nullptr,
	_MTLPaints$MultiGradient_MethodInfo_,
	nullptr,
	nullptr,
	_MTLPaints$MultiGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLPaints"
};

$Object* allocate$MTLPaints$MultiGradient($Class* clazz) {
	return $of($alloc(MTLPaints$MultiGradient));
}

void MTLPaints$MultiGradient::init$() {
	$MTLPaints::init$();
}

bool MTLPaints$MultiGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($MultipleGradientPaint, paint, $cast($MultipleGradientPaint, $nc(sg2d)->paint));
	if ($nc($($nc(paint)->getFractions()))->length > 12) {
		return false;
	}
	$var($MTLSurfaceData, dstData, $cast($MTLSurfaceData, sg2d->surfaceData));
	$var($MTLGraphicsConfig, gc, $nc(dstData)->getMTLGraphicsConfig());
	if (!$nc(gc)->isCapPresent(0x00080000)) {
		return false;
	}
	return true;
}

MTLPaints$MultiGradient::MTLPaints$MultiGradient() {
}

$Class* MTLPaints$MultiGradient::load$($String* name, bool initialize) {
	$loadClass(MTLPaints$MultiGradient, name, initialize, &_MTLPaints$MultiGradient_ClassInfo_, allocate$MTLPaints$MultiGradient);
	return class$;
}

$Class* MTLPaints$MultiGradient::class$ = nullptr;

		} // metal
	} // java2d
} // sun