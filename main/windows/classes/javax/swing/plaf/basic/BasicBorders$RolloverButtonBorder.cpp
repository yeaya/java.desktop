#include <javax/swing/plaf/basic/BasicBorders$RolloverButtonBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $BasicBorders$ButtonBorder = ::javax::swing::plaf::basic::BasicBorders$ButtonBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicBorders$RolloverButtonBorder_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicBorders$RolloverButtonBorder::*)($Color*,$Color*,$Color*,$Color*)>(&BasicBorders$RolloverButtonBorder::init$))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicBorders$RolloverButtonBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$RolloverButtonBorder", "javax.swing.plaf.basic.BasicBorders", "RolloverButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$ButtonBorder", "javax.swing.plaf.basic.BasicBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicBorders$RolloverButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders$RolloverButtonBorder",
	"javax.swing.plaf.basic.BasicBorders$ButtonBorder",
	nullptr,
	nullptr,
	_BasicBorders$RolloverButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders$RolloverButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders"
};

$Object* allocate$BasicBorders$RolloverButtonBorder($Class* clazz) {
	return $of($alloc(BasicBorders$RolloverButtonBorder));
}

void BasicBorders$RolloverButtonBorder::init$($Color* shadow, $Color* darkShadow, $Color* highlight, $Color* lightHighlight) {
	$BasicBorders$ButtonBorder::init$(shadow, darkShadow, highlight, lightHighlight);
}

void BasicBorders$RolloverButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Color, shade, this->shadow);
	$var($Component, p, b->getParent());
	if (p != nullptr && $nc($(p->getBackground()))->equals(this->shadow)) {
		$assign(shade, this->darkShadow);
	}
	bool var$1 = $nc(model)->isRollover();
	if (var$1) {
		bool var$2 = model->isPressed();
		var$1 = !(var$2 && !model->isArmed());
	}
	bool var$0 = (var$1);
	if (var$0 || $nc(model)->isSelected()) {
		$var($Color, oldColor, $nc(g)->getColor());
		g->translate(x, y);
		bool var$4 = model->isPressed();
		bool var$3 = var$4 && model->isArmed();
		if (var$3 || model->isSelected()) {
			g->setColor(shade);
			g->drawRect(0, 0, w - 1, h - 1);
			g->setColor(this->lightHighlight);
			g->drawLine(w - 1, 0, w - 1, h - 1);
			g->drawLine(0, h - 1, w - 1, h - 1);
		} else {
			g->setColor(this->lightHighlight);
			g->drawRect(0, 0, w - 1, h - 1);
			g->setColor(shade);
			g->drawLine(w - 1, 0, w - 1, h - 1);
			g->drawLine(0, h - 1, w - 1, h - 1);
		}
		g->translate(-x, -y);
		g->setColor(oldColor);
	}
}

BasicBorders$RolloverButtonBorder::BasicBorders$RolloverButtonBorder() {
}

$Class* BasicBorders$RolloverButtonBorder::load$($String* name, bool initialize) {
	$loadClass(BasicBorders$RolloverButtonBorder, name, initialize, &_BasicBorders$RolloverButtonBorder_ClassInfo_, allocate$BasicBorders$RolloverButtonBorder);
	return class$;
}

$Class* BasicBorders$RolloverButtonBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax