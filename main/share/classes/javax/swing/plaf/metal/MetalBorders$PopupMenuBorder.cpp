#include <javax/swing/plaf/metal/MetalBorders$PopupMenuBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
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
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders$PopupMenuBorder_FieldInfo_[] = {
	{"borderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $STATIC, $staticField(MetalBorders$PopupMenuBorder, borderInsets)},
	{}
};

$MethodInfo _MetalBorders$PopupMenuBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$PopupMenuBorder::*)()>(&MetalBorders$PopupMenuBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$PopupMenuBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$PopupMenuBorder", "javax.swing.plaf.metal.MetalBorders", "PopupMenuBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$PopupMenuBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$PopupMenuBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MetalBorders$PopupMenuBorder_FieldInfo_,
	_MetalBorders$PopupMenuBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$PopupMenuBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$PopupMenuBorder($Class* clazz) {
	return $of($alloc(MetalBorders$PopupMenuBorder));
}

int32_t MetalBorders$PopupMenuBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$PopupMenuBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$PopupMenuBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$PopupMenuBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$PopupMenuBorder::finalize() {
	this->$AbstractBorder::finalize();
}

$Insets* MetalBorders$PopupMenuBorder::borderInsets = nullptr;

void MetalBorders$PopupMenuBorder::init$() {
	$AbstractBorder::init$();
}

void MetalBorders$PopupMenuBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	g->drawRect(0, 0, w - 1, h - 1);
	g->setColor($($MetalLookAndFeel::getPrimaryControlHighlight()));
	g->drawLine(1, 1, w - 2, 1);
	g->drawLine(1, 2, 1, 2);
	g->drawLine(1, h - 2, 1, h - 2);
	g->translate(-x, -y);
}

$Insets* MetalBorders$PopupMenuBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(3, 1, 2, 1);
	return newInsets;
}

void clinit$MetalBorders$PopupMenuBorder($Class* class$) {
	$assignStatic(MetalBorders$PopupMenuBorder::borderInsets, $new($Insets, 3, 1, 2, 1));
}

MetalBorders$PopupMenuBorder::MetalBorders$PopupMenuBorder() {
}

$Class* MetalBorders$PopupMenuBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$PopupMenuBorder, name, initialize, &_MetalBorders$PopupMenuBorder_ClassInfo_, clinit$MetalBorders$PopupMenuBorder, allocate$MetalBorders$PopupMenuBorder);
	return class$;
}

$Class* MetalBorders$PopupMenuBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax