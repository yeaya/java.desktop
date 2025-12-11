#include <sun/java2d/metal/MTLSwToSurfaceBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/metal/MTLBlitLoops.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
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
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $MTLBlitLoops = ::sun::java2d::metal::MTLBlitLoops;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLSwToSurfaceBlit_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(MTLSwToSurfaceBlit, typeval)},
	{}
};

$MethodInfo _MTLSwToSurfaceBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(MTLSwToSurfaceBlit::*)($SurfaceType*,int32_t)>(&MTLSwToSurfaceBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MTLSwToSurfaceBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLSwToSurfaceBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_MTLSwToSurfaceBlit_FieldInfo_,
	_MTLSwToSurfaceBlit_MethodInfo_
};

$Object* allocate$MTLSwToSurfaceBlit($Class* clazz) {
	return $of($alloc(MTLSwToSurfaceBlit));
}

void MTLSwToSurfaceBlit::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($MTLSurfaceData);
	$Blit::init$(srcType, $CompositeType::AnyAlpha, $MTLSurfaceData::MTLSurface);
	this->typeval = typeval;
}

void MTLSwToSurfaceBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$MTLBlitLoops::Blit(src, dst, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), this->typeval, false);
}

MTLSwToSurfaceBlit::MTLSwToSurfaceBlit() {
}

$Class* MTLSwToSurfaceBlit::load$($String* name, bool initialize) {
	$loadClass(MTLSwToSurfaceBlit, name, initialize, &_MTLSwToSurfaceBlit_ClassInfo_, allocate$MTLSwToSurfaceBlit);
	return class$;
}

$Class* MTLSwToSurfaceBlit::class$ = nullptr;

		} // metal
	} // java2d
} // sun