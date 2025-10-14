#include <javax/swing/plaf/metal/MetalBorders$DialogBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders$DialogBorder_FieldInfo_[] = {
	{"corner", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalBorders$DialogBorder, corner)},
	{}
};

$MethodInfo _MetalBorders$DialogBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalBorders$DialogBorder::*)()>(&MetalBorders$DialogBorder::init$))},
	{"getActiveBackground", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getActiveHighlight", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getActiveShadow", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getInactiveBackground", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getInactiveHighlight", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getInactiveShadow", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$DialogBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$DialogBorder", "javax.swing.plaf.metal.MetalBorders", "DialogBorder", $STATIC},
	{}
};

$ClassInfo _MetalBorders$DialogBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$DialogBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MetalBorders$DialogBorder_FieldInfo_,
	_MetalBorders$DialogBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$DialogBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$DialogBorder($Class* clazz) {
	return $of($alloc(MetalBorders$DialogBorder));
}

int32_t MetalBorders$DialogBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$DialogBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$DialogBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$DialogBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$DialogBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MetalBorders$DialogBorder::init$() {
	$AbstractBorder::init$();
}

$Color* MetalBorders$DialogBorder::getActiveBackground() {
	return $MetalLookAndFeel::getPrimaryControlDarkShadow();
}

$Color* MetalBorders$DialogBorder::getActiveHighlight() {
	return $MetalLookAndFeel::getPrimaryControlShadow();
}

$Color* MetalBorders$DialogBorder::getActiveShadow() {
	return $MetalLookAndFeel::getPrimaryControlInfo();
}

$Color* MetalBorders$DialogBorder::getInactiveBackground() {
	return $MetalLookAndFeel::getControlDarkShadow();
}

$Color* MetalBorders$DialogBorder::getInactiveHighlight() {
	return $MetalLookAndFeel::getControlShadow();
}

$Color* MetalBorders$DialogBorder::getInactiveShadow() {
	return $MetalLookAndFeel::getControlInfo();
}

void MetalBorders$DialogBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Color, background, nullptr);
	$var($Color, highlight, nullptr);
	$var($Color, shadow, nullptr);
	$var($Window, window, $SwingUtilities::getWindowAncestor(c));
	if (window != nullptr && window->isActive()) {
		$assign(background, getActiveBackground());
		$assign(highlight, getActiveHighlight());
		$assign(shadow, getActiveShadow());
	} else {
		$assign(background, getInactiveBackground());
		$assign(highlight, getInactiveHighlight());
		$assign(shadow, getInactiveShadow());
	}
	$nc(g)->setColor(background);
	g->drawLine(x + 1, y + 0, x + w - 2, y + 0);
	g->drawLine(x + 0, y + 1, x + 0, y + h - 2);
	g->drawLine(x + w - 1, y + 1, x + w - 1, y + h - 2);
	g->drawLine(x + 1, y + h - 1, x + w - 2, y + h - 1);
	for (int32_t i = 1; i < 5; ++i) {
		g->drawRect(x + i, y + i, w - (i * 2) - 1, h - (i * 2) - 1);
	}
	if (($instanceOf($Dialog, window)) && $nc(($cast($Dialog, window)))->isResizable()) {
		g->setColor(highlight);
		g->drawLine(MetalBorders$DialogBorder::corner + 1, 3, w - MetalBorders$DialogBorder::corner, 3);
		g->drawLine(3, MetalBorders$DialogBorder::corner + 1, 3, h - MetalBorders$DialogBorder::corner);
		g->drawLine(w - 2, MetalBorders$DialogBorder::corner + 1, w - 2, h - MetalBorders$DialogBorder::corner);
		g->drawLine(MetalBorders$DialogBorder::corner + 1, h - 2, w - MetalBorders$DialogBorder::corner, h - 2);
		g->setColor(shadow);
		g->drawLine(MetalBorders$DialogBorder::corner, 2, w - MetalBorders$DialogBorder::corner - 1, 2);
		g->drawLine(2, MetalBorders$DialogBorder::corner, 2, h - MetalBorders$DialogBorder::corner - 1);
		g->drawLine(w - 3, MetalBorders$DialogBorder::corner, w - 3, h - MetalBorders$DialogBorder::corner - 1);
		g->drawLine(MetalBorders$DialogBorder::corner, h - 3, w - MetalBorders$DialogBorder::corner - 1, h - 3);
	}
}

$Insets* MetalBorders$DialogBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(5, 5, 5, 5);
	return newInsets;
}

MetalBorders$DialogBorder::MetalBorders$DialogBorder() {
}

$Class* MetalBorders$DialogBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$DialogBorder, name, initialize, &_MetalBorders$DialogBorder_ClassInfo_, allocate$MetalBorders$DialogBorder);
	return class$;
}

$Class* MetalBorders$DialogBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax