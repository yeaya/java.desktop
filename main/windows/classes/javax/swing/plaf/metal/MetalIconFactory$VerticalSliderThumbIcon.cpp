#include <javax/swing/plaf/metal/MetalIconFactory$VerticalSliderThumbIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalIconFactory$VerticalSliderThumbIcon_FieldInfo_[] = {
	{"controlBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PROTECTED | $STATIC, $staticField(MetalIconFactory$VerticalSliderThumbIcon, controlBumps)},
	{"primaryBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PROTECTED | $STATIC, $staticField(MetalIconFactory$VerticalSliderThumbIcon, primaryBumps)},
	{}
};

$MethodInfo _MetalIconFactory$VerticalSliderThumbIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory$VerticalSliderThumbIcon::*)()>(&MetalIconFactory$VerticalSliderThumbIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$VerticalSliderThumbIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$VerticalSliderThumbIcon", "javax.swing.plaf.metal.MetalIconFactory", "VerticalSliderThumbIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$VerticalSliderThumbIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$VerticalSliderThumbIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable,javax.swing.plaf.UIResource",
	_MetalIconFactory$VerticalSliderThumbIcon_FieldInfo_,
	_MetalIconFactory$VerticalSliderThumbIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$VerticalSliderThumbIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$VerticalSliderThumbIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$VerticalSliderThumbIcon));
}

int32_t MetalIconFactory$VerticalSliderThumbIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$VerticalSliderThumbIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$VerticalSliderThumbIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$VerticalSliderThumbIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$VerticalSliderThumbIcon::finalize() {
	this->$Icon::finalize();
}

$MetalBumps* MetalIconFactory$VerticalSliderThumbIcon::controlBumps = nullptr;
$MetalBumps* MetalIconFactory$VerticalSliderThumbIcon::primaryBumps = nullptr;

void MetalIconFactory$VerticalSliderThumbIcon::init$() {
	$var($Color, var$0, static_cast<$Color*>($MetalLookAndFeel::getControlHighlight()));
	$var($Color, var$1, static_cast<$Color*>($MetalLookAndFeel::getControlInfo()));
	$assignStatic(MetalIconFactory$VerticalSliderThumbIcon::controlBumps, $new($MetalBumps, 6, 10, var$0, var$1, $($MetalLookAndFeel::getControl())));
	$var($Color, var$2, static_cast<$Color*>($MetalLookAndFeel::getPrimaryControl()));
	$var($Color, var$3, static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	$assignStatic(MetalIconFactory$VerticalSliderThumbIcon::primaryBumps, $new($MetalBumps, 6, 10, var$2, var$3, $($MetalLookAndFeel::getPrimaryControlShadow())));
}

void MetalIconFactory$VerticalSliderThumbIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	bool leftToRight = $MetalUtils::isLeftToRight(c);
	$nc(g)->translate(x, y);
	$var($Rectangle, clip, g->getClipBounds());
	int32_t var$0 = getIconWidth();
	g->clipRect(0, 0, var$0, getIconHeight());
	if ($nc(c)->hasFocus()) {
		g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	} else {
		g->setColor(c->isEnabled() ? $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlInfo())) : $(static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow())));
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
	if ($nc(c)->hasFocus()) {
		g->setColor($(c->getForeground()));
	} else {
		g->setColor($($MetalLookAndFeel::getControl()));
	}
	if (leftToRight) {
		g->fillRect(1, 1, 8, 13);
		g->drawLine(9, 2, 9, 12);
		g->drawLine(10, 3, 10, 11);
		g->drawLine(11, 4, 11, 10);
		g->drawLine(12, 5, 12, 9);
		g->drawLine(13, 6, 13, 8);
		g->drawLine(14, 7, 14, 7);
	} else {
		g->fillRect(7, 1, 8, 13);
		g->drawLine(6, 3, 6, 12);
		g->drawLine(5, 4, 5, 11);
		g->drawLine(4, 5, 4, 10);
		g->drawLine(3, 6, 3, 9);
		g->drawLine(2, 7, 2, 8);
	}
	int32_t offset = (leftToRight) ? 2 : 8;
	if ($nc(c)->isEnabled()) {
		if (c->hasFocus()) {
			$nc(MetalIconFactory$VerticalSliderThumbIcon::primaryBumps)->paintIcon(c, g, offset, 2);
		} else {
			$nc(MetalIconFactory$VerticalSliderThumbIcon::controlBumps)->paintIcon(c, g, offset, 2);
		}
	}
	if ($nc(c)->isEnabled()) {
		g->setColor(c->hasFocus() ? $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControl())) : $(static_cast<$Color*>($MetalLookAndFeel::getControlHighlight())));
		if (leftToRight) {
			g->drawLine(1, 1, 8, 1);
			g->drawLine(1, 1, 1, 13);
		} else {
			g->drawLine(8, 1, 14, 1);
			g->drawLine(1, 7, 7, 1);
		}
	}
	g->setClip(clip);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$VerticalSliderThumbIcon::getIconWidth() {
	return 16;
}

int32_t MetalIconFactory$VerticalSliderThumbIcon::getIconHeight() {
	return 15;
}

MetalIconFactory$VerticalSliderThumbIcon::MetalIconFactory$VerticalSliderThumbIcon() {
}

$Class* MetalIconFactory$VerticalSliderThumbIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$VerticalSliderThumbIcon, name, initialize, &_MetalIconFactory$VerticalSliderThumbIcon_ClassInfo_, allocate$MetalIconFactory$VerticalSliderThumbIcon);
	return class$;
}

$Class* MetalIconFactory$VerticalSliderThumbIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax