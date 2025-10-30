#include <sun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative.h>

#include <java/lang/Runnable.h>
#include <sun/awt/image/DataBufferNative.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative$1.h>
#include <sun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative$2.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $DataBufferNative = ::sun::awt::image::DataBufferNative;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DSurfaceData$D3DDataBufferNative$1 = ::sun::java2d::d3d::D3DSurfaceData$D3DDataBufferNative$1;
using $D3DSurfaceData$D3DDataBufferNative$2 = ::sun::java2d::d3d::D3DSurfaceData$D3DDataBufferNative$2;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceData$D3DDataBufferNative_FieldInfo_[] = {
	{"pixel", "I", nullptr, 0, $field(D3DSurfaceData$D3DDataBufferNative, pixel)},
	{}
};

$MethodInfo _D3DSurfaceData$D3DDataBufferNative_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/SurfaceData;III)V", nullptr, $PROTECTED, $method(static_cast<void(D3DSurfaceData$D3DDataBufferNative::*)($SurfaceData*,int32_t,int32_t,int32_t)>(&D3DSurfaceData$D3DDataBufferNative::init$))},
	{"getElem", "(IILsun/java2d/SurfaceData;)I", nullptr, $PROTECTED},
	{"setElem", "(IIILsun/java2d/SurfaceData;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _D3DSurfaceData$D3DDataBufferNative_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative", "sun.java2d.d3d.D3DSurfaceData", "D3DDataBufferNative", $STATIC},
	{"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative$2", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DSurfaceData$D3DDataBufferNative_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative",
	"sun.awt.image.DataBufferNative",
	nullptr,
	_D3DSurfaceData$D3DDataBufferNative_FieldInfo_,
	_D3DSurfaceData$D3DDataBufferNative_MethodInfo_,
	nullptr,
	nullptr,
	_D3DSurfaceData$D3DDataBufferNative_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DSurfaceData"
};

$Object* allocate$D3DSurfaceData$D3DDataBufferNative($Class* clazz) {
	return $of($alloc(D3DSurfaceData$D3DDataBufferNative));
}

void D3DSurfaceData$D3DDataBufferNative::init$($SurfaceData* sData, int32_t type, int32_t w, int32_t h) {
	$DataBufferNative::init$(sData, type, w, h);
}

int32_t D3DSurfaceData$D3DDataBufferNative::getElem(int32_t x, int32_t y, $SurfaceData* sData) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sData)->isSurfaceLost()) {
		return 0;
	}
	int32_t retPixel = 0;
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->flushAndInvokeNow($$new($D3DSurfaceData$D3DDataBufferNative$1, this, sData, x, y));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			retPixel = this->pixel;
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return retPixel;
}

void D3DSurfaceData$D3DDataBufferNative::setElem(int32_t x, int32_t y, int32_t pixel, $SurfaceData* sData) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sData)->isSurfaceLost()) {
		return;
	}
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->flushAndInvokeNow($$new($D3DSurfaceData$D3DDataBufferNative$2, this, sData, x, y, pixel));
			$nc(sData)->markDirty();
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

D3DSurfaceData$D3DDataBufferNative::D3DSurfaceData$D3DDataBufferNative() {
}

$Class* D3DSurfaceData$D3DDataBufferNative::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceData$D3DDataBufferNative, name, initialize, &_D3DSurfaceData$D3DDataBufferNative_ClassInfo_, allocate$D3DSurfaceData$D3DDataBufferNative);
	return class$;
}

$Class* D3DSurfaceData$D3DDataBufferNative::class$ = nullptr;

		} // d3d
	} // java2d
} // sun