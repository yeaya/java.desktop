#include <sun/java2d/d3d/D3DSurfaceToGDIWindowSurfaceScale.h>

#include <java/awt/Composite.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/d3d/D3DVolatileSurfaceManager.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DVolatileSurfaceManager = ::sun::java2d::d3d::D3DVolatileSurfaceManager;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DSurfaceToGDIWindowSurfaceScale_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DSurfaceToGDIWindowSurfaceScale::*)()>(&D3DSurfaceToGDIWindowSurfaceScale::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DSurfaceToGDIWindowSurfaceScale_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceToGDIWindowSurfaceScale",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	nullptr,
	_D3DSurfaceToGDIWindowSurfaceScale_MethodInfo_
};

$Object* allocate$D3DSurfaceToGDIWindowSurfaceScale($Class* clazz) {
	return $of($alloc(D3DSurfaceToGDIWindowSurfaceScale));
}

void D3DSurfaceToGDIWindowSurfaceScale::init$() {
	$init($D3DSurfaceData);
	$init($CompositeType);
	$init($GDIWindowSurfaceData);
	$ScaledBlit::init$($D3DSurfaceData::D3DSurface, $CompositeType::AnyAlpha, $GDIWindowSurfaceData::AnyGdi);
}

void D3DSurfaceToGDIWindowSurfaceScale::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$D3DVolatileSurfaceManager::handleVItoScreenOp(src, dst);
}

D3DSurfaceToGDIWindowSurfaceScale::D3DSurfaceToGDIWindowSurfaceScale() {
}

$Class* D3DSurfaceToGDIWindowSurfaceScale::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceToGDIWindowSurfaceScale, name, initialize, &_D3DSurfaceToGDIWindowSurfaceScale_ClassInfo_, allocate$D3DSurfaceToGDIWindowSurfaceScale);
	return class$;
}

$Class* D3DSurfaceToGDIWindowSurfaceScale::class$ = nullptr;

		} // d3d
	} // java2d
} // sun