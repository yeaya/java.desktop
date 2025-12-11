#include <sun/java2d/metal/MTLAnyCompositeBlit.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLAnyCompositeBlit_FieldInfo_[] = {
	{"dstTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $PRIVATE, $field(MTLAnyCompositeBlit, dstTmp)},
	{"srcTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $PRIVATE, $field(MTLAnyCompositeBlit, srcTmp)},
	{"convertsrc", "Lsun/java2d/loops/Blit;", nullptr, $PRIVATE | $FINAL, $field(MTLAnyCompositeBlit, convertsrc)},
	{"convertdst", "Lsun/java2d/loops/Blit;", nullptr, $PRIVATE | $FINAL, $field(MTLAnyCompositeBlit, convertdst)},
	{"convertresult", "Lsun/java2d/loops/Blit;", nullptr, $PRIVATE | $FINAL, $field(MTLAnyCompositeBlit, convertresult)},
	{}
};

$MethodInfo _MTLAnyCompositeBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/Blit;Lsun/java2d/loops/Blit;Lsun/java2d/loops/Blit;)V", nullptr, 0, $method(static_cast<void(MTLAnyCompositeBlit::*)($SurfaceType*,$Blit*,$Blit*,$Blit*)>(&MTLAnyCompositeBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _MTLAnyCompositeBlit_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.metal.MTLAnyCompositeBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_MTLAnyCompositeBlit_FieldInfo_,
	_MTLAnyCompositeBlit_MethodInfo_
};

$Object* allocate$MTLAnyCompositeBlit($Class* clazz) {
	return $of($alloc(MTLAnyCompositeBlit));
}

void MTLAnyCompositeBlit::init$($SurfaceType* srctype, $Blit* convertsrc, $Blit* convertdst, $Blit* convertresult) {
	$init($CompositeType);
	$init($MTLSurfaceData);
	$Blit::init$(srctype, $CompositeType::Any, $MTLSurfaceData::MTLSurface);
	$set(this, convertsrc, convertsrc);
	$set(this, convertdst, convertdst);
	$set(this, convertresult, convertresult);
}

void MTLAnyCompositeBlit::Blit$($SurfaceData* src$renamed, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
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

MTLAnyCompositeBlit::MTLAnyCompositeBlit() {
}

$Class* MTLAnyCompositeBlit::load$($String* name, bool initialize) {
	$loadClass(MTLAnyCompositeBlit, name, initialize, &_MTLAnyCompositeBlit_ClassInfo_, allocate$MTLAnyCompositeBlit);
	return class$;
}

$Class* MTLAnyCompositeBlit::class$ = nullptr;

		} // metal
	} // java2d
} // sun