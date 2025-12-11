#include <javax/swing/plaf/metal/MetalIconFactory$OceanVerticalSliderThumbIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/swing/CachedPainter.h>
#include <jcpp.h>

#undef BITMASK
#undef LTR_THUMB_SHAPE
#undef RTL_THUMB_SHAPE
#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Transparency = ::java::awt::Transparency;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $CachedPainter = ::sun::swing::CachedPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalIconFactory$OceanVerticalSliderThumbIcon_FieldInfo_[] = {
	{"LTR_THUMB_SHAPE", "Ljava/awt/Polygon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory$OceanVerticalSliderThumbIcon, LTR_THUMB_SHAPE)},
	{"RTL_THUMB_SHAPE", "Ljava/awt/Polygon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory$OceanVerticalSliderThumbIcon, RTL_THUMB_SHAPE)},
	{}
};

$MethodInfo _MetalIconFactory$OceanVerticalSliderThumbIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalIconFactory$OceanVerticalSliderThumbIcon::*)()>(&MetalIconFactory$OceanVerticalSliderThumbIcon::init$))},
	{"createImage", "(Ljava/awt/Component;IILjava/awt/GraphicsConfiguration;[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"paintToImage", "(Ljava/awt/Component;Ljava/awt/Image;Ljava/awt/Graphics;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$OceanVerticalSliderThumbIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$OceanVerticalSliderThumbIcon", "javax.swing.plaf.metal.MetalIconFactory", "OceanVerticalSliderThumbIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$OceanVerticalSliderThumbIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$OceanVerticalSliderThumbIcon",
	"sun.swing.CachedPainter",
	"javax.swing.Icon,java.io.Serializable,javax.swing.plaf.UIResource",
	_MetalIconFactory$OceanVerticalSliderThumbIcon_FieldInfo_,
	_MetalIconFactory$OceanVerticalSliderThumbIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$OceanVerticalSliderThumbIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$OceanVerticalSliderThumbIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$OceanVerticalSliderThumbIcon));
}

int32_t MetalIconFactory$OceanVerticalSliderThumbIcon::hashCode() {
	 return this->$CachedPainter::hashCode();
}

bool MetalIconFactory$OceanVerticalSliderThumbIcon::equals(Object$* arg0) {
	 return this->$CachedPainter::equals(arg0);
}

$Object* MetalIconFactory$OceanVerticalSliderThumbIcon::clone() {
	 return this->$CachedPainter::clone();
}

$String* MetalIconFactory$OceanVerticalSliderThumbIcon::toString() {
	 return this->$CachedPainter::toString();
}

void MetalIconFactory$OceanVerticalSliderThumbIcon::finalize() {
	this->$CachedPainter::finalize();
}

$Polygon* MetalIconFactory$OceanVerticalSliderThumbIcon::LTR_THUMB_SHAPE = nullptr;
$Polygon* MetalIconFactory$OceanVerticalSliderThumbIcon::RTL_THUMB_SHAPE = nullptr;

void MetalIconFactory$OceanVerticalSliderThumbIcon::init$() {
	$CachedPainter::init$(3);
}

void MetalIconFactory$OceanVerticalSliderThumbIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	$var($Component, var$0, c);
	$var($Graphics, var$1, g);
	int32_t var$2 = x;
	int32_t var$3 = y;
	int32_t var$4 = getIconWidth();
	int32_t var$5 = getIconHeight();
	paint(var$0, var$1, var$2, var$3, var$4, var$5, $$new($ObjectArray, {
		$($of($Boolean::valueOf($MetalUtils::isLeftToRight(c)))),
		$($of($Boolean::valueOf($nc(c)->hasFocus()))),
		$($of($Boolean::valueOf($nc(c)->isEnabled()))),
		$($of($MetalLookAndFeel::getCurrentTheme()))
	}));
}

