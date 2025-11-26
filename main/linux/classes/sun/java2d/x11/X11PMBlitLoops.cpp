#include <sun/java2d/x11/X11PMBlitLoops.h>

#include <java/awt/Composite.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/x11/X11PMBlitLoops$DelegateBlitLoop.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $X11PMBlitLoops$DelegateBlitLoop = ::sun::java2d::x11::X11PMBlitLoops$DelegateBlitLoop;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

$MethodInfo _X11PMBlitLoops_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;Z)V", nullptr, $PUBLIC, $method(static_cast<void(X11PMBlitLoops::*)($SurfaceType*,$SurfaceType*,bool)>(&X11PMBlitLoops::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{"nativeBlit", "(JJJLsun/java2d/pipe/Region;IIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(X11PMBlitLoops::*)(int64_t,int64_t,int64_t,$Region*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&X11PMBlitLoops::nativeBlit))},
	{"register", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&X11PMBlitLoops::register$))},
	{"updateBitmask", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($SurfaceData*,$SurfaceData*,bool)>(&X11PMBlitLoops::updateBitmask))},
	{}
};

#define _METHOD_INDEX_nativeBlit 2
#define _METHOD_INDEX_updateBitmask 4

$InnerClassInfo _X11PMBlitLoops_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11PMBlitLoops$DelegateBlitLoop", "sun.java2d.x11.X11PMBlitLoops", "DelegateBlitLoop", $STATIC},
	{}
};

$ClassInfo _X11PMBlitLoops_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.x11.X11PMBlitLoops",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_X11PMBlitLoops_MethodInfo_,
	nullptr,
	nullptr,
	_X11PMBlitLoops_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11PMBlitLoops$DelegateBlitLoop"
};

$Object* allocate$X11PMBlitLoops($Class* clazz) {
	return $of($alloc(X11PMBlitLoops));
}

void X11PMBlitLoops::register$() {
	$init(X11PMBlitLoops);
	$useLocalCurrentObjectStackCache();
	$init($X11SurfaceData);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11, $X11SurfaceData::IntBgrX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11, $X11SurfaceData::IntRgbX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::ThreeByteBgrX11, $X11SurfaceData::ThreeByteBgrX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::ThreeByteRgbX11, $X11SurfaceData::ThreeByteRgbX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::ByteIndexedOpaqueX11, $X11SurfaceData::ByteIndexedOpaqueX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::ByteGrayX11, $X11SurfaceData::ByteGrayX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::Index8GrayX11, $X11SurfaceData::Index8GrayX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::UShort555RgbX11, $X11SurfaceData::UShort555RgbX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::UShort565RgbX11, $X11SurfaceData::UShort565RgbX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::UShortIndexedX11, $X11SurfaceData::UShortIndexedX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11_BM, $X11SurfaceData::IntBgrX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11_BM, $X11SurfaceData::IntRgbX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::ThreeByteBgrX11_BM, $X11SurfaceData::ThreeByteBgrX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::ThreeByteRgbX11_BM, $X11SurfaceData::ThreeByteRgbX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::ByteIndexedX11_BM, $X11SurfaceData::ByteIndexedOpaqueX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::ByteGrayX11_BM, $X11SurfaceData::ByteGrayX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::Index8GrayX11_BM, $X11SurfaceData::Index8GrayX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::UShort555RgbX11_BM, $X11SurfaceData::UShort555RgbX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::UShort565RgbX11_BM, $X11SurfaceData::UShort565RgbX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::UShortIndexedX11_BM, $X11SurfaceData::UShortIndexedX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11, $X11SurfaceData::IntArgbPreX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11, $X11SurfaceData::IntArgbPreX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11_BM, $X11SurfaceData::IntArgbPreX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11, $X11SurfaceData::FourByteAbgrPreX11, true)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11, $X11SurfaceData::FourByteAbgrPreX11, false)),
		static_cast<$GraphicsPrimitive*>($$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11_BM, $X11SurfaceData::FourByteAbgrPreX11, true)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::IntBgrX11_BM, $X11SurfaceData::IntBgrX11)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::IntRgbX11_BM, $X11SurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::ThreeByteBgrX11_BM, $X11SurfaceData::ThreeByteBgrX11)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::ThreeByteRgbX11_BM, $X11SurfaceData::ThreeByteRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::ByteIndexedX11_BM, $X11SurfaceData::ByteIndexedOpaqueX11)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::ByteGrayX11_BM, $X11SurfaceData::ByteGrayX11)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::Index8GrayX11_BM, $X11SurfaceData::Index8GrayX11)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::UShort555RgbX11_BM, $X11SurfaceData::UShort555RgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::UShort565RgbX11_BM, $X11SurfaceData::UShort565RgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::UShortIndexedX11_BM, $X11SurfaceData::UShortIndexedX11))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void X11PMBlitLoops::init$($SurfaceType* srcType, $SurfaceType* dstType, bool over) {
	$init($CompositeType);
	$Blit::init$(srcType, over ? $CompositeType::SrcOverNoEa : $CompositeType::SrcNoEa, dstType);
}

void X11PMBlitLoops::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($X11SurfaceData, x11sd, $cast($X11SurfaceData, dst));
			int64_t xgc = $nc(x11sd)->getBlitGC(nullptr, false);
			int64_t var$1 = $nc(src)->getNativeOps();
			nativeBlit(var$1, $nc(dst)->getNativeOps(), xgc, clip, sx, sy, dx, dy, w, h);
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

void X11PMBlitLoops::nativeBlit(int64_t srcData, int64_t dstData, int64_t xgc, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$prepareNative(X11PMBlitLoops, nativeBlit, void, int64_t srcData, int64_t dstData, int64_t xgc, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	$invokeNative(X11PMBlitLoops, nativeBlit, srcData, dstData, xgc, clip, sx, sy, dx, dy, w, h);
	$finishNative();
}

void X11PMBlitLoops::updateBitmask($SurfaceData* src, $SurfaceData* dst, bool isICM) {
	$init(X11PMBlitLoops);
	$prepareNativeStatic(X11PMBlitLoops, updateBitmask, void, $SurfaceData* src, $SurfaceData* dst, bool isICM);
	$invokeNativeStatic(X11PMBlitLoops, updateBitmask, src, dst, isICM);
	$finishNativeStatic();
}

X11PMBlitLoops::X11PMBlitLoops() {
}

$Class* X11PMBlitLoops::load$($String* name, bool initialize) {
	$loadClass(X11PMBlitLoops, name, initialize, &_X11PMBlitLoops_ClassInfo_, allocate$X11PMBlitLoops);
	return class$;
}

$Class* X11PMBlitLoops::class$ = nullptr;

		} // x11
	} // java2d
} // sun