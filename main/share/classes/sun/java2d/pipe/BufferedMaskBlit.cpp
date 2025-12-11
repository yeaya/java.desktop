#include <sun/java2d/pipe/BufferedMaskBlit.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/lang/InternalError.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

#undef SRC_OVER
#undef ST_INT_ARGB
#undef ST_INT_ARGB_PRE
#undef ST_INT_BGR
#undef ST_INT_RGB

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedMaskBlit_FieldInfo_[] = {
	{"ST_INT_ARGB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedMaskBlit, ST_INT_ARGB)},
	{"ST_INT_ARGB_PRE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedMaskBlit, ST_INT_ARGB_PRE)},
	{"ST_INT_RGB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedMaskBlit, ST_INT_RGB)},
	{"ST_INT_BGR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedMaskBlit, ST_INT_BGR)},
	{"rq", "Lsun/java2d/pipe/RenderQueue;", nullptr, $PRIVATE | $FINAL, $field(BufferedMaskBlit, rq)},
	{"srcTypeVal", "I", nullptr, $PRIVATE | $FINAL, $field(BufferedMaskBlit, srcTypeVal)},
	{"blitop", "Lsun/java2d/loops/Blit;", nullptr, $PRIVATE, $field(BufferedMaskBlit, blitop)},
	{}
};

$MethodInfo _BufferedMaskBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(BufferedMaskBlit::*)($RenderQueue*,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&BufferedMaskBlit::init$))},
	{"MaskBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII[BII)V", nullptr, $PUBLIC},
	{"enqueueTile", "(JILsun/java2d/SurfaceData;JI[BIIIIIIIII)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(BufferedMaskBlit::*)(int64_t,int32_t,$SurfaceData*,int64_t,int32_t,$bytes*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&BufferedMaskBlit::enqueueTile))},
	{"validateContext", "(Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

#define _METHOD_INDEX_enqueueTile 2

$ClassInfo _BufferedMaskBlit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.BufferedMaskBlit",
	"sun.java2d.loops.MaskBlit",
	nullptr,
	_BufferedMaskBlit_FieldInfo_,
	_BufferedMaskBlit_MethodInfo_
};

$Object* allocate$BufferedMaskBlit($Class* clazz) {
	return $of($alloc(BufferedMaskBlit));
}

void BufferedMaskBlit::init$($RenderQueue* rq, $SurfaceType* srcType, $CompositeType* compType, $SurfaceType* dstType) {
	$MaskBlit::init$(srcType, compType, dstType);
	$set(this, rq, rq);
	$init($SurfaceType);
	if (srcType == $SurfaceType::IntArgb) {
		this->srcTypeVal = BufferedMaskBlit::ST_INT_ARGB;
	} else {
		if (srcType == $SurfaceType::IntArgbPre) {
			this->srcTypeVal = BufferedMaskBlit::ST_INT_ARGB_PRE;
		} else {
			if (srcType == $SurfaceType::IntRgb) {
				this->srcTypeVal = BufferedMaskBlit::ST_INT_RGB;
			} else {
				if (srcType == $SurfaceType::IntBgr) {
					this->srcTypeVal = BufferedMaskBlit::ST_INT_BGR;
				} else {
					$throwNew($InternalError, "unrecognized source surface type"_s);
				}
			}
		}
	}
}

void BufferedMaskBlit::MaskBlit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp$renamed, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height, $bytes* mask, int32_t maskoff, int32_t maskscan) {
	$useLocalCurrentObjectStackCache();
	$var($Composite, comp, comp$renamed);
	if (width <= 0 || height <= 0) {
		return;
	}
	if (mask == nullptr) {
		if (this->blitop == nullptr) {
			$var($SurfaceType, var$0, $nc(src)->getSurfaceType());
			$init($CompositeType);
			$var($CompositeType, var$1, $CompositeType::AnyAlpha);
			$set(this, blitop, $Blit::getFromCache(var$0, var$1, $(this->getDestType())));
		}
		$nc(this->blitop)->Blit$(src, dst, comp, clip, srcx, srcy, dstx, dsty, width, height);
		return;
	}
	$var($AlphaComposite, acomp, $cast($AlphaComposite, comp));
	if ($nc(acomp)->getRule() != $AlphaComposite::SRC_OVER) {
		$init($AlphaComposite);
		$assign(comp, $AlphaComposite::SrcOver);
	}
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$2, nullptr);
		try {
			validateContext(dst, comp, clip);
			$var($RenderBuffer, buf, $nc(this->rq)->getBuffer());
			int32_t totalBytesRequired = 20 + (width * height * 4);
			$nc(this->rq)->ensureCapacity(totalBytesRequired);
			int64_t var$3 = $nc(buf)->getAddress();
			int32_t var$4 = buf->position();
			$var($SurfaceData, var$5, src);
			int32_t newpos = enqueueTile(var$3, var$4, var$5, $nc(src)->getNativeOps(), this->srcTypeVal, mask, $nc(mask)->length, maskoff, maskscan, srcx, srcy, dstx, dsty, width, height);
			$nc(buf)->position(newpos);
		} catch ($Throwable& var$6) {
			$assign(var$2, var$6);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

int32_t BufferedMaskBlit::enqueueTile(int64_t buf, int32_t bpos, $SurfaceData* srcData, int64_t pSrcOps, int32_t srcType, $bytes* mask, int32_t masklen, int32_t maskoff, int32_t maskscan, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	int32_t $ret = 0;
	$prepareNative(BufferedMaskBlit, enqueueTile, int32_t, int64_t buf, int32_t bpos, $SurfaceData* srcData, int64_t pSrcOps, int32_t srcType, $bytes* mask, int32_t masklen, int32_t maskoff, int32_t maskscan, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height);
	$ret = $invokeNative(buf, bpos, srcData, pSrcOps, srcType, mask, masklen, maskoff, maskscan, srcx, srcy, dstx, dsty, width, height);
	$finishNative();
	return $ret;
}

BufferedMaskBlit::BufferedMaskBlit() {
}

$Class* BufferedMaskBlit::load$($String* name, bool initialize) {
	$loadClass(BufferedMaskBlit, name, initialize, &_BufferedMaskBlit_ClassInfo_, allocate$BufferedMaskBlit);
	return class$;
}

$Class* BufferedMaskBlit::class$ = nullptr;

		} // pipe
	} // java2d
} // sun