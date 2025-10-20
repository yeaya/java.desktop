#include <javax/swing/plaf/metal/MetalCheckBoxIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JCheckBox = ::javax::swing::JCheckBox;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalCheckBoxIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalCheckBoxIcon::*)()>(&MetalCheckBoxIcon::init$))},
	{"drawCheck", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PROTECTED},
	{"getControlSize", "()I", nullptr, $PROTECTED},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalCheckBoxIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalCheckBoxIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalCheckBoxIcon_MethodInfo_
};

$Object* allocate$MetalCheckBoxIcon($Class* clazz) {
	return $of($alloc(MetalCheckBoxIcon));
}

int32_t MetalCheckBoxIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalCheckBoxIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalCheckBoxIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalCheckBoxIcon::toString() {
	 return this->$Icon::toString();
}

void MetalCheckBoxIcon::finalize() {
	this->$Icon::finalize();
}

void MetalCheckBoxIcon::init$() {
}

int32_t MetalCheckBoxIcon::getControlSize() {
	return 13;
}

void MetalCheckBoxIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($JCheckBox, cb, $cast($JCheckBox, c));
	$var($ButtonModel, model, $nc(cb)->getModel());
	int32_t controlSize = getControlSize();
	bool drawCheck = $nc(model)->isSelected();
	if (model->isEnabled()) {
		if (cb->isBorderPaintedFlat()) {
			$nc(g)->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->drawRect(x + 1, y, controlSize - 1, controlSize - 1);
		}
		bool var$0 = model->isPressed();
		if (var$0 && model->isArmed()) {
			if (cb->isBorderPaintedFlat()) {
				$nc(g)->setColor($($MetalLookAndFeel::getControlShadow()));
				g->fillRect(x + 2, y + 1, controlSize - 2, controlSize - 2);
			} else {
				$nc(g)->setColor($($MetalLookAndFeel::getControlShadow()));
				g->fillRect(x, y, controlSize - 1, controlSize - 1);
				$MetalUtils::drawPressed3DBorder(g, x, y, controlSize, controlSize);
			}
		} else if (!cb->isBorderPaintedFlat()) {
			$MetalUtils::drawFlush3DBorder(g, x, y, controlSize, controlSize);
		}
		$nc(g)->setColor($($MetalLookAndFeel::getControlInfo()));
	} else {
		$nc(g)->setColor($($MetalLookAndFeel::getControlShadow()));
		g->drawRect(x, y, controlSize - 1, controlSize - 1);
	}
	if (drawCheck) {
		if (cb->isBorderPaintedFlat()) {
			++x;
		}
		this->drawCheck(c, g, x, y);
	}
}

void MetalCheckBoxIcon::drawCheck($Component* c, $Graphics* g, int32_t x, int32_t y) {
	int32_t controlSize = getControlSize();
	$nc(g)->fillRect(x + 3, y + 5, 2, controlSize - 8);
	g->drawLine(x + (controlSize - 4), y + 3, x + 5, y + (controlSize - 6));
	g->drawLine(x + (controlSize - 4), y + 4, x + 5, y + (controlSize - 5));
}

int32_t MetalCheckBoxIcon::getIconWidth() {
	return getControlSize();
}

int32_t MetalCheckBoxIcon::getIconHeight() {
	return getControlSize();
}

MetalCheckBoxIcon::MetalCheckBoxIcon() {
}

$Class* MetalCheckBoxIcon::load$($String* name, bool initialize) {
	$loadClass(MetalCheckBoxIcon, name, initialize, &_MetalCheckBoxIcon_ClassInfo_, allocate$MetalCheckBoxIcon);
	return class$;
}

$Class* MetalCheckBoxIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax