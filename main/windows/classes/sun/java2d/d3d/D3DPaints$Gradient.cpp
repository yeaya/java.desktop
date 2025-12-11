#include <sun/java2d/d3d/D3DPaints$Gradient.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DPaints.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DPaints = ::sun::java2d::d3d::D3DPaints;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DPaints$Gradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(D3DPaints$Gradient::*)()>(&D3DPaints$Gradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _D3DPaints$Gradient_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DPaints$Gradient", "sun.java2d.d3d.D3DPaints", "Gradient", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _D3DPaints$Gradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DPaints$Gradient",
	"sun.java2d.d3d.D3DPaints",
	nullptr,
	nullptr,
	_D3DPaints$Gradient_MethodInfo_,
	nullptr,
	nullptr,
	_D3DPaints$Gradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DPaints"
};

$Object* allocate$D3DPaints$Gradient($Class* clazz) {
	return $of($alloc(D3DPaints$Gradient));
}

void D3DPaints$Gradient::init$() {
	$D3DPaints::init$();
}

bool D3DPaints$Gradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($D3DSurfaceData, dstData, $cast($D3DSurfaceData, $nc(sg2d)->surfaceData));
	$var($D3DGraphicsDevice, gd, $cast($D3DGraphicsDevice, $nc($($nc(dstData)->getDeviceConfiguration()))->getDevice()));
	return $nc(gd)->isCapPresent(0x00010000);
}

D3DPaints$Gradient::D3DPaints$Gradient() {
}

$Class* D3DPaints$Gradient::load$($String* name, bool initialize) {
	$loadClass(D3DPaints$Gradient, name, initialize, &_D3DPaints$Gradient_ClassInfo_, allocate$D3DPaints$Gradient);
	return class$;
}

$Class* D3DPaints$Gradient::class$ = nullptr;

		} // d3d
	} // java2d
} // sun