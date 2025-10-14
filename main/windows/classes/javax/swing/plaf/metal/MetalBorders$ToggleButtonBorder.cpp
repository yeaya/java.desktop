#include <javax/swing/plaf/metal/MetalBorders$ToggleButtonBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBorders$ButtonBorder.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalBorders$ButtonBorder = ::javax::swing::plaf::metal::MetalBorders$ButtonBorder;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalBorders$ToggleButtonBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$ToggleButtonBorder::*)()>(&MetalBorders$ToggleButtonBorder::init$))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$ToggleButtonBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$ToggleButtonBorder", "javax.swing.plaf.metal.MetalBorders", "ToggleButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$ButtonBorder", "javax.swing.plaf.metal.MetalBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$ToggleButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$ToggleButtonBorder",
	"javax.swing.plaf.metal.MetalBorders$ButtonBorder",
	nullptr,
	nullptr,
	_MetalBorders$ToggleButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$ToggleButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$ToggleButtonBorder($Class* clazz) {
	return $of($alloc(MetalBorders$ToggleButtonBorder));
}

void MetalBorders$ToggleButtonBorder::init$() {
	$MetalBorders$ButtonBorder::init$();
}

void MetalBorders$ToggleButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($AbstractButton, button, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(button)->getModel());
	if ($MetalLookAndFeel::usingOcean()) {
		bool var$0 = $nc(model)->isArmed();
		if (var$0 || !button->isEnabled()) {
			$MetalBorders$ButtonBorder::paintBorder(c, g, x, y, w, h);
		} else {
			$nc(g)->setColor($($MetalLookAndFeel::getControlDarkShadow()));
			g->drawRect(0, 0, w - 1, h - 1);
		}
		return;
	}
	if (!$nc(c)->isEnabled()) {
		$MetalUtils::drawDisabledBorder(g, x, y, w - 1, h - 1);
	} else {
		bool var$2 = model->isPressed();
		if (var$2 && model->isArmed()) {
			$MetalUtils::drawPressed3DBorder(g, x, y, w, h);
		} else if (model->isSelected()) {
			$MetalUtils::drawDark3DBorder(g, x, y, w, h);
		} else {
			$MetalUtils::drawFlush3DBorder(g, x, y, w, h);
		}
	}
}

MetalBorders$ToggleButtonBorder::MetalBorders$ToggleButtonBorder() {
}

$Class* MetalBorders$ToggleButtonBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$ToggleButtonBorder, name, initialize, &_MetalBorders$ToggleButtonBorder_ClassInfo_, allocate$MetalBorders$ToggleButtonBorder);
	return class$;
}

$Class* MetalBorders$ToggleButtonBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax