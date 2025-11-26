#include <sun/java2d/xr/XrSwToPMTransformedBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/java2d/xr/XRPMBlitLoops.h>
#include <sun/java2d/xr/XRPMTransformedBlit.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $Region = ::sun::java2d::pipe::Region;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;
using $XRPMBlitLoops = ::sun::java2d::xr::XRPMBlitLoops;
using $XRPMTransformedBlit = ::sun::java2d::xr::XRPMTransformedBlit;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XrSwToPMTransformedBlit_FieldInfo_[] = {
	{"pmToSurfaceBlit", "Lsun/java2d/loops/TransformBlit;", nullptr, 0, $field(XrSwToPMTransformedBlit, pmToSurfaceBlit)},
	{}
};

$MethodInfo _XrSwToPMTransformedBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, 0, $method(static_cast<void(XrSwToPMTransformedBlit::*)($SurfaceType*,$SurfaceType*)>(&XrSwToPMTransformedBlit::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XrSwToPMTransformedBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XrSwToPMTransformedBlit",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	_XrSwToPMTransformedBlit_FieldInfo_,
	_XrSwToPMTransformedBlit_MethodInfo_
};

$Object* allocate$XrSwToPMTransformedBlit($Class* clazz) {
	return $of($alloc(XrSwToPMTransformedBlit));
}

void XrSwToPMTransformedBlit::init$($SurfaceType* srcType, $SurfaceType* dstType) {
	$init($CompositeType);
	$TransformBlit::init$(srcType, $CompositeType::AnyAlpha, dstType);
	$set(this, pmToSurfaceBlit, $new($XRPMTransformedBlit, dstType, dstType));
}

void XrSwToPMTransformedBlit::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* xform, int32_t hint, int32_t sx, int32_t sy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			$var($XRSurfaceData, vImgSurface, $XRPMBlitLoops::cacheToTmpSurface(src, $cast($XRSurfaceData, dst), w, h, sx, sy));
			$nc(this->pmToSurfaceBlit)->Transform(vImgSurface, dst, comp, clip, xform, hint, 0, 0, dstx, dsty, w, h);
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

XrSwToPMTransformedBlit::XrSwToPMTransformedBlit() {
}

$Class* XrSwToPMTransformedBlit::load$($String* name, bool initialize) {
	$loadClass(XrSwToPMTransformedBlit, name, initialize, &_XrSwToPMTransformedBlit_ClassInfo_, allocate$XrSwToPMTransformedBlit);
	return class$;
}

$Class* XrSwToPMTransformedBlit::class$ = nullptr;

		} // xr
	} // java2d
} // sun