#include <javax/swing/plaf/metal/MetalBorders$FrameBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
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
using $Frame = ::java::awt::Frame;
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

$FieldInfo _MetalBorders$FrameBorder_FieldInfo_[] = {
	{"corner", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalBorders$FrameBorder, corner)},
	{}
};

$MethodInfo _MetalBorders$FrameBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalBorders$FrameBorder::*)()>(&MetalBorders$FrameBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$FrameBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$FrameBorder", "javax.swing.plaf.metal.MetalBorders", "FrameBorder", $STATIC},
	{}
};

$ClassInfo _MetalBorders$FrameBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$FrameBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MetalBorders$FrameBorder_FieldInfo_,
	_MetalBorders$FrameBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$FrameBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$FrameBorder($Class* clazz) {
	return $of($alloc(MetalBorders$FrameBorder));
}

int32_t MetalBorders$FrameBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$FrameBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$FrameBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$FrameBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$FrameBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MetalBorders$FrameBorder::init$() {
	$AbstractBorder::init$();
}

void MetalBorders$FrameBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Color, background, nullptr);
	$var($Color, highlight, nullptr);
	$var($Color, shadow, nullptr);
	$var($Window, window, $SwingUtilities::getWindowAncestor(c));
	if (window != nullptr && window->isActive()) {
		$assign(background, $MetalLookAndFeel::getPrimaryControlDarkShadow());
		$assign(highlight, $MetalLookAndFeel::getPrimaryControlShadow());
		$assign(shadow, $MetalLookAndFeel::getPrimaryControlInfo());
	} else {
		$assign(background, $MetalLookAndFeel::getControlDarkShadow());
		$assign(highlight, $MetalLookAndFeel::getControlShadow());
		$assign(shadow, $MetalLookAndFeel::getControlInfo());
	}
	$nc(g)->setColor(background);
	g->drawLine(x + 1, y + 0, x + w - 2, y + 0);
	g->drawLine(x + 0, y + 1, x + 0, y + h - 2);
	g->drawLine(x + w - 1, y + 1, x + w - 1, y + h - 2);
	g->drawLine(x + 1, y + h - 1, x + w - 2, y + h - 1);
	for (int32_t i = 1; i < 5; ++i) {
		g->drawRect(x + i, y + i, w - (i * 2) - 1, h - (i * 2) - 1);
	}
	if (($instanceOf($Frame, window)) && $nc(($cast($Frame, window)))->isResizable()) {
		g->setColor(highlight);
		g->drawLine(MetalBorders$FrameBorder::corner + 1, 3, w - MetalBorders$FrameBorder::corner, 3);
		g->drawLine(3, MetalBorders$FrameBorder::corner + 1, 3, h - MetalBorders$FrameBorder::corner);
		g->drawLine(w - 2, MetalBorders$FrameBorder::corner + 1, w - 2, h - MetalBorders$FrameBorder::corner);
		g->drawLine(MetalBorders$FrameBorder::corner + 1, h - 2, w - MetalBorders$FrameBorder::corner, h - 2);
		g->setColor(shadow);
		g->drawLine(MetalBorders$FrameBorder::corner, 2, w - MetalBorders$FrameBorder::corner - 1, 2);
		g->drawLine(2, MetalBorders$FrameBorder::corner, 2, h - MetalBorders$FrameBorder::corner - 1);
		g->drawLine(w - 3, MetalBorders$FrameBorder::corner, w - 3, h - MetalBorders$FrameBorder::corner - 1);
		g->drawLine(MetalBorders$FrameBorder::corner, h - 3, w - MetalBorders$FrameBorder::corner - 1, h - 3);
	}
}

$Insets* MetalBorders$FrameBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(5, 5, 5, 5);
	return newInsets;
}

MetalBorders$FrameBorder::MetalBorders$FrameBorder() {
}

$Class* MetalBorders$FrameBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$FrameBorder, name, initialize, &_MetalBorders$FrameBorder_ClassInfo_, allocate$MetalBorders$FrameBorder);
	return class$;
}

$Class* MetalBorders$FrameBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax