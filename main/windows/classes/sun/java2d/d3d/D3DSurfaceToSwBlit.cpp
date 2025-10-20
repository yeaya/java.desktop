#include <sun/java2d/d3d/D3DSurfaceToSwBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $Composite = ::java::awt::Composite;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceToSwBlit_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(D3DSurfaceToSwBlit, typeval)},
	{"srcTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $PRIVATE, $field(D3DSurfaceToSwBlit, srcTmp)},
	{}
};

$MethodInfo _D3DSurfaceToSwBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(D3DSurfaceToSwBlit::*)($SurfaceType*,int32_t)>(&D3DSurfaceToSwBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{"complexClipBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(D3DSurfaceToSwBlit::*)($SurfaceData*,$SurfaceData*,$Composite*,$Region*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&D3DSurfaceToSwBlit::complexClipBlit))},
	{}
};

$ClassInfo _D3DSurfaceToSwBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceToSwBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_D3DSurfaceToSwBlit_FieldInfo_,
	_D3DSurfaceToSwBlit_MethodInfo_
};

$Object* allocate$D3DSurfaceToSwBlit($Class* clazz) {
	return $of($alloc(D3DSurfaceToSwBlit));
}

void D3DSurfaceToSwBlit::init$($SurfaceType* dstType, int32_t typeval) {
	$init($D3DSurfaceData);
	$init($CompositeType);
	$Blit::init$($D3DSurfaceData::D3DSurface, $CompositeType::SrcNoEa, dstType);
	this->typeval = typeval;
}

void D3DSurfaceToSwBlit::complexClipBlit($SurfaceData* src$renamed, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SurfaceData, src, src$renamed);
		$var($SurfaceData, cachedSrc, nullptr);
		if (this->srcTmp != nullptr) {
			$assign(cachedSrc, $cast($SurfaceData, $nc(this->srcTmp)->get()));
		}
		int32_t type = $BufferedImage::TYPE_INT_ARGB;
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

void D3DSurfaceToSwBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip$renamed, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
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
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->addReference(dst);
			$var($RenderBuffer, buf, rq->getBuffer());
			$D3DContext::setScratchSurface($($cast($D3DContext, $nc(($cast($D3DSurfaceData, src)))->getContext())));
			rq->ensureCapacityAndAlignment(48, 32);
			$nc(buf)->putInt(34);
			$nc($(buf->putInt(sx)))->putInt(sy);
			$nc($(buf->putInt(dx)))->putInt(dy);
			$nc($(buf->putInt(w)))->putInt(h);
			buf->putInt(this->typeval);
			buf->putLong($nc(src)->getNativeOps());
			buf->putLong($nc(dst)->getNativeOps());
			rq->flushNow();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

D3DSurfaceToSwBlit::D3DSurfaceToSwBlit() {
}

$Class* D3DSurfaceToSwBlit::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceToSwBlit, name, initialize, &_D3DSurfaceToSwBlit_ClassInfo_, allocate$D3DSurfaceToSwBlit);
	return class$;
}

$Class* D3DSurfaceToSwBlit::class$ = nullptr;

		} // d3d
	} // java2d
} // sun