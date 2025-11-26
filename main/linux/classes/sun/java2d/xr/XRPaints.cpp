#include <sun/java2d/xr/XRPaints.h>

#include <java/awt/Color.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/Point2D.h>
#include <java/lang/Math.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRPaints$XRGradient.h>
#include <sun/java2d/xr/XRPaints$XRLinearGradient.h>
#include <sun/java2d/xr/XRPaints$XRRadialGradient.h>
#include <sun/java2d/xr/XRPaints$XRTexture.h>
#include <jcpp.h>

#undef PAINT_GRADIENT
#undef PAINT_LIN_GRADIENT
#undef PAINT_RAD_GRADIENT
#undef PAINT_TEXTURE

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Paint = ::java::awt::Paint;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRPaints$XRGradient = ::sun::java2d::xr::XRPaints$XRGradient;
using $XRPaints$XRLinearGradient = ::sun::java2d::xr::XRPaints$XRLinearGradient;
using $XRPaints$XRRadialGradient = ::sun::java2d::xr::XRPaints$XRRadialGradient;
using $XRPaints$XRTexture = ::sun::java2d::xr::XRPaints$XRTexture;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRPaints_FieldInfo_[] = {
	{"xrCompMan", "Lsun/java2d/xr/XRCompositeManager;", nullptr, $STATIC, $staticField(XRPaints, xrCompMan)},
	{"xrGradient", "Lsun/java2d/xr/XRPaints$XRGradient;", nullptr, $STATIC | $FINAL, $staticField(XRPaints, xrGradient)},
	{"xrLinearGradient", "Lsun/java2d/xr/XRPaints$XRLinearGradient;", nullptr, $STATIC | $FINAL, $staticField(XRPaints, xrLinearGradient)},
	{"xrRadialGradient", "Lsun/java2d/xr/XRPaints$XRRadialGradient;", nullptr, $STATIC | $FINAL, $staticField(XRPaints, xrRadialGradient)},
	{"xrTexture", "Lsun/java2d/xr/XRPaints$XRTexture;", nullptr, $STATIC | $FINAL, $staticField(XRPaints, xrTexture)},
	{}
};

