#include <sun/java2d/opengl/OGLRTTSurfaceToSurfaceScale.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
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
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $OGLBlitLoops = ::sun::java2d::opengl::OGLBlitLoops;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLRTTSurfaceToSurfaceScale_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OGLRTTSurfaceToSurfaceScale::*)()>(&OGLRTTSurfaceToSurfaceScale::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OGLRTTSurfaceToSurfaceScale_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLRTTSurfaceToSurfaceScale",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	nullptr,
	_OGLRTTSurfaceToSurfaceScale_MethodInfo_
};

$Object* allocate$OGLRTTSurfaceToSurfaceScale($Class* clazz) {
	return $of($alloc(OGLRTTSurfaceToSurfaceScale));
}

void OGLRTTSurfaceToSurfaceScale::init$() {
	$init($OGLSurfaceData);
	$init($CompositeType);
	$ScaledBlit::init$($OGLSurfaceData::OpenGLSurfaceRTT, $CompositeType::AnyAlpha, $OGLSurfaceData::OpenGLSurface);
}

void OGLRTTSurfaceToSurfaceScale::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$OGLBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2, true);
}

OGLRTTSurfaceToSurfaceScale::OGLRTTSurfaceToSurfaceScale() {
}

$Class* OGLRTTSurfaceToSurfaceScale::load$($String* name, bool initialize) {
	$loadClass(OGLRTTSurfaceToSurfaceScale, name, initialize, &_OGLRTTSurfaceToSurfaceScale_ClassInfo_, allocate$OGLRTTSurfaceToSurfaceScale);
	return class$;
}

$Class* OGLRTTSurfaceToSurfaceScale::class$ = nullptr;

		} // opengl
	} // java2d
} // sun