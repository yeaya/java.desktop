#include <sun/java2d/d3d/D3DSurfaceToGDIWindowSurfaceBlit.h>

#include <java/awt/Composite.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/d3d/D3DVolatileSurfaceManager.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
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
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $Region = ::sun::java2d::pipe::Region;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DSurfaceToGDIWindowSurfaceBlit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DSurfaceToGDIWindowSurfaceBlit::*)()>(&D3DSurfaceToGDIWindowSurfaceBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DSurfaceToGDIWindowSurfaceBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceToGDIWindowSurfaceBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_D3DSurfaceToGDIWindowSurfaceBlit_MethodInfo_
};

$Object* allocate$D3DSurfaceToGDIWindowSurfaceBlit($Class* clazz) {
	return $of($alloc(D3DSurfaceToGDIWindowSurfaceBlit));
}

void D3DSurfaceToGDIWindowSurfaceBlit::init$() {
	$init($D3DSurfaceData);
	$init($CompositeType);
	$init($GDIWindowSurfaceData);
	$Blit::init$($D3DSurfaceData::D3DSurface, $CompositeType::AnyAlpha, $GDIWindowSurfaceData::AnyGdi);
}

void D3DSurfaceToGDIWindowSurfaceBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$D3DVolatileSurfaceManager::handleVItoScreenOp(src, dst);
}

D3DSurfaceToGDIWindowSurfaceBlit::D3DSurfaceToGDIWindowSurfaceBlit() {
}

$Class* D3DSurfaceToGDIWindowSurfaceBlit::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceToGDIWindowSurfaceBlit, name, initialize, &_D3DSurfaceToGDIWindowSurfaceBlit_ClassInfo_, allocate$D3DSurfaceToGDIWindowSurfaceBlit);
	return class$;
}

$Class* D3DSurfaceToGDIWindowSurfaceBlit::class$ = nullptr;

		} // d3d
	} // java2d
} // sun