#include <javax/swing/plaf/metal/MetalIconFactory$RadioButtonMenuItemIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalIconFactory$RadioButtonMenuItemIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$RadioButtonMenuItemIcon::*)()>(&MetalIconFactory$RadioButtonMenuItemIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"paintOceanIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$RadioButtonMenuItemIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$RadioButtonMenuItemIcon", "javax.swing.plaf.metal.MetalIconFactory", "RadioButtonMenuItemIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$RadioButtonMenuItemIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$RadioButtonMenuItemIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$RadioButtonMenuItemIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$RadioButtonMenuItemIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$RadioButtonMenuItemIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$RadioButtonMenuItemIcon));
}

int32_t MetalIconFactory$RadioButtonMenuItemIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$RadioButtonMenuItemIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$RadioButtonMenuItemIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$RadioButtonMenuItemIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$RadioButtonMenuItemIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$RadioButtonMenuItemIcon::init$() {
}

void MetalIconFactory$RadioButtonMenuItemIcon::paintOceanIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($ButtonModel, model, $nc(($cast($JMenuItem, c)))->getModel());
	bool isSelected = $nc(model)->isSelected();
	bool isEnabled = model->isEnabled();
	bool isPressed = model->isPressed();
	bool isArmed = model->isArmed();
	$nc(g)->translate(x, y);
	if (isEnabled) {
		$MetalUtils::drawGradient(c, g, "RadioButtonMenuItem.gradient"_s, 1, 1, 7, 7, true);
		if (isPressed || isArmed) {
			g->setColor($($MetalLookAndFeel::getPrimaryControl()));
		} else {
			g->setColor($($MetalLookAndFeel::getControlHighlight()));
		}
		g->drawArc(-1, -1, 10, 10, 245, 140);
		if (isPressed || isArmed) {
			g->setColor($($MetalLookAndFeel::getControlInfo()));
		} else {
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
		}
	} else {
		g->setColor($($MetalLookAndFeel::getMenuDisabledForeground()));
	}
	g->drawOval(0, 0, 8, 8);
	if (isSelected) {
		if (isEnabled) {
			if (isArmed || ($instanceOf($JMenu, c) && model->isSelected())) {
				g->setColor($($MetalLookAndFeel::getMenuSelectedForeground()));
			} else {
				g->setColor($($MetalLookAndFeel::getControlInfo()));
			}
		} else {
			g->setColor($($MetalLookAndFeel::getMenuDisabledForeground()));
		}
		g->fillOval(2, 2, 4, 4);
		g->drawOval(2, 2, 4, 4);
	}
	g->translate(-x, -y);
}

void MetalIconFactory$RadioButtonMenuItemIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Object, aaHint, $SwingUtilities2::getAndSetAntialisingHintForScaledGraphics(g));
	if ($MetalLookAndFeel::usingOcean()) {
		paintOceanIcon(c, g, x, y);
		$SwingUtilities2::setAntialiasingHintForScaledGraphics(g, aaHint);
		return;
	}
	$var($JMenuItem, b, $cast($JMenuItem, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	bool isSelected = $nc(model)->isSelected();
	bool isEnabled = model->isEnabled();
	bool isPressed = model->isPressed();
	bool isArmed = model->isArmed();
	$nc(g)->translate(x, y);
	if (isEnabled) {
		if (isPressed || isArmed) {
			g->setColor($($MetalLookAndFeel::getPrimaryControl()));
			g->drawOval(1, 1, 8, 8);
			g->setColor($($MetalLookAndFeel::getControlInfo()));
			g->drawOval(0, 0, 8, 8);
		} else {
			g->setColor($($MetalLookAndFeel::getControlHighlight()));
			g->drawOval(1, 1, 8, 8);
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->drawOval(0, 0, 8, 8);
		}
	} else {
		g->setColor($($MetalLookAndFeel::getMenuDisabledForeground()));
		g->drawOval(0, 0, 8, 8);
	}
	if (isSelected) {
		if (isEnabled) {
			bool var$0 = model->isArmed();
			if (var$0 || ($instanceOf($JMenu, c) && model->isSelected())) {
				g->setColor($($MetalLookAndFeel::getMenuSelectedForeground()));
			} else {
				g->setColor($(b->getForeground()));
			}
		} else {
			g->setColor($($MetalLookAndFeel::getMenuDisabledForeground()));
		}
		g->fillOval(2, 2, 4, 4);
		g->drawOval(2, 2, 4, 4);
	}
	g->translate(-x, -y);
	$SwingUtilities2::setAntialiasingHintForScaledGraphics(g, aaHint);
}

int32_t MetalIconFactory$RadioButtonMenuItemIcon::getIconWidth() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::menuCheckIconSize)->width;
}

int32_t MetalIconFactory$RadioButtonMenuItemIcon::getIconHeight() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::menuCheckIconSize)->height;
}

MetalIconFactory$RadioButtonMenuItemIcon::MetalIconFactory$RadioButtonMenuItemIcon() {
}

$Class* MetalIconFactory$RadioButtonMenuItemIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$RadioButtonMenuItemIcon, name, initialize, &_MetalIconFactory$RadioButtonMenuItemIcon_ClassInfo_, allocate$MetalIconFactory$RadioButtonMenuItemIcon);
	return class$;
}

$Class* MetalIconFactory$RadioButtonMenuItemIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax