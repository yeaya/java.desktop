#include <javax/swing/plaf/metal/MetalBorders$ButtonBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef NO_BUTTON_ROLLOVER

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders$ButtonBorder_FieldInfo_[] = {
	{"borderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $STATIC, $staticField(MetalBorders$ButtonBorder, borderInsets)},
	{}
};

$MethodInfo _MetalBorders$ButtonBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$ButtonBorder::*)()>(&MetalBorders$ButtonBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintOceanBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(MetalBorders$ButtonBorder::*)($Component*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&MetalBorders$ButtonBorder::paintOceanBorder))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$ButtonBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$ButtonBorder", "javax.swing.plaf.metal.MetalBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$ButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$ButtonBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MetalBorders$ButtonBorder_FieldInfo_,
	_MetalBorders$ButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$ButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$ButtonBorder($Class* clazz) {
	return $of($alloc(MetalBorders$ButtonBorder));
}

int32_t MetalBorders$ButtonBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$ButtonBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$ButtonBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$ButtonBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$ButtonBorder::finalize() {
	this->$AbstractBorder::finalize();
}

$Insets* MetalBorders$ButtonBorder::borderInsets = nullptr;

void MetalBorders$ButtonBorder::init$() {
	$AbstractBorder::init$();
}

void MetalBorders$ButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($AbstractButton, c))) {
		return;
	}
	if ($MetalLookAndFeel::usingOcean()) {
		paintOceanBorder(c, g, x, y, w, h);
		return;
	}
	$var($AbstractButton, button, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(button)->getModel());
	if ($nc(model)->isEnabled()) {
		bool var$0 = model->isPressed();
		bool isPressed = var$0 && model->isArmed();
		bool isDefault = ($instanceOf($JButton, button) && $nc(($cast($JButton, button)))->isDefaultButton());
		if (isPressed && isDefault) {
			$MetalUtils::drawDefaultButtonPressedBorder(g, x, y, w, h);
		} else if (isPressed) {
			$MetalUtils::drawPressed3DBorder(g, x, y, w, h);
		} else if (isDefault) {
			$MetalUtils::drawDefaultButtonBorder(g, x, y, w, h, false);
		} else {
			$MetalUtils::drawButtonBorder(g, x, y, w, h, false);
		}
	} else {
		$MetalUtils::drawDisabledBorder(g, x, y, w - 1, h - 1);
	}
}

void MetalBorders$ButtonBorder::paintOceanBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, button, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(($cast($AbstractButton, c)))->getModel());
	$nc(g)->translate(x, y);
	if ($MetalUtils::isToolBarButton(button)) {
		if ($nc(model)->isEnabled()) {
			if (model->isPressed()) {
				g->setColor($($MetalLookAndFeel::getWhite()));
				g->fillRect(1, h - 1, w - 1, 1);
				g->fillRect(w - 1, 1, 1, h - 1);
				g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
				g->drawRect(0, 0, w - 2, h - 2);
				g->fillRect(1, 1, w - 3, 1);
			} else {
				bool var$1 = model->isSelected();
				if (var$1 || model->isRollover()) {
					g->setColor($($MetalLookAndFeel::getWhite()));
					g->fillRect(1, h - 1, w - 1, 1);
					g->fillRect(w - 1, 1, 1, h - 1);
					g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
					g->drawRect(0, 0, w - 2, h - 2);
				} else {
					g->setColor($($MetalLookAndFeel::getWhite()));
					g->drawRect(1, 1, w - 2, h - 2);
					g->setColor($($UIManager::getColor("Button.toolBarBorderBackground"_s)));
					g->drawRect(0, 0, w - 2, h - 2);
				}
			}
		} else {
			g->setColor($($UIManager::getColor("Button.disabledToolBarBorderBackground"_s)));
			g->drawRect(0, 0, w - 2, h - 2);
		}
	} else if ($nc(model)->isEnabled()) {
		bool pressed = model->isPressed();
		bool armed = model->isArmed();
		if (($instanceOf($JButton, c)) && $nc(($cast($JButton, c)))->isDefaultButton()) {
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->drawRect(0, 0, w - 1, h - 1);
			g->drawRect(1, 1, w - 3, h - 3);
		} else if (pressed) {
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->fillRect(0, 0, w, 2);
			g->fillRect(0, 2, 2, h - 2);
			g->fillRect(w - 1, 1, 1, h - 1);
			g->fillRect(1, h - 1, w - 2, 1);
		} else {
			bool var$3 = model->isRollover();
			$init($MetalBorders);
			if (var$3 && $nc(button)->getClientProperty($MetalBorders::NO_BUTTON_ROLLOVER) == nullptr) {
				g->setColor($($MetalLookAndFeel::getPrimaryControl()));
				g->drawRect(0, 0, w - 1, h - 1);
				g->drawRect(2, 2, w - 5, h - 5);
				g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
				g->drawRect(1, 1, w - 3, h - 3);
			} else {
				g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
				g->drawRect(0, 0, w - 1, h - 1);
			}
		}
	} else {
		g->setColor($($MetalLookAndFeel::getInactiveControlTextColor()));
		g->drawRect(0, 0, w - 1, h - 1);
		if (($instanceOf($JButton, c)) && $nc(($cast($JButton, c)))->isDefaultButton()) {
			g->drawRect(1, 1, w - 3, h - 3);
		}
	}
}

$Insets* MetalBorders$ButtonBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(3, 3, 3, 3);
	return newInsets;
}

void clinit$MetalBorders$ButtonBorder($Class* class$) {
	$assignStatic(MetalBorders$ButtonBorder::borderInsets, $new($Insets, 3, 3, 3, 3));
}

MetalBorders$ButtonBorder::MetalBorders$ButtonBorder() {
}

$Class* MetalBorders$ButtonBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$ButtonBorder, name, initialize, &_MetalBorders$ButtonBorder_ClassInfo_, clinit$MetalBorders$ButtonBorder, allocate$MetalBorders$ButtonBorder);
	return class$;
}

$Class* MetalBorders$ButtonBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax