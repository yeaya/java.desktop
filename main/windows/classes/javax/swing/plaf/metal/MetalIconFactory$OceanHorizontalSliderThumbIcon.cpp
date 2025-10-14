#include <javax/swing/plaf/metal/MetalIconFactory$OceanHorizontalSliderThumbIcon.h>

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
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/swing/CachedPainter.h>
#include <jcpp.h>

#undef BITMASK
#undef THUMB_SHAPE
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
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $CachedPainter = ::sun::swing::CachedPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalIconFactory$OceanHorizontalSliderThumbIcon_FieldInfo_[] = {
	{"THUMB_SHAPE", "Ljava/awt/Polygon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory$OceanHorizontalSliderThumbIcon, THUMB_SHAPE)},
	{}
};

$MethodInfo _MetalIconFactory$OceanHorizontalSliderThumbIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalIconFactory$OceanHorizontalSliderThumbIcon::*)()>(&MetalIconFactory$OceanHorizontalSliderThumbIcon::init$))},
	{"createImage", "(Ljava/awt/Component;IILjava/awt/GraphicsConfiguration;[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"paintToImage", "(Ljava/awt/Component;Ljava/awt/Image;Ljava/awt/Graphics;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$OceanHorizontalSliderThumbIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$OceanHorizontalSliderThumbIcon", "javax.swing.plaf.metal.MetalIconFactory", "OceanHorizontalSliderThumbIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$OceanHorizontalSliderThumbIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$OceanHorizontalSliderThumbIcon",
	"sun.swing.CachedPainter",
	"javax.swing.Icon,java.io.Serializable,javax.swing.plaf.UIResource",
	_MetalIconFactory$OceanHorizontalSliderThumbIcon_FieldInfo_,
	_MetalIconFactory$OceanHorizontalSliderThumbIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$OceanHorizontalSliderThumbIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$OceanHorizontalSliderThumbIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$OceanHorizontalSliderThumbIcon));
}

int32_t MetalIconFactory$OceanHorizontalSliderThumbIcon::hashCode() {
	 return this->$CachedPainter::hashCode();
}

bool MetalIconFactory$OceanHorizontalSliderThumbIcon::equals(Object$* arg0) {
	 return this->$CachedPainter::equals(arg0);
}

$Object* MetalIconFactory$OceanHorizontalSliderThumbIcon::clone() {
	 return this->$CachedPainter::clone();
}

$String* MetalIconFactory$OceanHorizontalSliderThumbIcon::toString() {
	 return this->$CachedPainter::toString();
}

void MetalIconFactory$OceanHorizontalSliderThumbIcon::finalize() {
	this->$CachedPainter::finalize();
}

$Polygon* MetalIconFactory$OceanHorizontalSliderThumbIcon::THUMB_SHAPE = nullptr;

void MetalIconFactory$OceanHorizontalSliderThumbIcon::init$() {
	$CachedPainter::init$(3);
}

void MetalIconFactory$OceanHorizontalSliderThumbIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
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
		$($of($Boolean::valueOf($nc(c)->hasFocus()))),
		$($of($Boolean::valueOf($nc(c)->isEnabled()))),
		$($of($MetalLookAndFeel::getCurrentTheme()))
	}));
}

$Image* MetalIconFactory$OceanHorizontalSliderThumbIcon::createImage($Component* c, int32_t w, int32_t h, $GraphicsConfiguration* config, $ObjectArray* args) {
	if (config == nullptr) {
		return $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB);
	}
	return $nc(config)->createCompatibleImage(w, h, $Transparency::BITMASK);
}

void MetalIconFactory$OceanHorizontalSliderThumbIcon::paintToImage($Component* c, $Image* image, $Graphics* g2, int32_t w, int32_t h, $ObjectArray* args) {
	$var($Graphics2D, g, $cast($Graphics2D, g2));
	bool hasFocus = $nc(($cast($Boolean, $nc(args)->get(0))))->booleanValue();
	bool enabled = $nc(($cast($Boolean, args->get(1))))->booleanValue();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	g->clip(MetalIconFactory$OceanHorizontalSliderThumbIcon::THUMB_SHAPE);
	if (!enabled) {
		g->setColor($($MetalLookAndFeel::getControl()));
		g->fillRect(1, 1, 13, 14);
	} else if (hasFocus) {
		$MetalUtils::drawGradient(c, g, "Slider.focusGradient"_s, 1, 1, 13, 14, true);
	} else {
		$MetalUtils::drawGradient(c, g, "Slider.gradient"_s, 1, 1, 13, 14, true);
	}
	g->setClip(clip);
	if (hasFocus) {
		g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	} else {
		g->setColor(enabled ? $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlInfo())) : $(static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow())));
	}
	g->drawLine(1, 0, 13, 0);
	g->drawLine(0, 1, 0, 8);
	g->drawLine(14, 1, 14, 8);
	g->drawLine(1, 9, 7, 15);
	g->drawLine(7, 15, 14, 8);
	if (hasFocus && enabled) {
		g->setColor($($MetalLookAndFeel::getPrimaryControl()));
		g->fillRect(1, 1, 13, 1);
		g->fillRect(1, 2, 1, 7);
		g->fillRect(13, 2, 1, 7);
		g->drawLine(2, 9, 7, 14);
		g->drawLine(8, 13, 12, 9);
	}
}

int32_t MetalIconFactory$OceanHorizontalSliderThumbIcon::getIconWidth() {
	return 15;
}

int32_t MetalIconFactory$OceanHorizontalSliderThumbIcon::getIconHeight() {
	return 16;
}

void clinit$MetalIconFactory$OceanHorizontalSliderThumbIcon($Class* class$) {
	{
		$assignStatic(MetalIconFactory$OceanHorizontalSliderThumbIcon::THUMB_SHAPE, $new($Polygon, $$new($ints, {
			0,
			14,
			14,
			7,
			0
		}), $$new($ints, {
			0,
			0,
			8,
			15,
			8
		}), 5));
	}
}

MetalIconFactory$OceanHorizontalSliderThumbIcon::MetalIconFactory$OceanHorizontalSliderThumbIcon() {
}

$Class* MetalIconFactory$OceanHorizontalSliderThumbIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$OceanHorizontalSliderThumbIcon, name, initialize, &_MetalIconFactory$OceanHorizontalSliderThumbIcon_ClassInfo_, clinit$MetalIconFactory$OceanHorizontalSliderThumbIcon, allocate$MetalIconFactory$OceanHorizontalSliderThumbIcon);
	return class$;
}

$Class* MetalIconFactory$OceanHorizontalSliderThumbIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax