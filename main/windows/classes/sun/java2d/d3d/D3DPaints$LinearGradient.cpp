#include <sun/java2d/d3d/D3DPaints$LinearGradient.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Paint.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DPaints$MultiGradient.h>
#include <sun/java2d/d3d/D3DPaints.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

#undef LINEAR_RGB
#undef REPEAT

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DPaints$MultiGradient = ::sun::java2d::d3d::D3DPaints$MultiGradient;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DPaints$LinearGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(D3DPaints$LinearGradient::*)()>(&D3DPaints$LinearGradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _D3DPaints$LinearGradient_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DPaints$LinearGradient", "sun.java2d.d3d.D3DPaints", "LinearGradient", $PRIVATE | $STATIC},
	{"sun.java2d.d3d.D3DPaints$MultiGradient", "sun.java2d.d3d.D3DPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _D3DPaints$LinearGradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DPaints$LinearGradient",
	"sun.java2d.d3d.D3DPaints$MultiGradient",
	nullptr,
	nullptr,
	_D3DPaints$LinearGradient_MethodInfo_,
	nullptr,
	nullptr,
	_D3DPaints$LinearGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DPaints"
};

$Object* allocate$D3DPaints$LinearGradient($Class* clazz) {
	return $of($alloc(D3DPaints$LinearGradient));
}

void D3DPaints$LinearGradient::init$() {
	$D3DPaints$MultiGradient::init$();
}

bool D3DPaints$LinearGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($LinearGradientPaint, paint, $cast($LinearGradientPaint, $nc(sg2d)->paint));
	bool var$1 = $nc($($nc(paint)->getFractions()))->length == 2;
	$init($MultipleGradientPaint$CycleMethod);
	bool var$0 = var$1 && paint->getCycleMethod() != $MultipleGradientPaint$CycleMethod::REPEAT;
	$init($MultipleGradientPaint$ColorSpaceType);
	if (var$0 && paint->getColorSpace() != $MultipleGradientPaint$ColorSpaceType::LINEAR_RGB) {
		$var($D3DSurfaceData, dstData, $cast($D3DSurfaceData, sg2d->surfaceData));
		$var($D3DGraphicsDevice, gd, $cast($D3DGraphicsDevice, $nc($($nc(dstData)->getDeviceConfiguration()))->getDevice()));
		if ($nc(gd)->isCapPresent(0x00010000)) {
			return true;
		}
	}
	return $D3DPaints$MultiGradient::isPaintValid(sg2d);
}

D3DPaints$LinearGradient::D3DPaints$LinearGradient() {
}

$Class* D3DPaints$LinearGradient::load$($String* name, bool initialize) {
	$loadClass(D3DPaints$LinearGradient, name, initialize, &_D3DPaints$LinearGradient_ClassInfo_, allocate$D3DPaints$LinearGradient);
	return class$;
}

$Class* D3DPaints$LinearGradient::class$ = nullptr;

		} // d3d
	} // java2d
} // sun