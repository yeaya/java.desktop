#include <sun/java2d/xr/XrSwToPMScaledBlit.h>

#include <java/awt/Composite.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/java2d/xr/XRPMBlitLoops.h>
#include <sun/java2d/xr/XRPMScaledBlit.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;
using $XRPMBlitLoops = ::sun::java2d::xr::XRPMBlitLoops;
using $XRPMScaledBlit = ::sun::java2d::xr::XRPMScaledBlit;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XrSwToPMScaledBlit_FieldInfo_[] = {
	{"pmToSurfaceBlit", "Lsun/java2d/loops/ScaledBlit;", nullptr, 0, $field(XrSwToPMScaledBlit, pmToSurfaceBlit)},
	{}
};

$MethodInfo _XrSwToPMScaledBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, 0, $method(static_cast<void(XrSwToPMScaledBlit::*)($SurfaceType*,$SurfaceType*)>(&XrSwToPMScaledBlit::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XrSwToPMScaledBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XrSwToPMScaledBlit",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	_XrSwToPMScaledBlit_FieldInfo_,
	_XrSwToPMScaledBlit_MethodInfo_
};

$Object* allocate$XrSwToPMScaledBlit($Class* clazz) {
	return $of($alloc(XrSwToPMScaledBlit));
}

void XrSwToPMScaledBlit::init$($SurfaceType* srcType, $SurfaceType* dstType) {
	$init($CompositeType);
	$ScaledBlit::init$(srcType, $CompositeType::AnyAlpha, dstType);
	$set(this, pmToSurfaceBlit, $new($XRPMScaledBlit, dstType, dstType));
}

void XrSwToPMScaledBlit::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t w = sx2 - sx1;
		int32_t h = sy2 - sy1;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$SunToolkit::awtLock();
				$var($XRSurfaceData, vImgSurface, $XRPMBlitLoops::cacheToTmpSurface(src, $cast($XRSurfaceData, dst), w, h, sx1, sy1));
				$nc(this->pmToSurfaceBlit)->Scale(vImgSurface, dst, comp, clip, 0, 0, w, h, dx1, dy1, dx2, dy2);
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
}

XrSwToPMScaledBlit::XrSwToPMScaledBlit() {
}

$Class* XrSwToPMScaledBlit::load$($String* name, bool initialize) {
	$loadClass(XrSwToPMScaledBlit, name, initialize, &_XrSwToPMScaledBlit_ClassInfo_, allocate$XrSwToPMScaledBlit);
	return class$;
}

$Class* XrSwToPMScaledBlit::class$ = nullptr;

		} // xr
	} // java2d
} // sun