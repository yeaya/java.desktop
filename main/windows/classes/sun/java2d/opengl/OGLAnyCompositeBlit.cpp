#include <sun/java2d/opengl/OGLAnyCompositeBlit.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLAnyCompositeBlit_FieldInfo_[] = {
	{"dstTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $PRIVATE, $field(OGLAnyCompositeBlit, dstTmp)},
	{"srcTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $PRIVATE, $field(OGLAnyCompositeBlit, srcTmp)},
	{"convertsrc", "Lsun/java2d/loops/Blit;", nullptr, $PRIVATE | $FINAL, $field(OGLAnyCompositeBlit, convertsrc)},
	{"convertdst", "Lsun/java2d/loops/Blit;", nullptr, $PRIVATE | $FINAL, $field(OGLAnyCompositeBlit, convertdst)},
	{"convertresult", "Lsun/java2d/loops/Blit;", nullptr, $PRIVATE | $FINAL, $field(OGLAnyCompositeBlit, convertresult)},
	{}
};

$MethodInfo _OGLAnyCompositeBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/Blit;Lsun/java2d/loops/Blit;Lsun/java2d/loops/Blit;)V", nullptr, 0, $method(static_cast<void(OGLAnyCompositeBlit::*)($SurfaceType*,$Blit*,$Blit*,$Blit*)>(&OGLAnyCompositeBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _OGLAnyCompositeBlit_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.opengl.OGLAnyCompositeBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_OGLAnyCompositeBlit_FieldInfo_,
	_OGLAnyCompositeBlit_MethodInfo_
};

$Object* allocate$OGLAnyCompositeBlit($Class* clazz) {
	return $of($alloc(OGLAnyCompositeBlit));
}

void OGLAnyCompositeBlit::init$($SurfaceType* srctype, $Blit* convertsrc, $Blit* convertdst, $Blit* convertresult) {
	$init($CompositeType);
	$init($OGLSurfaceData);
	$Blit::init$(srctype, $CompositeType::Any, $OGLSurfaceData::OpenGLSurface);
	$set(this, convertsrc, convertsrc);
	$set(this, convertdst, convertdst);
	$set(this, convertresult, convertresult);
}

void OGLAnyCompositeBlit::Blit$($SurfaceData* src$renamed, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$synchronized(this) {
		$var($SurfaceData, src, src$renamed);
		if (this->convertsrc != nullptr) {
			$var($SurfaceData, cachedSrc, nullptr);
			if (this->srcTmp != nullptr) {
				$assign(cachedSrc, $cast($SurfaceData, $nc(this->srcTmp)->get()));
			}
			$assign(src, convertFrom(this->convertsrc, src, sx, sy, w, h, cachedSrc, $BufferedImage::TYPE_INT_ARGB_PRE));
			if (src != cachedSrc) {
				$set(this, srcTmp, $new($WeakReference, src));
			}
		}
		$var($SurfaceData, cachedDst, nullptr);
		if (this->dstTmp != nullptr) {
			$assign(cachedDst, $cast($SurfaceData, $nc(this->dstTmp)->get()));
		}
		$var($SurfaceData, dstBuffer, convertFrom(this->convertdst, dst, dx, dy, w, h, cachedDst, $BufferedImage::TYPE_INT_ARGB_PRE));
		$var($Region, bufferClip, clip == nullptr ? ($Region*)nullptr : $nc(clip)->getTranslatedRegion(-dx, -dy));
		$var($SurfaceType, var$0, $nc(src)->getSurfaceType());
		$init($CompositeType);
		$var($CompositeType, var$1, $CompositeType::Any);
		$var($Blit, performop, $Blit::getFromCache(var$0, var$1, $($nc(dstBuffer)->getSurfaceType())));
		$nc(performop)->Blit$(src, dstBuffer, comp, bufferClip, sx, sy, 0, 0, w, h);
		if (dstBuffer != cachedDst) {
			$set(this, dstTmp, $new($WeakReference, dstBuffer));
		}
		$init($AlphaComposite);
		$nc(this->convertresult)->Blit$(dstBuffer, dst, $AlphaComposite::Src, clip, 0, 0, dx, dy, w, h);
	}
}

OGLAnyCompositeBlit::OGLAnyCompositeBlit() {
}

$Class* OGLAnyCompositeBlit::load$($String* name, bool initialize) {
	$loadClass(OGLAnyCompositeBlit, name, initialize, &_OGLAnyCompositeBlit_ClassInfo_, allocate$OGLAnyCompositeBlit);
	return class$;
}

$Class* OGLAnyCompositeBlit::class$ = nullptr;

		} // opengl
	} // java2d
} // sun