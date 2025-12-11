#include <javax/swing/plaf/metal/MetalIconFactory$RadioButtonIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JRadioButton = ::javax::swing::JRadioButton;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalIconFactory$RadioButtonIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$RadioButtonIcon::*)()>(&MetalIconFactory$RadioButtonIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"paintOceanIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$RadioButtonIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$RadioButtonIcon", "javax.swing.plaf.metal.MetalIconFactory", "RadioButtonIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$RadioButtonIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$RadioButtonIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$RadioButtonIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$RadioButtonIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$RadioButtonIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$RadioButtonIcon));
}

int32_t MetalIconFactory$RadioButtonIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$RadioButtonIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$RadioButtonIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$RadioButtonIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$RadioButtonIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$RadioButtonIcon::init$() {
}

void MetalIconFactory$RadioButtonIcon::paintOceanIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($ButtonModel, model, $nc(($cast($JRadioButton, c)))->getModel());
	bool enabled = $nc(model)->isEnabled();
	bool var$0 = enabled && model->isPressed();
	bool pressed = (var$0 && model->isArmed());
	bool rollover = (enabled && model->isRollover());
	$nc(g)->translate(x, y);
	if (enabled && !pressed) {
		$MetalUtils::drawGradient(c, g, "RadioButton.gradient"_s, 1, 1, 10, 10, true);
		g->setColor($($nc(c)->getBackground()));
		g->fillRect(1, 1, 1, 1);
		g->fillRect(10, 1, 1, 1);
		g->fillRect(1, 10, 1, 1);
		g->fillRect(10, 10, 1, 1);
	} else if (pressed || !enabled) {
		if (pressed) {
			g->setColor($($MetalLookAndFeel::getPrimaryControl()));
		} else {
			g->setColor($($MetalLookAndFeel::getControl()));
		}
		g->fillOval(1, 1, 9, 9);
	}
	if (!enabled) {
		g->setColor($($MetalLookAndFeel::getInactiveControlTextColor()));
	} else {
		g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
	}
	g->drawOval(0, 0, 11, 11);
	if (pressed) {
		g->drawArc(1, 1, 10, 10, 60, 160);
	} else if (rollover) {
		g->setColor($($MetalLookAndFeel::getPrimaryControl()));
		g->drawOval(2, 2, 7, 7);
	}
	if (model->isSelected()) {
		if (enabled) {
			g->setColor($($MetalLookAndFeel::getControlInfo()));
		} else {
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
		}
		g->fillOval(2, 2, 7, 7);
	}
	g->translate(-x, -y);
}

void MetalIconFactory$RadioButtonIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Object, aaHint, $SwingUtilities2::getAndSetAntialisingHintForScaledGraphics(g));
	if ($MetalLookAndFeel::usingOcean()) {
		paintOceanIcon(c, g, x, y);
		$SwingUtilities2::setAntialiasingHintForScaledGraphics(g, aaHint);
		return;
	}
	$var($JRadioButton, rb, $cast($JRadioButton, c));
	$var($ButtonModel, model, $nc(rb)->getModel());
	bool drawDot = $nc(model)->isSelected();
	$var($Color, background, $nc(c)->getBackground());
	$var($Color, dotColor, c->getForeground());
	$var($Color, shadow, $MetalLookAndFeel::getControlShadow());
	$var($Color, darkCircle, $MetalLookAndFeel::getControlDarkShadow());
	$var($Color, whiteInnerLeftArc, $MetalLookAndFeel::getControlHighlight());
	$var($Color, whiteOuterRightArc, $MetalLookAndFeel::getControlHighlight());
	$var($Color, interiorColor, background);
	if (!model->isEnabled()) {
		$assign(whiteInnerLeftArc, ($assign(whiteOuterRightArc, background)));
		$assign(darkCircle, ($assign(dotColor, shadow)));
	} else {
		bool var$1 = model->isPressed();
		if (var$1 && model->isArmed()) {
			$assign(whiteInnerLeftArc, ($assign(interiorColor, shadow)));
		}
	}
	$nc(g)->translate(x, y);
	if (c->isOpaque()) {
		g->setColor(interiorColor);
		g->fillRect(2, 2, 9, 9);
	}
	g->setColor(darkCircle);
	g->drawOval(0, 0, 11, 11);
	g->setColor(whiteInnerLeftArc);
	g->drawArc(1, 1, 10, 10, 60, 160);
	g->setColor(whiteOuterRightArc);
	g->drawArc(-1, -1, 13, 13, 235, 180);
	if (drawDot) {
		g->setColor(dotColor);
		g->fillOval(2, 2, 7, 7);
	}
	g->translate(-x, -y);
	$SwingUtilities2::setAntialiasingHintForScaledGraphics(g, aaHint);
}

int32_t MetalIconFactory$RadioButtonIcon::getIconWidth() {
	return 13;
}

int32_t MetalIconFactory$RadioButtonIcon::getIconHeight() {
	return 13;
}

MetalIconFactory$RadioButtonIcon::MetalIconFactory$RadioButtonIcon() {
}

$Class* MetalIconFactory$RadioButtonIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$RadioButtonIcon, name, initialize, &_MetalIconFactory$RadioButtonIcon_ClassInfo_, allocate$MetalIconFactory$RadioButtonIcon);
	return class$;
}

$Class* MetalIconFactory$RadioButtonIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax