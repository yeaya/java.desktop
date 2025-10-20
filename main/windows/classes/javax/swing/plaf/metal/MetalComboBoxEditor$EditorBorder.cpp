#include <javax/swing/plaf/metal/MetalComboBoxEditor$EditorBorder.h>

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
#include <javax/swing/plaf/metal/MetalComboBoxEditor.h>
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
using $MetalComboBoxEditor = ::javax::swing::plaf::metal::MetalComboBoxEditor;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalComboBoxEditor$EditorBorder_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxEditor;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxEditor$EditorBorder, this$0)},
	{}
};

$MethodInfo _MetalComboBoxEditor$EditorBorder_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxEditor;)V", nullptr, 0, $method(static_cast<void(MetalComboBoxEditor$EditorBorder::*)($MetalComboBoxEditor*)>(&MetalComboBoxEditor$EditorBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalComboBoxEditor$EditorBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxEditor$EditorBorder", "javax.swing.plaf.metal.MetalComboBoxEditor", "EditorBorder", 0},
	{}
};

$ClassInfo _MetalComboBoxEditor$EditorBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxEditor$EditorBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_MetalComboBoxEditor$EditorBorder_FieldInfo_,
	_MetalComboBoxEditor$EditorBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalComboBoxEditor$EditorBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxEditor"
};

$Object* allocate$MetalComboBoxEditor$EditorBorder($Class* clazz) {
	return $of($alloc(MetalComboBoxEditor$EditorBorder));
}

void MetalComboBoxEditor$EditorBorder::init$($MetalComboBoxEditor* this$0) {
	$set(this, this$0, this$0);
	$AbstractBorder::init$();
}

void MetalComboBoxEditor$EditorBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	if ($MetalLookAndFeel::usingOcean()) {
		g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
		g->drawRect(0, 0, w, h - 1);
		g->setColor($($MetalLookAndFeel::getControlShadow()));
		g->drawRect(1, 1, w - 2, h - 3);
	} else {
		g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
		g->drawLine(0, 0, w - 1, 0);
		g->drawLine(0, 0, 0, h - 2);
		g->drawLine(0, h - 2, w - 1, h - 2);
		g->setColor($($MetalLookAndFeel::getControlHighlight()));
		g->drawLine(1, 1, w - 1, 1);
		g->drawLine(1, 1, 1, h - 1);
		g->drawLine(1, h - 1, w - 1, h - 1);
		g->setColor($($MetalLookAndFeel::getControl()));
		g->drawLine(1, h - 2, 1, h - 2);
	}
	g->translate(-x, -y);
}

$Insets* MetalComboBoxEditor$EditorBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 2, 0);
	return insets;
}

MetalComboBoxEditor$EditorBorder::MetalComboBoxEditor$EditorBorder() {
}

$Class* MetalComboBoxEditor$EditorBorder::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxEditor$EditorBorder, name, initialize, &_MetalComboBoxEditor$EditorBorder_ClassInfo_, allocate$MetalComboBoxEditor$EditorBorder);
	return class$;
}

$Class* MetalComboBoxEditor$EditorBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax