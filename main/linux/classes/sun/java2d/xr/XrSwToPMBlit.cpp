#include <sun/java2d/xr/XrSwToPMBlit.h>

#include <java/awt/Composite.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/java2d/xr/XRPMBlit.h>
#include <sun/java2d/xr/XRPMBlitLoops.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;
using $XRPMBlit = ::sun::java2d::xr::XRPMBlit;
using $XRPMBlitLoops = ::sun::java2d::xr::XRPMBlitLoops;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XrSwToPMBlit_FieldInfo_[] = {
	{"pmToSurfaceBlit", "Lsun/java2d/loops/Blit;", nullptr, 0, $field(XrSwToPMBlit, pmToSurfaceBlit)},
	{}
};

$MethodInfo _XrSwToPMBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, 0, $method(static_cast<void(XrSwToPMBlit::*)($SurfaceType*,$SurfaceType*)>(&XrSwToPMBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XrSwToPMBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XrSwToPMBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_XrSwToPMBlit_FieldInfo_,
	_XrSwToPMBlit_MethodInfo_
};

$Object* allocate$XrSwToPMBlit($Class* clazz) {
	return $of($alloc(XrSwToPMBlit));
}

void XrSwToPMBlit::init$($SurfaceType* srcType, $SurfaceType* dstType) {
	$init($CompositeType);
	$Blit::init$(srcType, $CompositeType::AnyAlpha, dstType);
	$set(this, pmToSurfaceBlit, $new($XRPMBlit, dstType, dstType));
}

void XrSwToPMBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			$var($XRSurfaceData, vImgSurface, $XRPMBlitLoops::cacheToTmpSurface(src, $cast($XRSurfaceData, dst), w, h, sx, sy));
			$nc(this->pmToSurfaceBlit)->Blit$(vImgSurface, dst, comp, clip, 0, 0, dx, dy, w, h);
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

XrSwToPMBlit::XrSwToPMBlit() {
}

$Class* XrSwToPMBlit::load$($String* name, bool initialize) {
	$loadClass(XrSwToPMBlit, name, initialize, &_XrSwToPMBlit_ClassInfo_, allocate$XrSwToPMBlit);
	return class$;
}

$Class* XrSwToPMBlit::class$ = nullptr;

		} // xr
	} // java2d
} // sun