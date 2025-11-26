#include <sun/java2d/xr/XRPMScaledBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Math.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/ScaledBlit.h>
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
using $Double = ::java::lang::Double;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRPMScaledBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(XRPMScaledBlit::*)($SurfaceType*,$SurfaceType*)>(&XRPMScaledBlit::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XRPMScaledBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XRPMScaledBlit",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	nullptr,
	_XRPMScaledBlit_MethodInfo_
};

$Object* allocate$XRPMScaledBlit($Class* clazz) {
	return $of($alloc(XRPMScaledBlit));
}

void XRPMScaledBlit::init$($SurfaceType* srcType, $SurfaceType* dstType) {
	$init($CompositeType);
	$ScaledBlit::init$(srcType, $CompositeType::AnyAlpha, dstType);
}

void XRPMScaledBlit::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			$var($XRSurfaceData, x11sdDst, $cast($XRSurfaceData, dst));
			$nc(x11sdDst)->validateAsDestination(nullptr, clip);
			$var($XRSurfaceData, x11sdSrc, $cast($XRSurfaceData, src));
			$nc(x11sdDst->maskBuffer)->validateCompositeState(comp, nullptr, nullptr, nullptr);
			double xScale = (dx2 - dx1) / (sx2 - sx1);
			double yScale = (dy2 - dy1) / (sy2 - sy1);
			sx1 *= xScale;
			sx2 *= xScale;
			sy1 *= yScale;
			sy2 *= yScale;
			dx1 = $Math::ceil(dx1 - 0.5);
			dy1 = $Math::ceil(dy1 - 0.5);
			dx2 = $Math::ceil(dx2 - 0.5);
			dy2 = $Math::ceil(dy2 - 0.5);
			$var($AffineTransform, xForm, $AffineTransform::getScaleInstance(1 / xScale, 1 / yScale));
			$nc(x11sdSrc)->validateAsSource(xForm, $XRUtils::RepeatNone, $XRUtils::FAST);
			$nc(x11sdDst->maskBuffer)->compositeBlit(x11sdSrc, x11sdDst, sx1, sy1, $cast(int32_t, dx1), $cast(int32_t, dy1), $cast(int32_t, (dx2 - dx1)), $cast(int32_t, (dy2 - dy1)));
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

XRPMScaledBlit::XRPMScaledBlit() {
}

$Class* XRPMScaledBlit::load$($String* name, bool initialize) {
	$loadClass(XRPMScaledBlit, name, initialize, &_XRPMScaledBlit_ClassInfo_, allocate$XRPMScaledBlit);
	return class$;
}

$Class* XRPMScaledBlit::class$ = nullptr;

		} // xr
	} // java2d
} // sun