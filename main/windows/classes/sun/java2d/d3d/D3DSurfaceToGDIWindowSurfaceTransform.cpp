#include <sun/java2d/d3d/D3DSurfaceToGDIWindowSurfaceTransform.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/d3d/D3DVolatileSurfaceManager.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DVolatileSurfaceManager = ::sun::java2d::d3d::D3DVolatileSurfaceManager;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $Region = ::sun::java2d::pipe::Region;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DSurfaceToGDIWindowSurfaceTransform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DSurfaceToGDIWindowSurfaceTransform::*)()>(&D3DSurfaceToGDIWindowSurfaceTransform::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DSurfaceToGDIWindowSurfaceTransform_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceToGDIWindowSurfaceTransform",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	nullptr,
	_D3DSurfaceToGDIWindowSurfaceTransform_MethodInfo_
};

$Object* allocate$D3DSurfaceToGDIWindowSurfaceTransform($Class* clazz) {
	return $of($alloc(D3DSurfaceToGDIWindowSurfaceTransform));
}

void D3DSurfaceToGDIWindowSurfaceTransform::init$() {
	$init($D3DSurfaceData);
	$init($CompositeType);
	$init($GDIWindowSurfaceData);
	$TransformBlit::init$($D3DSurfaceData::D3DSurface, $CompositeType::AnyAlpha, $GDIWindowSurfaceData::AnyGdi);
}

void D3DSurfaceToGDIWindowSurfaceTransform::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$D3DVolatileSurfaceManager::handleVItoScreenOp(src, dst);
}

D3DSurfaceToGDIWindowSurfaceTransform::D3DSurfaceToGDIWindowSurfaceTransform() {
}

$Class* D3DSurfaceToGDIWindowSurfaceTransform::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceToGDIWindowSurfaceTransform, name, initialize, &_D3DSurfaceToGDIWindowSurfaceTransform_ClassInfo_, allocate$D3DSurfaceToGDIWindowSurfaceTransform);
	return class$;
}

$Class* D3DSurfaceToGDIWindowSurfaceTransform::class$ = nullptr;

		} // d3d
	} // java2d
} // sun