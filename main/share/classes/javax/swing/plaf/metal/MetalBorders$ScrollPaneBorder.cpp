#include <javax/swing/plaf/metal/MetalBorders$ScrollPaneBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalBorders$ScrollPaneBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$ScrollPaneBorder::*)()>(&MetalBorders$ScrollPaneBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$ScrollPaneBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$ScrollPaneBorder", "javax.swing.plaf.metal.MetalBorders", "ScrollPaneBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$ScrollPaneBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$ScrollPaneBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_MetalBorders$ScrollPaneBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$ScrollPaneBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$ScrollPaneBorder($Class* clazz) {
	return $of($alloc(MetalBorders$ScrollPaneBorder));
}

int32_t MetalBorders$ScrollPaneBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$ScrollPaneBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$ScrollPaneBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$ScrollPaneBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$ScrollPaneBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MetalBorders$ScrollPaneBorder::init$() {
	$AbstractBorder::init$();
}

void MetalBorders$ScrollPaneBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JScrollPane, c))) {
		return;
	}
	$var($JScrollPane, scroll, $cast($JScrollPane, c));
	$var($JComponent, colHeader, $nc(scroll)->getColumnHeader());
	int32_t colHeaderHeight = 0;
	if (colHeader != nullptr) {
		colHeaderHeight = colHeader->getHeight();
	}
	$var($JComponent, rowHeader, scroll->getRowHeader());
	int32_t rowHeaderWidth = 0;
	if (rowHeader != nullptr) {
		rowHeaderWidth = rowHeader->getWidth();
	}
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
	g->drawRect(0, 0, w - 2, h - 2);
	g->setColor($($MetalLookAndFeel::getControlHighlight()));
	g->drawLine(w - 1, 1, w - 1, h - 1);
	g->drawLine(1, h - 1, w - 1, h - 1);
	g->setColor($($MetalLookAndFeel::getControl()));
	g->drawLine(w - 2, 2 + colHeaderHeight, w - 2, 2 + colHeaderHeight);
	g->drawLine(1 + rowHeaderWidth, h - 2, 1 + rowHeaderWidth, h - 2);
	g->translate(-x, -y);
}

$Insets* MetalBorders$ScrollPaneBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(1, 1, 2, 2);
	return insets;
}

MetalBorders$ScrollPaneBorder::MetalBorders$ScrollPaneBorder() {
}

$Class* MetalBorders$ScrollPaneBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$ScrollPaneBorder, name, initialize, &_MetalBorders$ScrollPaneBorder_ClassInfo_, allocate$MetalBorders$ScrollPaneBorder);
	return class$;
}

$Class* MetalBorders$ScrollPaneBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax