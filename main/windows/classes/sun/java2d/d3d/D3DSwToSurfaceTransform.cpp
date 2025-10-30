#include <sun/java2d/d3d/D3DSwToSurfaceTransform.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DBlitLoops.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DBlitLoops = ::sun::java2d::d3d::D3DBlitLoops;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSwToSurfaceTransform_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(D3DSwToSurfaceTransform, typeval)},
	{}
};

$MethodInfo _D3DSwToSurfaceTransform_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(D3DSwToSurfaceTransform::*)($SurfaceType*,int32_t)>(&D3DSwToSurfaceTransform::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DSwToSurfaceTransform_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSwToSurfaceTransform",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	_D3DSwToSurfaceTransform_FieldInfo_,
	_D3DSwToSurfaceTransform_MethodInfo_
};

$Object* allocate$D3DSwToSurfaceTransform($Class* clazz) {
	return $of($alloc(D3DSwToSurfaceTransform));
}

void D3DSwToSurfaceTransform::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($D3DSurfaceData);
	$TransformBlit::init$(srcType, $CompositeType::AnyAlpha, $D3DSurfaceData::D3DSurface);
	this->typeval = typeval;
}

void D3DSwToSurfaceTransform::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$D3DBlitLoops::Blit(src, dst, comp, clip, at, hint, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), this->typeval, false);
}

D3DSwToSurfaceTransform::D3DSwToSurfaceTransform() {
}

$Class* D3DSwToSurfaceTransform::load$($String* name, bool initialize) {
	$loadClass(D3DSwToSurfaceTransform, name, initialize, &_D3DSwToSurfaceTransform_ClassInfo_, allocate$D3DSwToSurfaceTransform);
	return class$;
}

$Class* D3DSwToSurfaceTransform::class$ = nullptr;

		} // d3d
	} // java2d
} // sun