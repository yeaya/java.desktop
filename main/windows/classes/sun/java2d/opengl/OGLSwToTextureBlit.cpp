#include <sun/java2d/opengl/OGLSwToTextureBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $OGLBlitLoops = ::sun::java2d::opengl::OGLBlitLoops;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLSwToTextureBlit_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(OGLSwToTextureBlit, typeval)},
	{}
};

$MethodInfo _OGLSwToTextureBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(OGLSwToTextureBlit::*)($SurfaceType*,int32_t)>(&OGLSwToTextureBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OGLSwToTextureBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLSwToTextureBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_OGLSwToTextureBlit_FieldInfo_,
	_OGLSwToTextureBlit_MethodInfo_
};

$Object* allocate$OGLSwToTextureBlit($Class* clazz) {
	return $of($alloc(OGLSwToTextureBlit));
}

void OGLSwToTextureBlit::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($OGLSurfaceData);
	$Blit::init$(srcType, $CompositeType::SrcNoEa, $OGLSurfaceData::OpenGLTexture);
	this->typeval = typeval;
}

void OGLSwToTextureBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$OGLBlitLoops::Blit(src, dst, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), this->typeval, true);
}

OGLSwToTextureBlit::OGLSwToTextureBlit() {
}

$Class* OGLSwToTextureBlit::load$($String* name, bool initialize) {
	$loadClass(OGLSwToTextureBlit, name, initialize, &_OGLSwToTextureBlit_ClassInfo_, allocate$OGLSwToTextureBlit);
	return class$;
}

$Class* OGLSwToTextureBlit::class$ = nullptr;

		} // opengl
	} // java2d
} // sun