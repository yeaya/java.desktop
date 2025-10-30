#include <sun/java2d/opengl/OGLSwToSurfaceTransform.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/opengl/OGLBlitLoops.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
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
using $OGLBlitLoops = ::sun::java2d::opengl::OGLBlitLoops;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLSwToSurfaceTransform_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(OGLSwToSurfaceTransform, typeval)},
	{}
};

$MethodInfo _OGLSwToSurfaceTransform_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(OGLSwToSurfaceTransform::*)($SurfaceType*,int32_t)>(&OGLSwToSurfaceTransform::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OGLSwToSurfaceTransform_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLSwToSurfaceTransform",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	_OGLSwToSurfaceTransform_FieldInfo_,
	_OGLSwToSurfaceTransform_MethodInfo_
};

$Object* allocate$OGLSwToSurfaceTransform($Class* clazz) {
	return $of($alloc(OGLSwToSurfaceTransform));
}

void OGLSwToSurfaceTransform::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($OGLSurfaceData);
	$TransformBlit::init$(srcType, $CompositeType::AnyAlpha, $OGLSurfaceData::OpenGLSurface);
	this->typeval = typeval;
}

void OGLSwToSurfaceTransform::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$OGLBlitLoops::Blit(src, dst, comp, clip, at, hint, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), this->typeval, false);
}

OGLSwToSurfaceTransform::OGLSwToSurfaceTransform() {
}

$Class* OGLSwToSurfaceTransform::load$($String* name, bool initialize) {
	$loadClass(OGLSwToSurfaceTransform, name, initialize, &_OGLSwToSurfaceTransform_ClassInfo_, allocate$OGLSwToSurfaceTransform);
	return class$;
}

$Class* OGLSwToSurfaceTransform::class$ = nullptr;

		} // opengl
	} // java2d
} // sun