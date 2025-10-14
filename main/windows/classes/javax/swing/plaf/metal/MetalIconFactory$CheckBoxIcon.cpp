#include <javax/swing/plaf/metal/MetalIconFactory$CheckBoxIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JCheckBox = ::javax::swing::JCheckBox;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalIconFactory$CheckBoxIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$CheckBoxIcon::*)()>(&MetalIconFactory$CheckBoxIcon::init$))},
	{"drawCheck", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PROTECTED},
	{"getControlSize", "()I", nullptr, $PROTECTED},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"paintOceanIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$CheckBoxIcon::*)($Component*,$Graphics*,int32_t,int32_t)>(&MetalIconFactory$CheckBoxIcon::paintOceanIcon))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$CheckBoxIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$CheckBoxIcon", "javax.swing.plaf.metal.MetalIconFactory", "CheckBoxIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$CheckBoxIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$CheckBoxIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$CheckBoxIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$CheckBoxIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$CheckBoxIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$CheckBoxIcon));
}

int32_t MetalIconFactory$CheckBoxIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$CheckBoxIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$CheckBoxIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$CheckBoxIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$CheckBoxIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$CheckBoxIcon::init$() {
}

int32_t MetalIconFactory$CheckBoxIcon::getControlSize() {
	return 13;
}

void MetalIconFactory$CheckBoxIcon::paintOceanIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($ButtonModel, model, $nc(($cast($JCheckBox, c)))->getModel());
	$nc(g)->translate(x, y);
	int32_t w = getIconWidth();
	int32_t h = getIconHeight();
	if ($nc(model)->isEnabled()) {
		bool var$0 = model->isPressed();
		if (var$0 && model->isArmed()) {
			g->setColor($($MetalLookAndFeel::getControlShadow()));
			g->fillRect(0, 0, w, h);
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->fillRect(0, 0, w, 2);
			g->fillRect(0, 2, 2, h - 2);
			g->fillRect(w - 1, 1, 1, h - 1);
			g->fillRect(1, h - 1, w - 2, 1);
		} else if (model->isRollover()) {
			$MetalUtils::drawGradient(c, g, "CheckBox.gradient"_s, 0, 0, w, h, true);
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->drawRect(0, 0, w - 1, h - 1);
			g->setColor($($MetalLookAndFeel::getPrimaryControl()));
			g->drawRect(1, 1, w - 3, h - 3);
			g->drawRect(2, 2, w - 5, h - 5);
		} else {
			$MetalUtils::drawGradient(c, g, "CheckBox.gradient"_s, 0, 0, w, h, true);
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->drawRect(0, 0, w - 1, h - 1);
		}
		g->setColor($($MetalLookAndFeel::getControlInfo()));
	} else {
		g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
		g->drawRect(0, 0, w - 1, h - 1);
	}
	g->translate(-x, -y);
	if ($nc(model)->isSelected()) {
		drawCheck(c, g, x, y);
	}
}

void MetalIconFactory$CheckBoxIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	if ($MetalLookAndFeel::usingOcean()) {
		paintOceanIcon(c, g, x, y);
		return;
	}
	$var($ButtonModel, model, $nc(($cast($JCheckBox, c)))->getModel());
	int32_t controlSize = getControlSize();
	if ($nc(model)->isEnabled()) {
		bool var$0 = model->isPressed();
		if (var$0 && model->isArmed()) {
			$nc(g)->setColor($($MetalLookAndFeel::getControlShadow()));
			g->fillRect(x, y, controlSize - 1, controlSize - 1);
			$MetalUtils::drawPressed3DBorder(g, x, y, controlSize, controlSize);
		} else {
			$MetalUtils::drawFlush3DBorder(g, x, y, controlSize, controlSize);
		}
		$nc(g)->setColor($($nc(c)->getForeground()));
	} else {
		$nc(g)->setColor($($MetalLookAndFeel::getControlShadow()));
		g->drawRect(x, y, controlSize - 2, controlSize - 2);
	}
	if ($nc(model)->isSelected()) {
		drawCheck(c, g, x, y);
	}
}

void MetalIconFactory$CheckBoxIcon::drawCheck($Component* c, $Graphics* g, int32_t x, int32_t y) {
	int32_t controlSize = getControlSize();
	int32_t csx = controlSize - 3;
	int32_t csy1 = controlSize - 6;
	int32_t csy2 = controlSize - 4;
	int32_t csy3 = controlSize - 3;
	$var($ints, xPoints, $new($ints, {
		3,
		5,
		5,
		csx,
		csx,
		5,
		5,
		3
	}));
	$var($ints, yPoints, $new($ints, {
		5,
		5,
		csy1,
		2,
		4,
		csy2,
		csy3,
		csy3
	}));
	$nc(g)->translate(x, y);
	g->fillPolygon(xPoints, yPoints, 8);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$CheckBoxIcon::getIconWidth() {
	return getControlSize();
}

int32_t MetalIconFactory$CheckBoxIcon::getIconHeight() {
	return getControlSize();
}

MetalIconFactory$CheckBoxIcon::MetalIconFactory$CheckBoxIcon() {
}

$Class* MetalIconFactory$CheckBoxIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$CheckBoxIcon, name, initialize, &_MetalIconFactory$CheckBoxIcon_ClassInfo_, allocate$MetalIconFactory$CheckBoxIcon);
	return class$;
}

$Class* MetalIconFactory$CheckBoxIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax