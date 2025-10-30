#include <sun/java2d/d3d/D3DSwToSurfaceBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DBlitLoops.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_NEAREST_NEIGHBOR

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DBlitLoops = ::sun::java2d::d3d::D3DBlitLoops;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSwToSurfaceBlit_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(D3DSwToSurfaceBlit, typeval)},
	{}
};

$MethodInfo _D3DSwToSurfaceBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(D3DSwToSurfaceBlit::*)($SurfaceType*,int32_t)>(&D3DSwToSurfaceBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DSwToSurfaceBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSwToSurfaceBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_D3DSwToSurfaceBlit_FieldInfo_,
	_D3DSwToSurfaceBlit_MethodInfo_
};

$Object* allocate$D3DSwToSurfaceBlit($Class* clazz) {
	return $of($alloc(D3DSwToSurfaceBlit));
}

void D3DSwToSurfaceBlit::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($D3DSurfaceData);
	$Blit::init$(srcType, $CompositeType::AnyAlpha, $D3DSurfaceData::D3DSurface);
	this->typeval = typeval;
}

void D3DSwToSurfaceBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$D3DBlitLoops::Blit(src, dst, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), this->typeval, false);
}

D3DSwToSurfaceBlit::D3DSwToSurfaceBlit() {
}

$Class* D3DSwToSurfaceBlit::load$($String* name, bool initialize) {
	$loadClass(D3DSwToSurfaceBlit, name, initialize, &_D3DSwToSurfaceBlit_ClassInfo_, allocate$D3DSwToSurfaceBlit);
	return class$;
}

$Class* D3DSwToSurfaceBlit::class$ = nullptr;

		} // d3d
	} // java2d
} // sun