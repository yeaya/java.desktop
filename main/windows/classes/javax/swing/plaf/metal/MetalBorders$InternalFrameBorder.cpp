#include <javax/swing/plaf/metal/MetalBorders$InternalFrameBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
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
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders$InternalFrameBorder_FieldInfo_[] = {
	{"corner", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalBorders$InternalFrameBorder, corner)},
	{}
};

$MethodInfo _MetalBorders$InternalFrameBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$InternalFrameBorder::*)()>(&MetalBorders$InternalFrameBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$InternalFrameBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$InternalFrameBorder", "javax.swing.plaf.metal.MetalBorders", "InternalFrameBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$InternalFrameBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$InternalFrameBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MetalBorders$InternalFrameBorder_FieldInfo_,
	_MetalBorders$InternalFrameBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$InternalFrameBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$InternalFrameBorder($Class* clazz) {
	return $of($alloc(MetalBorders$InternalFrameBorder));
}

int32_t MetalBorders$InternalFrameBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$InternalFrameBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$InternalFrameBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$InternalFrameBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$InternalFrameBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MetalBorders$InternalFrameBorder::init$() {
	$AbstractBorder::init$();
}

void MetalBorders$InternalFrameBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Color, background, nullptr);
	$var($Color, highlight, nullptr);
	$var($Color, shadow, nullptr);
	if ($instanceOf($JInternalFrame, c) && $nc(($cast($JInternalFrame, c)))->isSelected()) {
		$assign(background, $MetalLookAndFeel::getPrimaryControlDarkShadow());
		$assign(highlight, $MetalLookAndFeel::getPrimaryControlShadow());
		$assign(shadow, $MetalLookAndFeel::getPrimaryControlInfo());
	} else {
		$assign(background, $MetalLookAndFeel::getControlDarkShadow());
		$assign(highlight, $MetalLookAndFeel::getControlShadow());
		$assign(shadow, $MetalLookAndFeel::getControlInfo());
	}
	$nc(g)->setColor(background);
	g->drawLine(1, 0, w - 2, 0);
	g->drawLine(0, 1, 0, h - 2);
	g->drawLine(w - 1, 1, w - 1, h - 2);
	g->drawLine(1, h - 1, w - 2, h - 1);
	for (int32_t i = 1; i < 5; ++i) {
		g->drawRect(x + i, y + i, w - (i * 2) - 1, h - (i * 2) - 1);
	}
	if ($instanceOf($JInternalFrame, c) && $nc(($cast($JInternalFrame, c)))->isResizable()) {
		g->setColor(highlight);
		g->drawLine(MetalBorders$InternalFrameBorder::corner + 1, 3, w - MetalBorders$InternalFrameBorder::corner, 3);
		g->drawLine(3, MetalBorders$InternalFrameBorder::corner + 1, 3, h - MetalBorders$InternalFrameBorder::corner);
		g->drawLine(w - 2, MetalBorders$InternalFrameBorder::corner + 1, w - 2, h - MetalBorders$InternalFrameBorder::corner);
		g->drawLine(MetalBorders$InternalFrameBorder::corner + 1, h - 2, w - MetalBorders$InternalFrameBorder::corner, h - 2);
		g->setColor(shadow);
		g->drawLine(MetalBorders$InternalFrameBorder::corner, 2, w - MetalBorders$InternalFrameBorder::corner - 1, 2);
		g->drawLine(2, MetalBorders$InternalFrameBorder::corner, 2, h - MetalBorders$InternalFrameBorder::corner - 1);
		g->drawLine(w - 3, MetalBorders$InternalFrameBorder::corner, w - 3, h - MetalBorders$InternalFrameBorder::corner - 1);
		g->drawLine(MetalBorders$InternalFrameBorder::corner, h - 3, w - MetalBorders$InternalFrameBorder::corner - 1, h - 3);
	}
}

$Insets* MetalBorders$InternalFrameBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(5, 5, 5, 5);
	return newInsets;
}

MetalBorders$InternalFrameBorder::MetalBorders$InternalFrameBorder() {
}

$Class* MetalBorders$InternalFrameBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$InternalFrameBorder, name, initialize, &_MetalBorders$InternalFrameBorder_ClassInfo_, allocate$MetalBorders$InternalFrameBorder);
	return class$;
}

$Class* MetalBorders$InternalFrameBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax