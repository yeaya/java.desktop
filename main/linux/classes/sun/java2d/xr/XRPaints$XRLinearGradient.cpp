#include <sun/java2d/xr/XRPaints$XRLinearGradient.h>

#include <java/awt/Color.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Paint.h>
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

#undef SRGB

using $ColorArray = $Array<::java::awt::Color>;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $Paint = ::java::awt::Paint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
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

$MethodInfo _XRPaints$XRLinearGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XRPaints$XRLinearGradient::*)()>(&XRPaints$XRLinearGradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{"setXRPaint", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Paint;)V", nullptr, 0},
	{}
};

$InnerClassInfo _XRPaints$XRLinearGradient_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRPaints$XRLinearGradient", "sun.java2d.xr.XRPaints", "XRLinearGradient", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XRPaints$XRLinearGradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XRPaints$XRLinearGradient",
	"sun.java2d.xr.XRPaints",
	nullptr,
	nullptr,
	_XRPaints$XRLinearGradient_MethodInfo_,
	nullptr,
	nullptr,
	_XRPaints$XRLinearGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRPaints"
};

$Object* allocate$XRPaints$XRLinearGradient($Class* clazz) {
	return $of($alloc(XRPaints$XRLinearGradient));
}

void XRPaints$XRLinearGradient::init$() {
	$XRPaints::init$();
}

bool XRPaints$XRLinearGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($LinearGradientPaint, paint, $cast($LinearGradientPaint, $nc(sg2d)->getPaint()));
	$init($MultipleGradientPaint$ColorSpaceType);
	bool var$2 = $nc(paint)->getColorSpace() == $MultipleGradientPaint$ColorSpaceType::SRGB;
	bool var$1 = var$2 && $XRUtils::isPointCoordInShortRange($(paint->getStartPoint()));
	bool var$0 = var$1 && $XRUtils::isPointCoordInShortRange($(paint->getEndPoint()));
	return var$0 && $nc($(paint->getTransform()))->getDeterminant() != 0.0;
}

void XRPaints$XRLinearGradient::setXRPaint($SunGraphics2D* sg2d, $Paint* pt) {
	$useLocalCurrentObjectStackCache();
	$var($LinearGradientPaint, paint, $cast($LinearGradientPaint, pt));
	$var($ColorArray, colors, $nc(paint)->getColors());
	$var($Point2D, pt1, paint->getStartPoint());
	$var($Point2D, pt2, paint->getEndPoint());
	int32_t repeat = $XRUtils::getRepeatForCycleMethod($(paint->getCycleMethod()));
	$var($floats, fractions, paint->getFractions());
	$var($ints, pixels, convertToIntArgbPixels(colors));
	$var($AffineTransform, at, paint->getTransform());
	try {
		$nc(at)->invert();
	} catch ($NoninvertibleTransformException& ex) {
		ex->printStackTrace();
	}
	$init($XRPaints);
	$var($XRBackend, con, $nc($XRPaints::xrCompMan)->getBackend());
	int32_t gradient = $nc(con)->createLinearGradient(pt1, pt2, fractions, pixels, repeat);
	$var($XRSurfaceData$XRInternalSurfaceData, x11sd, $new($XRSurfaceData$XRInternalSurfaceData, con, gradient));
	x11sd->setStaticSrcTx(at);
	$nc($XRPaints::xrCompMan)->setGradientPaint(x11sd);
}

XRPaints$XRLinearGradient::XRPaints$XRLinearGradient() {
}

$Class* XRPaints$XRLinearGradient::load$($String* name, bool initialize) {
	$loadClass(XRPaints$XRLinearGradient, name, initialize, &_XRPaints$XRLinearGradient_ClassInfo_, allocate$XRPaints$XRLinearGradient);
	return class$;
}

$Class* XRPaints$XRLinearGradient::class$ = nullptr;

		} // xr
	} // java2d
} // sun