$MethodInfo _XRPaints_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XRPaints::*)()>(&XRPaints::init$))},
	{"colorToIntArgbPixel", "(Ljava/awt/Color;)I", nullptr, $PUBLIC},
	{"convertToIntArgbPixels", "([Ljava/awt/Color;)[I", nullptr, $PUBLIC},
	{"getGradientLength", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)I", nullptr, $PUBLIC},
	{"getXRPaint", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/xr/XRPaints;", nullptr, $PRIVATE | $STATIC, $method(static_cast<XRPaints*(*)($SunGraphics2D*)>(&XRPaints::getXRPaint))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $ABSTRACT},
	{"isValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($SunGraphics2D*)>(&XRPaints::isValid))},
	{"register", "(Lsun/java2d/xr/XRCompositeManager;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($XRCompositeManager*)>(&XRPaints::register$))},
	{"setPaint", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Paint;)V", nullptr, $STATIC, $method(static_cast<void(*)($SunGraphics2D*,$Paint*)>(&XRPaints::setPaint))},
	{"setXRPaint", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Paint;)V", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _XRPaints_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRPaints$XRTexture", "sun.java2d.xr.XRPaints", "XRTexture", $PRIVATE | $STATIC},
	{"sun.java2d.xr.XRPaints$XRRadialGradient", "sun.java2d.xr.XRPaints", "XRRadialGradient", $PRIVATE | $STATIC},
	{"sun.java2d.xr.XRPaints$XRLinearGradient", "sun.java2d.xr.XRPaints", "XRLinearGradient", $PRIVATE | $STATIC},
	{"sun.java2d.xr.XRPaints$XRGradient", "sun.java2d.xr.XRPaints", "XRGradient", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XRPaints_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.java2d.xr.XRPaints",
	"java.lang.Object",
	nullptr,
	_XRPaints_FieldInfo_,
	_XRPaints_MethodInfo_,
	nullptr,
	nullptr,
	_XRPaints_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRPaints$XRTexture,sun.java2d.xr.XRPaints$XRRadialGradient,sun.java2d.xr.XRPaints$XRLinearGradient,sun.java2d.xr.XRPaints$XRGradient"
};

$Object* allocate$XRPaints($Class* clazz) {
	return $of($alloc(XRPaints));
}

$XRCompositeManager* XRPaints::xrCompMan = nullptr;
$XRPaints$XRGradient* XRPaints::xrGradient = nullptr;
$XRPaints$XRLinearGradient* XRPaints::xrLinearGradient = nullptr;
$XRPaints$XRRadialGradient* XRPaints::xrRadialGradient = nullptr;
$XRPaints$XRTexture* XRPaints::xrTexture = nullptr;

void XRPaints::init$() {
}

void XRPaints::register$($XRCompositeManager* xrComp) {
	$init(XRPaints);
	$assignStatic(XRPaints::xrCompMan, xrComp);
}

XRPaints* XRPaints::getXRPaint($SunGraphics2D* sg2d) {
	$init(XRPaints);
	switch ($nc(sg2d)->paintState) {
	case $SunGraphics2D::PAINT_GRADIENT:
		{
			return XRPaints::xrGradient;
		}
	case $SunGraphics2D::PAINT_LIN_GRADIENT:
		{
			return XRPaints::xrLinearGradient;
		}
	case $SunGraphics2D::PAINT_RAD_GRADIENT:
		{
			return XRPaints::xrRadialGradient;
		}
	case $SunGraphics2D::PAINT_TEXTURE:
		{
			return XRPaints::xrTexture;
		}
	default:
		{
			return nullptr;
		}
	}
}

bool XRPaints::isValid($SunGraphics2D* sg2d) {
	$init(XRPaints);
	$var(XRPaints, impl, getXRPaint(sg2d));
	return (impl != nullptr && impl->isPaintValid(sg2d));
}

void XRPaints::setPaint($SunGraphics2D* sg2d, $Paint* paint) {
	$init(XRPaints);
	$var(XRPaints, impl, getXRPaint(sg2d));
	if (impl != nullptr) {
		impl->setXRPaint(sg2d, paint);
	}
}

int32_t XRPaints::getGradientLength($Point2D* pt1, $Point2D* pt2) {
	double var$1 = $nc(pt1)->getX();
	double var$0 = $Math::max(var$1, $nc(pt2)->getX());
	double var$3 = $nc(pt1)->getX();
	double var$2 = $Math::min(var$3, $nc(pt2)->getX());
	double xDiff = var$0 - var$2;
	double var$5 = $nc(pt1)->getY();
	double var$4 = $Math::max(var$5, $nc(pt2)->getY());
	double var$7 = $nc(pt1)->getY();
	double var$6 = $Math::min(var$7, $nc(pt2)->getY());
	double yDiff = var$4 - var$6;
	return $cast(int32_t, $Math::ceil($Math::sqrt(xDiff * xDiff + yDiff * yDiff)));
}

$ints* XRPaints::convertToIntArgbPixels($ColorArray* colors) {
	$var($ints, pixels, $new($ints, $nc(colors)->length));
	for (int32_t i = 0; i < colors->length; ++i) {
		pixels->set(i, colorToIntArgbPixel(colors->get(i)));
	}
	return pixels;
}

int32_t XRPaints::colorToIntArgbPixel($Color* c) {
	int32_t rgb = $nc(c)->getRGB();
	int32_t a = $Math::round($nc(XRPaints::xrCompMan)->getExtraAlpha() * ((int32_t)((uint32_t)rgb >> 24)));
	return ((a << 24) | ((int32_t)(rgb & (uint32_t)0x00FFFFFF)));
}

void clinit$XRPaints($Class* class$) {
	$assignStatic(XRPaints::xrGradient, $new($XRPaints$XRGradient));
	$assignStatic(XRPaints::xrLinearGradient, $new($XRPaints$XRLinearGradient));
	$assignStatic(XRPaints::xrRadialGradient, $new($XRPaints$XRRadialGradient));
	$assignStatic(XRPaints::xrTexture, $new($XRPaints$XRTexture));
}

XRPaints::XRPaints() {
}

$Class* XRPaints::load$($String* name, bool initialize) {
	$loadClass(XRPaints, name, initialize, &_XRPaints_ClassInfo_, clinit$XRPaints, allocate$XRPaints);
	return class$;
}

$Class* XRPaints::class$ = nullptr;

		} // xr
	} // java2d
} // sun