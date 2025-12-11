#include <sun/java2d/xr/XRMaskFill.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/MaskTileManager.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $MaskTileManager = ::sun::java2d::xr::MaskTileManager;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRMaskFill_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(XRMaskFill::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&XRMaskFill::init$))},
	{"MaskFill", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;IIII[BII)V", nullptr, $PUBLIC},
	{"maskFill", "(JIIIIIII[B)V", nullptr, $PROTECTED | $NATIVE},
	{"register", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XRMaskFill::register$))},
	{}
};

#define _METHOD_INDEX_maskFill 2

$ClassInfo _XRMaskFill_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRMaskFill",
	"sun.java2d.loops.MaskFill",
	nullptr,
	nullptr,
	_XRMaskFill_MethodInfo_
};

$Object* allocate$XRMaskFill($Class* clazz) {
	return $of($alloc(XRMaskFill));
}

void XRMaskFill::register$() {
	$init(XRMaskFill);
	$useLocalCurrentObjectStackCache();
	$init($SurfaceType);
	$init($CompositeType);
	$init($XRSurfaceData);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::AnyColor, $CompositeType::SrcOver, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueColor, $CompositeType::SrcNoEa, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::GradientPaint, $CompositeType::SrcOver, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueGradientPaint, $CompositeType::SrcNoEa, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::LinearGradientPaint, $CompositeType::SrcOver, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueLinearGradientPaint, $CompositeType::SrcNoEa, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::RadialGradientPaint, $CompositeType::SrcOver, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueRadialGradientPaint, $CompositeType::SrcNoEa, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::TexturePaint, $CompositeType::SrcOver, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueTexturePaint, $CompositeType::SrcNoEa, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::AnyColor, $CompositeType::SrcOver, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueColor, $CompositeType::SrcNoEa, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::GradientPaint, $CompositeType::SrcOver, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueGradientPaint, $CompositeType::SrcNoEa, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::LinearGradientPaint, $CompositeType::SrcOver, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueLinearGradientPaint, $CompositeType::SrcNoEa, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::RadialGradientPaint, $CompositeType::SrcOver, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueRadialGradientPaint, $CompositeType::SrcNoEa, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::TexturePaint, $CompositeType::SrcOver, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new(XRMaskFill, $SurfaceType::OpaqueTexturePaint, $CompositeType::SrcNoEa, $XRSurfaceData::IntArgbPreX11))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void XRMaskFill::init$($SurfaceType* srcType, $CompositeType* compType, $SurfaceType* surfaceType) {
	$MaskFill::init$(srcType, compType, surfaceType);
}

void XRMaskFill::maskFill(int64_t xsdo, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) {
	$prepareNative(XRMaskFill, maskFill, void, int64_t xsdo, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask);
	$invokeNative(xsdo, x, y, w, h, maskoff, maskscan, masklen, mask);
	$finishNative();
}

void XRMaskFill::MaskFill$($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t maskoff, int32_t maskscan) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			$var($XRSurfaceData, x11sd, $cast($XRSurfaceData, sData));
			$nc(x11sd)->validateAsDestination(nullptr, $($nc(sg2d)->getCompClip()));
			$var($XRCompositeManager, maskBuffer, x11sd->maskBuffer);
			$nc(maskBuffer)->validateCompositeState(comp, $nc(sg2d)->transform$, sg2d->paint, sg2d);
			int32_t maskPict = $nc($(maskBuffer->getMaskBuffer()))->uploadMask(w, h, maskscan, maskoff, mask);
			maskBuffer->XRComposite($XRUtils::None, maskPict, x11sd->picture, x, y, 0, 0, x, y, w, h);
			$nc($(maskBuffer->getMaskBuffer()))->clearUploadMask(maskPict, w, h);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

XRMaskFill::XRMaskFill() {
}

$Class* XRMaskFill::load$($String* name, bool initialize) {
	$loadClass(XRMaskFill, name, initialize, &_XRMaskFill_ClassInfo_, allocate$XRMaskFill);
	return class$;
}

$Class* XRMaskFill::class$ = nullptr;

		} // xr
	} // java2d
} // sun