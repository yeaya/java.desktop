#include <sun/java2d/metal/MTLSwToTextureBlit.h>

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

$FieldInfo _MTLSwToTextureBlit_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(MTLSwToTextureBlit, typeval)},
	{}
};

$MethodInfo _MTLSwToTextureBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(MTLSwToTextureBlit::*)($SurfaceType*,int32_t)>(&MTLSwToTextureBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MTLSwToTextureBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLSwToTextureBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_MTLSwToTextureBlit_FieldInfo_,
	_MTLSwToTextureBlit_MethodInfo_
};

$Object* allocate$MTLSwToTextureBlit($Class* clazz) {
	return $of($alloc(MTLSwToTextureBlit));
}

void MTLSwToTextureBlit::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($MTLSurfaceData);
	$Blit::init$(srcType, $CompositeType::SrcNoEa, $MTLSurfaceData::MTLTexture);
	this->typeval = typeval;
}

void MTLSwToTextureBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$MTLBlitLoops::Blit(src, dst, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), this->typeval, true);
}

MTLSwToTextureBlit::MTLSwToTextureBlit() {
}

$Class* MTLSwToTextureBlit::load$($String* name, bool initialize) {
	$loadClass(MTLSwToTextureBlit, name, initialize, &_MTLSwToTextureBlit_ClassInfo_, allocate$MTLSwToTextureBlit);
	return class$;
}

$Class* MTLSwToTextureBlit::class$ = nullptr;

		} // metal
	} // java2d
} // sun