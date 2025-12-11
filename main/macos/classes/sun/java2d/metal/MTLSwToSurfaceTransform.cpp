#include <sun/java2d/metal/MTLSwToSurfaceTransform.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/metal/MTLBlitLoops.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $MTLBlitLoops = ::sun::java2d::metal::MTLBlitLoops;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLSwToSurfaceTransform_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(MTLSwToSurfaceTransform, typeval)},
	{}
};

$MethodInfo _MTLSwToSurfaceTransform_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(MTLSwToSurfaceTransform::*)($SurfaceType*,int32_t)>(&MTLSwToSurfaceTransform::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MTLSwToSurfaceTransform_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLSwToSurfaceTransform",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	_MTLSwToSurfaceTransform_FieldInfo_,
	_MTLSwToSurfaceTransform_MethodInfo_
};

$Object* allocate$MTLSwToSurfaceTransform($Class* clazz) {
	return $of($alloc(MTLSwToSurfaceTransform));
}

void MTLSwToSurfaceTransform::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($MTLSurfaceData);
	$TransformBlit::init$(srcType, $CompositeType::AnyAlpha, $MTLSurfaceData::MTLSurface);
	this->typeval = typeval;
}

void MTLSwToSurfaceTransform::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$MTLBlitLoops::Blit(src, dst, comp, clip, at, hint, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), this->typeval, false);
}

MTLSwToSurfaceTransform::MTLSwToSurfaceTransform() {
}

$Class* MTLSwToSurfaceTransform::load$($String* name, bool initialize) {
	$loadClass(MTLSwToSurfaceTransform, name, initialize, &_MTLSwToSurfaceTransform_ClassInfo_, allocate$MTLSwToSurfaceTransform);
	return class$;
}

$Class* MTLSwToSurfaceTransform::class$ = nullptr;

		} // metal
	} // java2d
} // sun