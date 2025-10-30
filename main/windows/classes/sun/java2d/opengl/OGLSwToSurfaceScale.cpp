#include <sun/java2d/opengl/OGLSwToSurfaceScale.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/opengl/OGLBlitLoops.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
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
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $OGLBlitLoops = ::sun::java2d::opengl::OGLBlitLoops;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLSwToSurfaceScale_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(OGLSwToSurfaceScale, typeval)},
	{}
};

$MethodInfo _OGLSwToSurfaceScale_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(OGLSwToSurfaceScale::*)($SurfaceType*,int32_t)>(&OGLSwToSurfaceScale::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OGLSwToSurfaceScale_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLSwToSurfaceScale",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	_OGLSwToSurfaceScale_FieldInfo_,
	_OGLSwToSurfaceScale_MethodInfo_
};

$Object* allocate$OGLSwToSurfaceScale($Class* clazz) {
	return $of($alloc(OGLSwToSurfaceScale));
}

void OGLSwToSurfaceScale::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($OGLSurfaceData);
	$ScaledBlit::init$(srcType, $CompositeType::AnyAlpha, $OGLSurfaceData::OpenGLSurface);
	this->typeval = typeval;
}

void OGLSwToSurfaceScale::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$OGLBlitLoops::Blit(src, dst, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2, this->typeval, false);
}

OGLSwToSurfaceScale::OGLSwToSurfaceScale() {
}

$Class* OGLSwToSurfaceScale::load$($String* name, bool initialize) {
	$loadClass(OGLSwToSurfaceScale, name, initialize, &_OGLSwToSurfaceScale_ClassInfo_, allocate$OGLSwToSurfaceScale);
	return class$;
}

$Class* OGLSwToSurfaceScale::class$ = nullptr;

		} // opengl
	} // java2d
} // sun