#include <sun/java2d/pipe/BufferedMaskFill.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/BufferedMaskFill$1.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

#undef SRC_OVER
#undef USE_MASK

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $BufferedMaskFill$1 = ::sun::java2d::pipe::BufferedMaskFill$1;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedMaskFill_FieldInfo_[] = {
	{"rq", "Lsun/java2d/pipe/RenderQueue;", nullptr, $PROTECTED | $FINAL, $field(BufferedMaskFill, rq)},
	{}
};

$MethodInfo _BufferedMaskFill_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(BufferedMaskFill::*)($RenderQueue*,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&BufferedMaskFill::init$))},
	{"MaskFill", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;IIII[BII)V", nullptr, $PUBLIC},
	{"maskFill", "(IIIIIII[B)V", nullptr, $PROTECTED | $ABSTRACT},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;I)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _BufferedMaskFill_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.BufferedMaskFill$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferedMaskFill_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.BufferedMaskFill",
	"sun.java2d.loops.MaskFill",
	nullptr,
	_BufferedMaskFill_FieldInfo_,
	_BufferedMaskFill_MethodInfo_,
	nullptr,
	nullptr,
	_BufferedMaskFill_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.pipe.BufferedMaskFill$1"
};

$Object* allocate$BufferedMaskFill($Class* clazz) {
	return $of($alloc(BufferedMaskFill));
}

void BufferedMaskFill::init$($RenderQueue* rq, $SurfaceType* srcType, $CompositeType* compType, $SurfaceType* dstType) {
	$MaskFill::init$(srcType, compType, dstType);
	$set(this, rq, rq);
}

void BufferedMaskFill::MaskFill$($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp$renamed, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t maskoff, int32_t maskscan) {
	$useLocalCurrentObjectStackCache();
	$var($Composite, comp, comp$renamed);
	$var($AlphaComposite, acomp, $cast($AlphaComposite, comp));
	if ($nc(acomp)->getRule() != $AlphaComposite::SRC_OVER) {
		$init($AlphaComposite);
		$assign(comp, $AlphaComposite::SrcOver);
	}
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d, comp, $BufferedContext::USE_MASK);
			int32_t maskBytesRequired = 0;
			if (mask != nullptr) {
				maskBytesRequired = (int32_t)((mask->length + 3) & (uint32_t)(~3));
			} else {
				maskBytesRequired = 0;
			}
			int32_t totalBytesRequired = 32 + maskBytesRequired;
			$var($RenderBuffer, buf, $nc(this->rq)->getBuffer());
			if (totalBytesRequired <= $nc(buf)->capacity()) {
				if (totalBytesRequired > buf->remaining()) {
					$nc(this->rq)->flushNow();
				}
				buf->putInt(32);
				$nc($($nc($($nc($(buf->putInt(x)))->putInt(y)))->putInt(w)))->putInt(h);
				buf->putInt(maskoff);
				buf->putInt(maskscan);
				buf->putInt(maskBytesRequired);
				if (mask != nullptr) {
					int32_t padding = maskBytesRequired - mask->length;
					buf->put(mask);
					if (padding != 0) {
						buf->position(buf->position() + padding);
					}
				}
			} else {
				$nc(this->rq)->flushAndInvokeNow($$new($BufferedMaskFill$1, this, x, y, w, h, maskoff, maskscan, mask));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

BufferedMaskFill::BufferedMaskFill() {
}

$Class* BufferedMaskFill::load$($String* name, bool initialize) {
	$loadClass(BufferedMaskFill, name, initialize, &_BufferedMaskFill_ClassInfo_, allocate$BufferedMaskFill);
	return class$;
}

$Class* BufferedMaskFill::class$ = nullptr;

		} // pipe
	} // java2d
} // sun