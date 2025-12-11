#include <sun/java2d/xr/XRMaskBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/MaskTileManager.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef FAST

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $MaskTileManager = ::sun::java2d::xr::MaskTileManager;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRMaskBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(XRMaskBlit::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&XRMaskBlit::init$))},
	{"MaskBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII[BII)V", nullptr, $PUBLIC},
	{"maskBlit", "(JJIIIIIIIII[B)V", nullptr, $PROTECTED | $NATIVE},
	{"register", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XRMaskBlit::register$))},
	{}
};

#define _METHOD_INDEX_maskBlit 2

$ClassInfo _XRMaskBlit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRMaskBlit",
	"sun.java2d.loops.MaskBlit",
	nullptr,
	nullptr,
	_XRMaskBlit_MethodInfo_
};

$Object* allocate$XRMaskBlit($Class* clazz) {
	return $of($alloc(XRMaskBlit));
}

void XRMaskBlit::register$() {
	$init(XRMaskBlit);
	$useLocalCurrentObjectStackCache();
	$init($XRSurfaceData);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(XRMaskBlit, $XRSurfaceData::IntArgbPreX11, $CompositeType::SrcOver, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskBlit, $XRSurfaceData::IntRgbX11, $CompositeType::SrcOver, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskBlit, $XRSurfaceData::IntArgbPreX11, $CompositeType::SrcNoEa, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskBlit, $XRSurfaceData::IntRgbX11, $CompositeType::SrcNoEa, $XRSurfaceData::IntArgbPreX11))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void XRMaskBlit::init$($SurfaceType* srcType, $CompositeType* compType, $SurfaceType* dstType) {
	$init($CompositeType);
	$MaskBlit::init$(srcType, $CompositeType::AnyAlpha, dstType);
}

void XRMaskBlit::maskBlit(int64_t srcXsdo, int64_t dstxsdo, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) {
	$prepareNative(XRMaskBlit, maskBlit, void, int64_t srcXsdo, int64_t dstxsdo, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask);
	$invokeNative(srcXsdo, dstxsdo, srcx, srcy, dstx, dsty, w, h, maskoff, maskscan, masklen, mask);
	$finishNative();
}

void XRMaskBlit::MaskBlit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height, $bytes* mask, int32_t maskoff, int32_t maskscan) {
	$useLocalCurrentObjectStackCache();
	if (width <= 0 || height <= 0) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			$var($XRSurfaceData, x11sd, $cast($XRSurfaceData, src));
			$nc(x11sd)->validateAsSource(nullptr, $XRUtils::RepeatNone, $XRUtils::FAST);
			$var($XRCompositeManager, maskBuffer, x11sd->maskBuffer);
			$var($XRSurfaceData, x11dst, $cast($XRSurfaceData, dst));
			$nc(x11dst)->validateAsDestination(nullptr, clip);
			int32_t maskPict = $nc($($nc(maskBuffer)->getMaskBuffer()))->uploadMask(width, height, maskscan, maskoff, mask);
			int32_t var$1 = x11sd->getPicture();
			int32_t var$2 = maskPict;
			maskBuffer->XRComposite(var$1, var$2, x11dst->getPicture(), srcx, srcy, 0, 0, dstx, dsty, width, height);
			$nc($(maskBuffer->getMaskBuffer()))->clearUploadMask(maskPict, width, height);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

XRMaskBlit::XRMaskBlit() {
}

$Class* XRMaskBlit::load$($String* name, bool initialize) {
	$loadClass(XRMaskBlit, name, initialize, &_XRMaskBlit_ClassInfo_, allocate$XRMaskBlit);
	return class$;
}

$Class* XRMaskBlit::class$ = nullptr;

		} // xr
	} // java2d
} // sun