#include <sun/java2d/x11/X11PMBlitBgLoops.h>

#include <java/awt/Composite.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/BlitBg.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $BlitBg = ::sun::java2d::loops::BlitBg;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

$MethodInfo _X11PMBlitBgLoops_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(X11PMBlitBgLoops::*)($SurfaceType*,$SurfaceType*)>(&X11PMBlitBgLoops::init$))},
	{"BlitBg", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIIII)V", nullptr, $PUBLIC},
	{"nativeBlitBg", "(JJJIIIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(X11PMBlitBgLoops::*)(int64_t,int64_t,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&X11PMBlitBgLoops::nativeBlitBg))},
	{"register", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&X11PMBlitBgLoops::register$))},
	{}
};

#define _METHOD_INDEX_nativeBlitBg 2

$ClassInfo _X11PMBlitBgLoops_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.x11.X11PMBlitBgLoops",
	"sun.java2d.loops.BlitBg",
	nullptr,
	nullptr,
	_X11PMBlitBgLoops_MethodInfo_
};

$Object* allocate$X11PMBlitBgLoops($Class* clazz) {
	return $of($alloc(X11PMBlitBgLoops));
}

void X11PMBlitBgLoops::register$() {
	$init(X11PMBlitBgLoops);
	$useLocalCurrentObjectStackCache();
	$init($X11SurfaceData);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::IntBgrX11_BM, $X11SurfaceData::IntBgrX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::IntRgbX11_BM, $X11SurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::ThreeByteBgrX11_BM, $X11SurfaceData::ThreeByteBgrX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::ThreeByteRgbX11_BM, $X11SurfaceData::ThreeByteRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::ByteIndexedX11_BM, $X11SurfaceData::ByteIndexedOpaqueX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::ByteGrayX11_BM, $X11SurfaceData::ByteGrayX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::Index8GrayX11_BM, $X11SurfaceData::Index8GrayX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::UShort555RgbX11_BM, $X11SurfaceData::UShort555RgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::UShort565RgbX11_BM, $X11SurfaceData::UShort565RgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::UShortIndexedX11_BM, $X11SurfaceData::UShortIndexedX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::IntRgbX11_BM, $X11SurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitBgLoops, $X11SurfaceData::IntBgrX11_BM, $X11SurfaceData::FourByteAbgrPreX11))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void X11PMBlitBgLoops::init$($SurfaceType* srcType, $SurfaceType* dstType) {
	$init($CompositeType);
	$BlitBg::init$(srcType, $CompositeType::SrcNoEa, dstType);
}

void X11PMBlitBgLoops::BlitBg$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t bgColor, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t pixel = $nc(dst)->pixelFor(bgColor);
			$var($X11SurfaceData, x11sd, $cast($X11SurfaceData, dst));
			int64_t xgc = x11sd->getBlitGC(clip, false);
			int64_t var$1 = $nc(src)->getNativeOps();
			nativeBlitBg(var$1, dst->getNativeOps(), xgc, pixel, sx, sy, dx, dy, w, h);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void X11PMBlitBgLoops::nativeBlitBg(int64_t srcData, int64_t dstData, int64_t xgc, int32_t pixel, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$prepareNative(X11PMBlitBgLoops, nativeBlitBg, void, int64_t srcData, int64_t dstData, int64_t xgc, int32_t pixel, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	$invokeNative(srcData, dstData, xgc, pixel, sx, sy, dx, dy, w, h);
	$finishNative();
}

X11PMBlitBgLoops::X11PMBlitBgLoops() {
}

$Class* X11PMBlitBgLoops::load$($String* name, bool initialize) {
	$loadClass(X11PMBlitBgLoops, name, initialize, &_X11PMBlitBgLoops_ClassInfo_, allocate$X11PMBlitBgLoops);
	return class$;
}

$Class* X11PMBlitBgLoops::class$ = nullptr;

		} // x11
	} // java2d
} // sun