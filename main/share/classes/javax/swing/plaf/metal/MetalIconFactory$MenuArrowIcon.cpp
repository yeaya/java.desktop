#include <javax/swing/plaf/metal/MetalIconFactory$MenuArrowIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
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

$MethodInfo _MetalIconFactory$MenuArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$MenuArrowIcon::*)()>(&MetalIconFactory$MenuArrowIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$MenuArrowIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$MenuArrowIcon", "javax.swing.plaf.metal.MetalIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$MenuArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$MenuArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$MenuArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$MenuArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$MenuArrowIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$MenuArrowIcon));
}

int32_t MetalIconFactory$MenuArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$MenuArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$MenuArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$MenuArrowIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$MenuArrowIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$MenuArrowIcon::init$() {
}

void MetalIconFactory$MenuArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, b, $cast($JMenuItem, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$nc(g)->translate(x, y);
	if (!$nc(model)->isEnabled()) {
		g->setColor($($MetalLookAndFeel::getMenuDisabledForeground()));
	} else {
		bool var$1 = model->isArmed();
		if (var$1 || ($instanceOf($JMenu, c) && model->isSelected())) {
			g->setColor($($MetalLookAndFeel::getMenuSelectedForeground()));
		} else {
			g->setColor($(b->getForeground()));
		}
	}
	if ($MetalUtils::isLeftToRight(b)) {
		$var($ints, xPoints, $new($ints, {
			0,
			3,
			3,
			0
		}));
		$var($ints, yPoints, $new($ints, {
			0,
			3,
			4,
			7
		}));
		g->fillPolygon(xPoints, yPoints, 4);
		g->drawPolygon(xPoints, yPoints, 4);
	} else {
		$var($ints, xPoints, $new($ints, {
			4,
			4,
			1,
			1
		}));
		$var($ints, yPoints, $new($ints, {
			0,
			7,
			4,
			3
		}));
		g->fillPolygon(xPoints, yPoints, 4);
		g->drawPolygon(xPoints, yPoints, 4);
	}
	g->translate(-x, -y);
}

int32_t MetalIconFactory$MenuArrowIcon::getIconWidth() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::menuArrowIconSize)->width;
}

int32_t MetalIconFactory$MenuArrowIcon::getIconHeight() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::menuArrowIconSize)->height;
}

MetalIconFactory$MenuArrowIcon::MetalIconFactory$MenuArrowIcon() {
}

$Class* MetalIconFactory$MenuArrowIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$MenuArrowIcon, name, initialize, &_MetalIconFactory$MenuArrowIcon_ClassInfo_, allocate$MetalIconFactory$MenuArrowIcon);
	return class$;
}

$Class* MetalIconFactory$MenuArrowIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax