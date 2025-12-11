#include <sun/java2d/xr/XRPMBlitLoops.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <sun/java2d/xr/XRPMBlit.h>
#include <sun/java2d/xr/XRPMScaledBlit.h>
#include <sun/java2d/xr/XRPMTransformedBlit.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XrSwToPMBlit.h>
#include <sun/java2d/xr/XrSwToPMScaledBlit.h>
#include <sun/java2d/xr/XrSwToPMTransformedBlit.h>
#include <jcpp.h>

#undef OPAQUE

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $Transparency = ::java::awt::Transparency;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $Region = ::sun::java2d::pipe::Region;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;
using $XRGraphicsConfig = ::sun::java2d::xr::XRGraphicsConfig;
using $XRPMBlit = ::sun::java2d::xr::XRPMBlit;
using $XRPMScaledBlit = ::sun::java2d::xr::XRPMScaledBlit;
using $XRPMTransformedBlit = ::sun::java2d::xr::XRPMTransformedBlit;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XrSwToPMBlit = ::sun::java2d::xr::XrSwToPMBlit;
using $XrSwToPMScaledBlit = ::sun::java2d::xr::XrSwToPMScaledBlit;
using $XrSwToPMTransformedBlit = ::sun::java2d::xr::XrSwToPMTransformedBlit;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRPMBlitLoops_FieldInfo_[] = {
	{"argbTmpPM", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/awt/image/SunVolatileImage;>;", $STATIC, $staticField(XRPMBlitLoops, argbTmpPM)},
	{"rgbTmpPM", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/awt/image/SunVolatileImage;>;", $STATIC, $staticField(XRPMBlitLoops, rgbTmpPM)},
	{}
};

$MethodInfo _XRPMBlitLoops_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XRPMBlitLoops::*)()>(&XRPMBlitLoops::init$))},
	{"cacheToTmpSurface", "(Lsun/java2d/SurfaceData;Lsun/java2d/xr/XRSurfaceData;IIII)Lsun/java2d/xr/XRSurfaceData;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$XRSurfaceData*(*)($SurfaceData*,$XRSurfaceData*,int32_t,int32_t,int32_t,int32_t)>(&XRPMBlitLoops::cacheToTmpSurface))},
	{"register", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&XRPMBlitLoops::register$))},
	{}
};

$ClassInfo _XRPMBlitLoops_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.xr.XRPMBlitLoops",
	"java.lang.Object",
	nullptr,
	_XRPMBlitLoops_FieldInfo_,
	_XRPMBlitLoops_MethodInfo_
};

$Object* allocate$XRPMBlitLoops($Class* clazz) {
	return $of($alloc(XRPMBlitLoops));
}

$WeakReference* XRPMBlitLoops::argbTmpPM = nullptr;
$WeakReference* XRPMBlitLoops::rgbTmpPM = nullptr;

void XRPMBlitLoops::init$() {
}

void XRPMBlitLoops::register$() {
	$init(XRPMBlitLoops);
	$useLocalCurrentObjectStackCache();
	$init($XRSurfaceData);
	$init($SurfaceType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new($XRPMBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMScaledBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMScaledBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMScaledBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMScaledBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMTransformedBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMTransformedBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMTransformedBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XRPMTransformedBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMScaledBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntRgbX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntArgbPreX11)),
		static_cast<$GraphicsPrimitive*>($$new($XrSwToPMTransformedBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntArgbPreX11))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

$XRSurfaceData* XRPMBlitLoops::cacheToTmpSurface($SurfaceData* src, $XRSurfaceData* dst, int32_t w, int32_t h, int32_t sx, int32_t sy) {
	$init(XRPMBlitLoops);
	$useLocalCurrentObjectStackCache();
	$var($SunVolatileImage, vImg, nullptr);
	$var($SurfaceType, vImgSurfaceType, nullptr);
	if ($nc(src)->getTransparency() == $Transparency::OPAQUE) {
		$assign(vImg, $cast($SunVolatileImage, $nc(XRPMBlitLoops::rgbTmpPM)->get()));
		$init($SurfaceType);
		$assign(vImgSurfaceType, $SurfaceType::IntRgb);
	} else {
		$assign(vImg, $cast($SunVolatileImage, $nc(XRPMBlitLoops::argbTmpPM)->get()));
		$init($SurfaceType);
		$assign(vImgSurfaceType, $SurfaceType::IntArgbPre);
	}
	bool var$1 = vImg == nullptr || $nc(vImg)->getWidth() < w;
	bool var$0 = var$1 || $nc(vImg)->getHeight() < h;
	if (var$0 || !($instanceOf($XRSurfaceData, $($nc(vImg)->getDestSurface())))) {
		if (vImg != nullptr) {
			vImg->flush();
		}
		$assign(vImg, $cast($SunVolatileImage, $nc($($nc(dst)->getGraphicsConfig()))->createCompatibleVolatileImage(w, h, $nc(src)->getTransparency())));
		$nc(vImg)->setAccelerationPriority(1.0f);
		if (!($instanceOf($XRSurfaceData, $(vImg->getDestSurface())))) {
			$throwNew($InvalidPipeException, "Could not create XRSurfaceData"_s);
		}
		if ($nc(src)->getTransparency() == $SurfaceData::OPAQUE) {
			$assignStatic(XRPMBlitLoops::rgbTmpPM, $new($WeakReference, vImg));
		} else {
			$assignStatic(XRPMBlitLoops::argbTmpPM, $new($WeakReference, vImg));
		}
	}
	$init($CompositeType);
	$var($Blit, swToSurfaceBlit, $Blit::getFromCache($($nc(src)->getSurfaceType()), $CompositeType::SrcNoEa, vImgSurfaceType));
	if (!($instanceOf($XRSurfaceData, $($nc(vImg)->getDestSurface())))) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $(vImg->getDestSurface())}));
	}
	$var($XRSurfaceData, vImgSurface, $cast($XRSurfaceData, $nc(vImg)->getDestSurface()));
	$init($AlphaComposite);
	$nc(swToSurfaceBlit)->Blit$(src, vImgSurface, $AlphaComposite::Src, nullptr, sx, sy, 0, 0, w, h);
	return vImgSurface;
}

void clinit$XRPMBlitLoops($Class* class$) {
	$assignStatic(XRPMBlitLoops::argbTmpPM, $new($WeakReference, nullptr));
	$assignStatic(XRPMBlitLoops::rgbTmpPM, $new($WeakReference, nullptr));
}

XRPMBlitLoops::XRPMBlitLoops() {
}

$Class* XRPMBlitLoops::load$($String* name, bool initialize) {
	$loadClass(XRPMBlitLoops, name, initialize, &_XRPMBlitLoops_ClassInfo_, clinit$XRPMBlitLoops, allocate$XRPMBlitLoops);
	return class$;
}

$Class* XRPMBlitLoops::class$ = nullptr;

		} // xr
	} // java2d
} // sun