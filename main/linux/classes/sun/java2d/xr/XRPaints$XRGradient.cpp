#include <sun/java2d/xr/XRPaints$XRGradient.h>

#include <java/awt/Color.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/Point2D.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRPaints.h>
#include <sun/java2d/xr/XRSurfaceData$XRInternalSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $GradientPaint = ::java::awt::GradientPaint;
using $Paint = ::java::awt::Paint;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRPaints = ::sun::java2d::xr::XRPaints;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRSurfaceData$XRInternalSurfaceData = ::sun::java2d::xr::XRSurfaceData$XRInternalSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRPaints$XRGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XRPaints$XRGradient::*)()>(&XRPaints$XRGradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{"setXRPaint", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Paint;)V", nullptr, 0},
	{}
};

$InnerClassInfo _XRPaints$XRGradient_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRPaints$XRGradient", "sun.java2d.xr.XRPaints", "XRGradient", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XRPaints$XRGradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XRPaints$XRGradient",
	"sun.java2d.xr.XRPaints",
	nullptr,
	nullptr,
	_XRPaints$XRGradient_MethodInfo_,
	nullptr,
	nullptr,
	_XRPaints$XRGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRPaints"
};

$Object* allocate$XRPaints$XRGradient($Class* clazz) {
	return $of($alloc(XRPaints$XRGradient));
}

void XRPaints$XRGradient::init$() {
	$XRPaints::init$();
}

bool XRPaints$XRGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($GradientPaint, paint, $cast($GradientPaint, $nc(sg2d)->paint));
	bool var$0 = $XRUtils::isPointCoordInShortRange($($nc(paint)->getPoint1()));
	return var$0 && $XRUtils::isPointCoordInShortRange($($nc(paint)->getPoint2()));
}

void XRPaints$XRGradient::setXRPaint($SunGraphics2D* sg2d, $Paint* pt) {
	$useLocalCurrentObjectStackCache();
	$var($GradientPaint, paint, $cast($GradientPaint, pt));
	int32_t repeat = $nc(paint)->isCyclic() ? $XRUtils::RepeatReflect : $XRUtils::RepeatPad;
	$var($floats, fractions, $new($floats, {
		(float)0,
		(float)1
	}));
	$var($ints, pixels, convertToIntArgbPixels($$new($ColorArray, {
		$($nc(paint)->getColor1()),
		$(paint->getColor2())
	})));
	$var($Point2D, pt1, $nc(paint)->getPoint1());
	$var($Point2D, pt2, paint->getPoint2());
	$init($XRPaints);
	$var($XRBackend, con, $nc($XRPaints::xrCompMan)->getBackend());
	int32_t gradient = $nc(con)->createLinearGradient(pt1, pt2, fractions, pixels, repeat);
	$nc($XRPaints::xrCompMan)->setGradientPaint($$new($XRSurfaceData$XRInternalSurfaceData, con, gradient));
}

XRPaints$XRGradient::XRPaints$XRGradient() {
}

$Class* XRPaints$XRGradient::load$($String* name, bool initialize) {
	$loadClass(XRPaints$XRGradient, name, initialize, &_XRPaints$XRGradient_ClassInfo_, allocate$XRPaints$XRGradient);
	return class$;
}

$Class* XRPaints$XRGradient::class$ = nullptr;

		} // xr
	} // java2d
} // sun