#include <sun/java2d/metal/MTLSurfaceToSwBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef PF_INT_ARGB_PRE
#undef TYPE_INT_ARGB
#undef TYPE_INT_ARGB_PRE

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
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLSurfaceToSwBlit_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE | $FINAL, $field(MTLSurfaceToSwBlit, typeval)},
	{"srcTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $PRIVATE, $field(MTLSurfaceToSwBlit, srcTmp)},
	{}
};

$MethodInfo _MTLSurfaceToSwBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(MTLSurfaceToSwBlit::*)($SurfaceType*,int32_t)>(&MTLSurfaceToSwBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{"complexClipBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(MTLSurfaceToSwBlit::*)($SurfaceData*,$SurfaceData*,$Composite*,$Region*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&MTLSurfaceToSwBlit::complexClipBlit))},
	{}
};

$ClassInfo _MTLSurfaceToSwBlit_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.metal.MTLSurfaceToSwBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_MTLSurfaceToSwBlit_FieldInfo_,
	_MTLSurfaceToSwBlit_MethodInfo_
};

$Object* allocate$MTLSurfaceToSwBlit($Class* clazz) {
	return $of($alloc(MTLSurfaceToSwBlit));
}

void MTLSurfaceToSwBlit::init$($SurfaceType* dstType, int32_t typeval) {
	$init($MTLSurfaceData);
	$init($CompositeType);
	$Blit::init$($MTLSurfaceData::MTLSurface, $CompositeType::SrcNoEa, dstType);
	this->typeval = typeval;
}

void MTLSurfaceToSwBlit::complexClipBlit($SurfaceData* src$renamed, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SurfaceData, src, src$renamed);
		$var($SurfaceData, cachedSrc, nullptr);
		if (this->srcTmp != nullptr) {
			$assign(cachedSrc, $cast($SurfaceData, $nc(this->srcTmp)->get()));
		}
		int32_t type = this->typeval == $MTLSurfaceData::PF_INT_ARGB_PRE ? $BufferedImage::TYPE_INT_ARGB_PRE : $BufferedImage::TYPE_INT_ARGB;
		$assign(src, convertFrom(this, src, sx, sy, w, h, cachedSrc, type));
		$var($SurfaceType, var$0, $nc(src)->getSurfaceType());
		$init($CompositeType);
		$var($CompositeType, var$1, $CompositeType::SrcNoEa);
		$var($Blit, performop, $Blit::getFromCache(var$0, var$1, $($nc(dst)->getSurfaceType())));
		$nc(performop)->Blit$(src, dst, comp, clip, 0, 0, dx, dy, w, h);
		if (src != cachedSrc) {
			$set(this, srcTmp, $new($WeakReference, src));
		}
	}
}

void MTLSurfaceToSwBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip$renamed, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, clip, clip$renamed);
	if (clip != nullptr) {
		$assign(clip, clip->getIntersectionXYWH(dx, dy, w, h));
		if ($nc(clip)->isEmpty()) {
			return;
		}
		sx += $nc(clip)->getLoX() - dx;
		sy += clip->getLoY() - dy;
		dx = clip->getLoX();
		dy = clip->getLoY();
		w = clip->getWidth();
		h = clip->getHeight();
		if (!clip->isRectangular()) {
			complexClipBlit(src, dst, comp, clip, sx, sy, dx, dy, w, h);
			return;
		}
	}
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->addReference(dst);
			$var($RenderBuffer, buf, rq->getBuffer());
			$MTLContext::validateContext($cast($MTLSurfaceData, src));
			rq->ensureCapacityAndAlignment(48, 32);
			$nc(buf)->putInt(34);
			$nc($(buf->putInt(sx)))->putInt(sy);
			$nc($(buf->putInt(dx)))->putInt(dy);
			$nc($(buf->putInt(w)))->putInt(h);
			buf->putInt(this->typeval);
			buf->putLong($nc(src)->getNativeOps());
			buf->putLong($nc(dst)->getNativeOps());
			rq->flushNow();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

MTLSurfaceToSwBlit::MTLSurfaceToSwBlit() {
}

$Class* MTLSurfaceToSwBlit::load$($String* name, bool initialize) {
	$loadClass(MTLSurfaceToSwBlit, name, initialize, &_MTLSurfaceToSwBlit_ClassInfo_, allocate$MTLSurfaceToSwBlit);
	return class$;
}

$Class* MTLSurfaceToSwBlit::class$ = nullptr;

		} // metal
	} // java2d
} // sun