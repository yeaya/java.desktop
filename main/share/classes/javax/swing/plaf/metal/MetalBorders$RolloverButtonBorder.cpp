#include <javax/swing/plaf/metal/MetalBorders$RolloverButtonBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/plaf/metal/MetalBorders$ButtonBorder.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalBorders$ButtonBorder = ::javax::swing::plaf::metal::MetalBorders$ButtonBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalBorders$RolloverButtonBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$RolloverButtonBorder::*)()>(&MetalBorders$RolloverButtonBorder::init$))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$RolloverButtonBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$RolloverButtonBorder", "javax.swing.plaf.metal.MetalBorders", "RolloverButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$ButtonBorder", "javax.swing.plaf.metal.MetalBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$RolloverButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$RolloverButtonBorder",
	"javax.swing.plaf.metal.MetalBorders$ButtonBorder",
	nullptr,
	nullptr,
	_MetalBorders$RolloverButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$RolloverButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$RolloverButtonBorder($Class* clazz) {
	return $of($alloc(MetalBorders$RolloverButtonBorder));
}

void MetalBorders$RolloverButtonBorder::init$() {
	$MetalBorders$ButtonBorder::init$();
}

void MetalBorders$RolloverButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	bool var$0 = $nc(model)->isRollover();
	if (var$0) {
		bool var$1 = model->isPressed();
		var$0 = !(var$1 && !model->isArmed());
	}
	if (var$0) {
		$MetalBorders$ButtonBorder::paintBorder(c, g, x, y, w, h);
	}
}

MetalBorders$RolloverButtonBorder::MetalBorders$RolloverButtonBorder() {
}

$Class* MetalBorders$RolloverButtonBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$RolloverButtonBorder, name, initialize, &_MetalBorders$RolloverButtonBorder_ClassInfo_, allocate$MetalBorders$RolloverButtonBorder);
	return class$;
}

$Class* MetalBorders$RolloverButtonBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax