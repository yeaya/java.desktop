#include <sun/java2d/xr/XRPaints$XRRadialGradient.h>

#include <java/awt/Color.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Paint.h>
#include <java/awt/RadialGradientPaint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Point2D.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRPaints.h>
#include <sun/java2d/xr/XRSurfaceData$XRInternalSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef SRGB

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $Paint = ::java::awt::Paint;
using $RadialGradientPaint = ::java::awt::RadialGradientPaint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
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

$MethodInfo _XRPaints$XRRadialGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XRPaints$XRRadialGradient::*)()>(&XRPaints$XRRadialGradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{"setXRPaint", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Paint;)V", nullptr, 0},
	{}
};

$InnerClassInfo _XRPaints$XRRadialGradient_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRPaints$XRRadialGradient", "sun.java2d.xr.XRPaints", "XRRadialGradient", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XRPaints$XRRadialGradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XRPaints$XRRadialGradient",
	"sun.java2d.xr.XRPaints",
	nullptr,
	nullptr,
	_XRPaints$XRRadialGradient_MethodInfo_,
	nullptr,
	nullptr,
	_XRPaints$XRRadialGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRPaints"
};

$Object* allocate$XRPaints$XRRadialGradient($Class* clazz) {
	return $of($alloc(XRPaints$XRRadialGradient));
}

void XRPaints$XRRadialGradient::init$() {
	$XRPaints::init$();
}

bool XRPaints$XRRadialGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($RadialGradientPaint, grad, $cast($RadialGradientPaint, $nc(sg2d)->paint));
	$init($MultipleGradientPaint$ColorSpaceType);
	bool var$3 = $nc(grad)->getColorSpace() == $MultipleGradientPaint$ColorSpaceType::SRGB;
	bool var$2 = var$3 && $nc($(grad->getFocusPoint()))->equals($(grad->getCenterPoint()));
	bool var$1 = var$2 && $XRUtils::isPointCoordInShortRange($(grad->getCenterPoint()));
	bool var$0 = var$1 && grad->getRadius() <= $Short::MAX_VALUE;
	return var$0 && $nc($(grad->getTransform()))->getDeterminant() != 0.0;
}

void XRPaints$XRRadialGradient::setXRPaint($SunGraphics2D* sg2d, $Paint* pt) {
	$useLocalCurrentObjectStackCache();
	$var($RadialGradientPaint, paint, $cast($RadialGradientPaint, pt));
	$var($ColorArray, colors, $nc(paint)->getColors());
	$var($Point2D, center, paint->getCenterPoint());
	float cx = (float)$nc(center)->getX();
	float cy = (float)center->getY();
	$var($AffineTransform, at, paint->getTransform());
	int32_t repeat = $XRUtils::getRepeatForCycleMethod($(paint->getCycleMethod()));
	$var($floats, fractions, paint->getFractions());
	$var($ints, pixels, convertToIntArgbPixels(colors));
	float radius = paint->getRadius();
	try {
		$nc(at)->invert();
	} catch ($NoninvertibleTransformException& ex) {
		ex->printStackTrace();
	}
	$init($XRPaints);
	$var($XRBackend, con, $nc($XRPaints::xrCompMan)->getBackend());
	int32_t gradient = $nc(con)->createRadialGradient(cx, cy, (float)0, radius, fractions, pixels, repeat);
	$var($XRSurfaceData$XRInternalSurfaceData, x11sd, $new($XRSurfaceData$XRInternalSurfaceData, con, gradient));
	x11sd->setStaticSrcTx(at);
	$nc($XRPaints::xrCompMan)->setGradientPaint(x11sd);
}

XRPaints$XRRadialGradient::XRPaints$XRRadialGradient() {
}

$Class* XRPaints$XRRadialGradient::load$($String* name, bool initialize) {
	$loadClass(XRPaints$XRRadialGradient, name, initialize, &_XRPaints$XRRadialGradient_ClassInfo_, allocate$XRPaints$XRRadialGradient);
	return class$;
}

$Class* XRPaints$XRRadialGradient::class$ = nullptr;

		} // xr
	} // java2d
} // sun