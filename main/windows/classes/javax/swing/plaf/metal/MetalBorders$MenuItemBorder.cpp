#include <javax/swing/plaf/metal/MetalBorders$MenuItemBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders$MenuItemBorder_FieldInfo_[] = {
	{"borderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $STATIC, $staticField(MetalBorders$MenuItemBorder, borderInsets)},
	{}
};

$MethodInfo _MetalBorders$MenuItemBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$MenuItemBorder::*)()>(&MetalBorders$MenuItemBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$MenuItemBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$MenuItemBorder", "javax.swing.plaf.metal.MetalBorders", "MenuItemBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$MenuItemBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$MenuItemBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MetalBorders$MenuItemBorder_FieldInfo_,
	_MetalBorders$MenuItemBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$MenuItemBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$MenuItemBorder($Class* clazz) {
	return $of($alloc(MetalBorders$MenuItemBorder));
}

int32_t MetalBorders$MenuItemBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$MenuItemBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$MenuItemBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$MenuItemBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$MenuItemBorder::finalize() {
	this->$AbstractBorder::finalize();
}


$Insets* MetalBorders$MenuItemBorder::borderInsets = nullptr;

void MetalBorders$MenuItemBorder::init$() {
	$AbstractBorder::init$();
}

void MetalBorders$MenuItemBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (!($instanceOf($JMenuItem, c))) {
		return;
	}
	$var($JMenuItem, b, $cast($JMenuItem, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$nc(g)->translate(x, y);
	if ($instanceOf($JMenuBar, $($nc(c)->getParent()))) {
		bool var$0 = $nc(model)->isArmed();
		if (var$0 || $nc(model)->isSelected()) {
			g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->drawLine(0, 0, w - 2, 0);
			g->drawLine(0, 0, 0, h - 1);
			g->drawLine(w - 2, 2, w - 2, h - 1);
			g->setColor($($MetalLookAndFeel::getPrimaryControlHighlight()));
			g->drawLine(w - 1, 1, w - 1, h - 1);
			g->setColor($($MetalLookAndFeel::getMenuBackground()));
			g->drawLine(w - 1, 0, w - 1, 0);
		}
	} else {
		bool var$2 = $nc(model)->isArmed();
		if (var$2 || ($instanceOf($JMenu, c) && $nc(model)->isSelected())) {
			g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
			g->drawLine(0, 0, w - 1, 0);
			g->setColor($($MetalLookAndFeel::getPrimaryControlHighlight()));
			g->drawLine(0, h - 1, w - 1, h - 1);
		} else {
			g->setColor($($MetalLookAndFeel::getPrimaryControlHighlight()));
			g->drawLine(0, 0, 0, h - 1);
		}
	}
	g->translate(-x, -y);
}

$Insets* MetalBorders$MenuItemBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(2, 2, 2, 2);
	return newInsets;
}

void clinit$MetalBorders$MenuItemBorder($Class* class$) {
	$assignStatic(MetalBorders$MenuItemBorder::borderInsets, $new($Insets, 2, 2, 2, 2));
}

MetalBorders$MenuItemBorder::MetalBorders$MenuItemBorder() {
}

$Class* MetalBorders$MenuItemBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$MenuItemBorder, name, initialize, &_MetalBorders$MenuItemBorder_ClassInfo_, clinit$MetalBorders$MenuItemBorder, allocate$MetalBorders$MenuItemBorder);
	return class$;
}

$Class* MetalBorders$MenuItemBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax