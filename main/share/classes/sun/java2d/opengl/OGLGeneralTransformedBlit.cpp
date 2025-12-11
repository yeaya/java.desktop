#include <sun/java2d/opengl/OGLGeneralTransformedBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLGeneralTransformedBlit_FieldInfo_[] = {
	{"performop", "Lsun/java2d/loops/TransformBlit;", nullptr, $PRIVATE | $FINAL, $field(OGLGeneralTransformedBlit, performop)},
	{"srcTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $PRIVATE, $field(OGLGeneralTransformedBlit, srcTmp)},
	{}
};

$MethodInfo _OGLGeneralTransformedBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/TransformBlit;)V", nullptr, 0, $method(static_cast<void(OGLGeneralTransformedBlit::*)($TransformBlit*)>(&OGLGeneralTransformedBlit::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _OGLGeneralTransformedBlit_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.opengl.OGLGeneralTransformedBlit",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	_OGLGeneralTransformedBlit_FieldInfo_,
	_OGLGeneralTransformedBlit_MethodInfo_
};

$Object* allocate$OGLGeneralTransformedBlit($Class* clazz) {
	return $of($alloc(OGLGeneralTransformedBlit));
}

void OGLGeneralTransformedBlit::init$($TransformBlit* performop) {
	$init($SurfaceType);
	$init($CompositeType);
	$init($OGLSurfaceData);
	$TransformBlit::init$($SurfaceType::Any, $CompositeType::AnyAlpha, $OGLSurfaceData::OpenGLSurface);
	$set(this, performop, performop);
}

void OGLGeneralTransformedBlit::Transform($SurfaceData* src$renamed, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SurfaceData, src, src$renamed);
		$init($CompositeType);
		$init($SurfaceType);
		$var($Blit, convertsrc, $Blit::getFromCache($($nc(src)->getSurfaceType()), $CompositeType::SrcNoEa, $SurfaceType::IntArgbPre));
		$var($SurfaceData, cachedSrc, this->srcTmp != nullptr ? $cast($SurfaceData, $nc(this->srcTmp)->get()) : ($SurfaceData*)nullptr);
		$assign(src, convertFrom(convertsrc, src, srcx, srcy, width, height, cachedSrc, $BufferedImage::TYPE_INT_ARGB_PRE));
		$nc(this->performop)->Transform(src, dst, comp, clip, at, hint, 0, 0, dstx, dsty, width, height);
		if (src != cachedSrc) {
			$set(this, srcTmp, $new($WeakReference, src));
		}
	}
}

OGLGeneralTransformedBlit::OGLGeneralTransformedBlit() {
}

$Class* OGLGeneralTransformedBlit::load$($String* name, bool initialize) {
	$loadClass(OGLGeneralTransformedBlit, name, initialize, &_OGLGeneralTransformedBlit_ClassInfo_, allocate$OGLGeneralTransformedBlit);
	return class$;
}

$Class* OGLGeneralTransformedBlit::class$ = nullptr;

		} // opengl
	} // java2d
} // sun