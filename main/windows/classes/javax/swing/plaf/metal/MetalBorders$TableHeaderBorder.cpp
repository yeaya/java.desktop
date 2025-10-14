#include <javax/swing/plaf/metal/MetalBorders$TableHeaderBorder.h>

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
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders$TableHeaderBorder_FieldInfo_[] = {
	{"editorBorderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED, $field(MetalBorders$TableHeaderBorder, editorBorderInsets)},
	{}
};

$MethodInfo _MetalBorders$TableHeaderBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$TableHeaderBorder::*)()>(&MetalBorders$TableHeaderBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$TableHeaderBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$TableHeaderBorder", "javax.swing.plaf.metal.MetalBorders", "TableHeaderBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$TableHeaderBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$TableHeaderBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_MetalBorders$TableHeaderBorder_FieldInfo_,
	_MetalBorders$TableHeaderBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$TableHeaderBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$TableHeaderBorder($Class* clazz) {
	return $of($alloc(MetalBorders$TableHeaderBorder));
}

void MetalBorders$TableHeaderBorder::init$() {
	$AbstractBorder::init$();
	$set(this, editorBorderInsets, $new($Insets, 2, 2, 2, 0));
}

void MetalBorders$TableHeaderBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
	g->drawLine(w - 1, 0, w - 1, h - 1);
	g->drawLine(1, h - 1, w - 1, h - 1);
	g->setColor($($MetalLookAndFeel::getControlHighlight()));
	g->drawLine(0, 0, w - 2, 0);
	g->drawLine(0, 0, 0, h - 2);
	g->translate(-x, -y);
}

$Insets* MetalBorders$TableHeaderBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 2, 0);
	return insets;
}

MetalBorders$TableHeaderBorder::MetalBorders$TableHeaderBorder() {
}

$Class* MetalBorders$TableHeaderBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$TableHeaderBorder, name, initialize, &_MetalBorders$TableHeaderBorder_ClassInfo_, allocate$MetalBorders$TableHeaderBorder);
	return class$;
}

$Class* MetalBorders$TableHeaderBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax