#include <sun/java2d/opengl/OGLTextureToSurfaceBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
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
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $OGLBlitLoops = ::sun::java2d::opengl::OGLBlitLoops;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLTextureToSurfaceBlit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OGLTextureToSurfaceBlit::*)()>(&OGLTextureToSurfaceBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OGLTextureToSurfaceBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLTextureToSurfaceBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_OGLTextureToSurfaceBlit_MethodInfo_
};

$Object* allocate$OGLTextureToSurfaceBlit($Class* clazz) {
	return $of($alloc(OGLTextureToSurfaceBlit));
}

void OGLTextureToSurfaceBlit::init$() {
	$init($OGLSurfaceData);
	$init($CompositeType);
	$Blit::init$($OGLSurfaceData::OpenGLTexture, $CompositeType::AnyAlpha, $OGLSurfaceData::OpenGLSurface);
}

void OGLTextureToSurfaceBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$OGLBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), true);
}

OGLTextureToSurfaceBlit::OGLTextureToSurfaceBlit() {
}

$Class* OGLTextureToSurfaceBlit::load$($String* name, bool initialize) {
	$loadClass(OGLTextureToSurfaceBlit, name, initialize, &_OGLTextureToSurfaceBlit_ClassInfo_, allocate$OGLTextureToSurfaceBlit);
	return class$;
}

$Class* OGLTextureToSurfaceBlit::class$ = nullptr;

		} // opengl
	} // java2d
} // sun