void MetalIconFactory$OceanVerticalSliderThumbIcon::paintToImage($Component* c, $Image* image, $Graphics* g2, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, g, $cast($Graphics2D, g2));
	bool leftToRight = $nc(($cast($Boolean, $nc(args)->get(0))))->booleanValue();
	bool hasFocus = $nc(($cast($Boolean, args->get(1))))->booleanValue();
	bool enabled = $nc(($cast($Boolean, args->get(2))))->booleanValue();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	if (leftToRight) {
		g->clip(MetalIconFactory$OceanVerticalSliderThumbIcon::LTR_THUMB_SHAPE);
	} else {
		g->clip(MetalIconFactory$OceanVerticalSliderThumbIcon::RTL_THUMB_SHAPE);
	}
	if (!enabled) {
		g->setColor($($MetalLookAndFeel::getControl()));
		g->fillRect(1, 1, 14, 14);
	} else if (hasFocus) {
		$MetalUtils::drawGradient(c, g, "Slider.focusGradient"_s, 1, 1, 14, 14, false);
	} else {
		$MetalUtils::drawGradient(c, g, "Slider.gradient"_s, 1, 1, 14, 14, false);
	}
	g->setClip(clip);
	if (hasFocus) {
		g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	} else {
		g->setColor(enabled ? $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlInfo())) : $(static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow())));
	}
	if (leftToRight) {
		g->drawLine(1, 0, 8, 0);
		g->drawLine(0, 1, 0, 13);
		g->drawLine(1, 14, 8, 14);
		g->drawLine(9, 1, 15, 7);
		g->drawLine(9, 13, 15, 7);
	} else {
		g->drawLine(7, 0, 14, 0);
		g->drawLine(15, 1, 15, 13);
		g->drawLine(7, 14, 14, 14);
		g->drawLine(0, 7, 6, 1);
		g->drawLine(0, 7, 6, 13);
	}
	if (hasFocus && enabled) {
		g->setColor($($MetalLookAndFeel::getPrimaryControl()));
		if (leftToRight) {
			g->drawLine(1, 1, 8, 1);
			g->drawLine(1, 1, 1, 13);
			g->drawLine(1, 13, 8, 13);
			g->drawLine(9, 2, 14, 7);
			g->drawLine(9, 12, 14, 7);
		} else {
			g->drawLine(7, 1, 14, 1);
			g->drawLine(14, 1, 14, 13);
			g->drawLine(7, 13, 14, 13);
			g->drawLine(1, 7, 7, 1);
			g->drawLine(1, 7, 7, 13);
		}
	}
}

int32_t MetalIconFactory$OceanVerticalSliderThumbIcon::getIconWidth() {
	return 16;
}

int32_t MetalIconFactory$OceanVerticalSliderThumbIcon::getIconHeight() {
	return 15;
}

$Image* MetalIconFactory$OceanVerticalSliderThumbIcon::createImage($Component* c, int32_t w, int32_t h, $GraphicsConfiguration* config, $ObjectArray* args) {
	if (config == nullptr) {
		return $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB);
	}
	return $nc(config)->createCompatibleImage(w, h, $Transparency::BITMASK);
}

void clinit$MetalIconFactory$OceanVerticalSliderThumbIcon($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$assignStatic(MetalIconFactory$OceanVerticalSliderThumbIcon::LTR_THUMB_SHAPE, $new($Polygon, $$new($ints, {
			0,
			8,
			15,
			8,
			0
		}), $$new($ints, {
			0,
			0,
			7,
			14,
			14
		}), 5));
		$assignStatic(MetalIconFactory$OceanVerticalSliderThumbIcon::RTL_THUMB_SHAPE, $new($Polygon, $$new($ints, {
			15,
			15,
			7,
			0,
			7
		}), $$new($ints, {
			0,
			14,
			14,
			7,
			0
		}), 5));
	}
}

MetalIconFactory$OceanVerticalSliderThumbIcon::MetalIconFactory$OceanVerticalSliderThumbIcon() {
}

$Class* MetalIconFactory$OceanVerticalSliderThumbIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$OceanVerticalSliderThumbIcon, name, initialize, &_MetalIconFactory$OceanVerticalSliderThumbIcon_ClassInfo_, clinit$MetalIconFactory$OceanVerticalSliderThumbIcon, allocate$MetalIconFactory$OceanVerticalSliderThumbIcon);
	return class$;
}

$Class* MetalIconFactory$OceanVerticalSliderThumbIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax