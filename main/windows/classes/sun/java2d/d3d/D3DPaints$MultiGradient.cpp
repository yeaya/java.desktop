#include <sun/java2d/d3d/D3DPaints$MultiGradient.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/Paint.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DPaints.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

#undef MULTI_MAX_FRACTIONS_D3D

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DPaints = ::sun::java2d::d3d::D3DPaints;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DPaints$MultiGradient_FieldInfo_[] = {
	{"MULTI_MAX_FRACTIONS_D3D", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DPaints$MultiGradient, MULTI_MAX_FRACTIONS_D3D)},
	{}
};

$MethodInfo _D3DPaints$MultiGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(D3DPaints$MultiGradient::*)()>(&D3DPaints$MultiGradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _D3DPaints$MultiGradient_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DPaints$MultiGradient", "sun.java2d.d3d.D3DPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _D3DPaints$MultiGradient_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.java2d.d3d.D3DPaints$MultiGradient",
	"sun.java2d.d3d.D3DPaints",
	nullptr,
	_D3DPaints$MultiGradient_FieldInfo_,
	_D3DPaints$MultiGradient_MethodInfo_,
	nullptr,
	nullptr,
	_D3DPaints$MultiGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DPaints"
};

$Object* allocate$D3DPaints$MultiGradient($Class* clazz) {
	return $of($alloc(D3DPaints$MultiGradient));
}

void D3DPaints$MultiGradient::init$() {
	$D3DPaints::init$();
}

bool D3DPaints$MultiGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($MultipleGradientPaint, paint, $cast($MultipleGradientPaint, $nc(sg2d)->paint));
	if ($nc($($nc(paint)->getFractions()))->length > D3DPaints$MultiGradient::MULTI_MAX_FRACTIONS_D3D) {
		return false;
	}
	$var($D3DSurfaceData, dstData, $cast($D3DSurfaceData, sg2d->surfaceData));
	$var($D3DGraphicsDevice, gd, $cast($D3DGraphicsDevice, $nc($($nc(dstData)->getDeviceConfiguration()))->getDevice()));
	if (!$nc(gd)->isCapPresent(0x00010000)) {
		return false;
	}
	return true;
}

D3DPaints$MultiGradient::D3DPaints$MultiGradient() {
}

$Class* D3DPaints$MultiGradient::load$($String* name, bool initialize) {
	$loadClass(D3DPaints$MultiGradient, name, initialize, &_D3DPaints$MultiGradient_ClassInfo_, allocate$D3DPaints$MultiGradient);
	return class$;
}

$Class* D3DPaints$MultiGradient::class$ = nullptr;

		} // d3d
	} // java2d
} // sun