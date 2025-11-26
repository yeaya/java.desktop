#include <sun/java2d/xr/XRPMBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef FAST

using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRPMBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(XRPMBlit::*)($SurfaceType*,$SurfaceType*)>(&XRPMBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XRPMBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XRPMBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_XRPMBlit_MethodInfo_
};

$Object* allocate$XRPMBlit($Class* clazz) {
	return $of($alloc(XRPMBlit));
}

void XRPMBlit::init$($SurfaceType* srcType, $SurfaceType* dstType) {
	$init($CompositeType);
	$Blit::init$(srcType, $CompositeType::AnyAlpha, dstType);
}

void XRPMBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			$var($XRSurfaceData, x11sdDst, $cast($XRSurfaceData, dst));
			$nc(x11sdDst)->validateAsDestination(nullptr, clip);
			$var($XRSurfaceData, x11sdSrc, $cast($XRSurfaceData, src));
			$nc(x11sdSrc)->validateAsSource(nullptr, $XRUtils::RepeatNone, $XRUtils::FAST);
			$nc(x11sdDst->maskBuffer)->validateCompositeState(comp, nullptr, nullptr, nullptr);
			$nc(x11sdDst->maskBuffer)->compositeBlit(x11sdSrc, x11sdDst, sx, sy, dx, dy, w, h);
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

XRPMBlit::XRPMBlit() {
}

$Class* XRPMBlit::load$($String* name, bool initialize) {
	$loadClass(XRPMBlit, name, initialize, &_XRPMBlit_ClassInfo_, allocate$XRPMBlit);
	return class$;
}

$Class* XRPMBlit::class$ = nullptr;

		} // xr
	} // java2d
} // sun