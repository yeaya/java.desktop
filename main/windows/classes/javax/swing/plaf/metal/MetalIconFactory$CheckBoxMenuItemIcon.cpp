#include <javax/swing/plaf/metal/MetalIconFactory$CheckBoxMenuItemIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalIconFactory$CheckBoxMenuItemIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$CheckBoxMenuItemIcon::*)()>(&MetalIconFactory$CheckBoxMenuItemIcon::init$))},
	{"drawCheck", "(Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$CheckBoxMenuItemIcon::*)($Graphics*)>(&MetalIconFactory$CheckBoxMenuItemIcon::drawCheck))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"paintOceanIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$CheckBoxMenuItemIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$CheckBoxMenuItemIcon", "javax.swing.plaf.metal.MetalIconFactory", "CheckBoxMenuItemIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$CheckBoxMenuItemIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$CheckBoxMenuItemIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$CheckBoxMenuItemIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$CheckBoxMenuItemIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$CheckBoxMenuItemIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$CheckBoxMenuItemIcon));
}

int32_t MetalIconFactory$CheckBoxMenuItemIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$CheckBoxMenuItemIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$CheckBoxMenuItemIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$CheckBoxMenuItemIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$CheckBoxMenuItemIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$CheckBoxMenuItemIcon::init$() {
}

void MetalIconFactory$CheckBoxMenuItemIcon::paintOceanIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($ButtonModel, model, $nc(($cast($JMenuItem, c)))->getModel());
	bool isSelected = $nc(model)->isSelected();
	bool isEnabled = model->isEnabled();
	bool isPressed = model->isPressed();
	bool isArmed = model->isArmed();
	$nc(g)->translate(x, y);
	if (isEnabled) {
		$MetalUtils::drawGradient(c, g, "CheckBoxMenuItem.gradient"_s, 1, 1, 7, 7, true);
		if (isPressed || isArmed) {
			g->setColor($($MetalLookAndFeel::getControlInfo()));
			g->drawLine(0, 0, 8, 0);
			g->drawLine(0, 0, 0, 8);
			g->drawLine(8, 2, 8, 8);
			g->drawLine(2, 8, 8, 8);
			g->setColor($($MetalLookAndFeel::getPrimaryControl()));
			g->drawLine(9, 1, 9, 9);
			g->drawLine(1, 9, 9, 9);
		} else {
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->drawLine(0, 0, 8, 0);
			g->drawLine(0, 0, 0, 8);
			g->drawLine(8, 2, 8, 8);
			g->drawLine(2, 8, 8, 8);
			g->setColor($($MetalLookAndFeel::getControlHighlight()));
			g->drawLine(9, 1, 9, 9);
			g->drawLine(1, 9, 9, 9);
		}
	} else {
		g->setColor($($MetalLookAndFeel::getMenuDisabledForeground()));
		g->drawRect(0, 0, 8, 8);
	}
	if (isSelected) {
		if (isEnabled) {
			if (isArmed || ($instanceOf($JMenu, c) && isSelected)) {
				g->setColor($($MetalLookAndFeel::getMenuSelectedForeground()));
			} else {
				g->setColor($($MetalLookAndFeel::getControlInfo()));
			}
		} else {
			g->setColor($($MetalLookAndFeel::getMenuDisabledForeground()));
		}
		drawCheck(g);
	}
	g->translate(-x, -y);
}

void MetalIconFactory$CheckBoxMenuItemIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	if ($MetalLookAndFeel::usingOcean()) {
		paintOceanIcon(c, g, x, y);
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
			g->setColor($($MetalLookAndFeel::getControlInfo()));
			g->drawLine(0, 0, 8, 0);
			g->drawLine(0, 0, 0, 8);
			g->drawLine(8, 2, 8, 8);
			g->drawLine(2, 8, 8, 8);
			g->setColor($($MetalLookAndFeel::getPrimaryControl()));
			g->drawLine(1, 1, 7, 1);
			g->drawLine(1, 1, 1, 7);
			g->drawLine(9, 1, 9, 9);
			g->drawLine(1, 9, 9, 9);
		} else {
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->drawLine(0, 0, 8, 0);
			g->drawLine(0, 0, 0, 8);
			g->drawLine(8, 2, 8, 8);
			g->drawLine(2, 8, 8, 8);
			g->setColor($($MetalLookAndFeel::getControlHighlight()));
			g->drawLine(1, 1, 7, 1);
			g->drawLine(1, 1, 1, 7);
			g->drawLine(9, 1, 9, 9);
			g->drawLine(1, 9, 9, 9);
		}
	} else {
		g->setColor($($MetalLookAndFeel::getMenuDisabledForeground()));
		g->drawRect(0, 0, 8, 8);
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
		drawCheck(g);
	}
	g->translate(-x, -y);
}

void MetalIconFactory$CheckBoxMenuItemIcon::drawCheck($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($ints, xPoints, $new($ints, {
		2,
		3,
		3,
		8,
		9,
		3,
		2
	}));
	$var($ints, yPoints, $new($ints, {
		2,
		2,
		5,
		0,
		0,
		6,
		6
	}));
	$nc(g)->drawPolygon(xPoints, yPoints, 7);
}

int32_t MetalIconFactory$CheckBoxMenuItemIcon::getIconWidth() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::menuCheckIconSize)->width;
}

int32_t MetalIconFactory$CheckBoxMenuItemIcon::getIconHeight() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::menuCheckIconSize)->height;
}

MetalIconFactory$CheckBoxMenuItemIcon::MetalIconFactory$CheckBoxMenuItemIcon() {
}

$Class* MetalIconFactory$CheckBoxMenuItemIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$CheckBoxMenuItemIcon, name, initialize, &_MetalIconFactory$CheckBoxMenuItemIcon_ClassInfo_, allocate$MetalIconFactory$CheckBoxMenuItemIcon);
	return class$;
}

$Class* MetalIconFactory$CheckBoxMenuItemIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax