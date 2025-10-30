#include <sun/java2d/opengl/OGLRTTSurfaceToSurfaceTransform.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
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
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _OGLRTTSurfaceToSurfaceTransform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OGLRTTSurfaceToSurfaceTransform::*)()>(&OGLRTTSurfaceToSurfaceTransform::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OGLRTTSurfaceToSurfaceTransform_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLRTTSurfaceToSurfaceTransform",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	nullptr,
	_OGLRTTSurfaceToSurfaceTransform_MethodInfo_
};

$Object* allocate$OGLRTTSurfaceToSurfaceTransform($Class* clazz) {
	return $of($alloc(OGLRTTSurfaceToSurfaceTransform));
}

void OGLRTTSurfaceToSurfaceTransform::init$() {
	$init($OGLSurfaceData);
	$init($CompositeType);
	$TransformBlit::init$($OGLSurfaceData::OpenGLSurfaceRTT, $CompositeType::AnyAlpha, $OGLSurfaceData::OpenGLSurface);
}

void OGLRTTSurfaceToSurfaceTransform::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$OGLBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, at, hint, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), true);
}

OGLRTTSurfaceToSurfaceTransform::OGLRTTSurfaceToSurfaceTransform() {
}

$Class* OGLRTTSurfaceToSurfaceTransform::load$($String* name, bool initialize) {
	$loadClass(OGLRTTSurfaceToSurfaceTransform, name, initialize, &_OGLRTTSurfaceToSurfaceTransform_ClassInfo_, allocate$OGLRTTSurfaceToSurfaceTransform);
	return class$;
}

$Class* OGLRTTSurfaceToSurfaceTransform::class$ = nullptr;

		} // opengl
	} // java2d
} // sun