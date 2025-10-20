#include <com/sun/java/swing/plaf/motif/MotifBorders$ToggleButtonBorder.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders$ButtonBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifBorders.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <jcpp.h>

using $MotifBorders = ::com::sun::java::swing::plaf::motif::MotifBorders;
using $MotifBorders$ButtonBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$ButtonBorder;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifBorders$ToggleButtonBorder_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifBorders$ToggleButtonBorder::*)($Color*,$Color*,$Color*,$Color*)>(&MotifBorders$ToggleButtonBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifBorders$ToggleButtonBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifBorders$ToggleButtonBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "ToggleButtonBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifBorders$ToggleButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifBorders$ToggleButtonBorder",
	"com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder",
	nullptr,
	nullptr,
	_MotifBorders$ToggleButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MotifBorders$ToggleButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifBorders"
};

$Object* allocate$MotifBorders$ToggleButtonBorder($Class* clazz) {
	return $of($alloc(MotifBorders$ToggleButtonBorder));
}

void MotifBorders$ToggleButtonBorder::init$($Color* shadow, $Color* highlight, $Color* darkShadow, $Color* focus) {
	$MotifBorders$ButtonBorder::init$(shadow, highlight, darkShadow, focus);
}

void MotifBorders$ToggleButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AbstractButton, c)) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, $nc(b)->getModel());
		bool var$1 = $nc(model)->isArmed();
		bool var$0 = var$1 && model->isPressed();
		if (var$0 || $nc(model)->isSelected()) {
			$var($Graphics, var$2, g);
			int32_t var$3 = x;
			int32_t var$4 = y;
			int32_t var$5 = width;
			int32_t var$6 = height;
			bool var$8 = model->isPressed();
			bool var$7 = (var$8 || model->isSelected());
			bool var$9 = b->isFocusPainted();
			$MotifBorders::drawBezel(var$2, var$3, var$4, var$5, var$6, var$7, var$9 && b->hasFocus(), this->shadow, this->highlight, this->darkShadow, this->focus);
		} else {
			bool var$10 = b->isFocusPainted();
			$MotifBorders::drawBezel(g, x, y, width, height, false, var$10 && b->hasFocus(), this->shadow, this->highlight, this->darkShadow, this->focus);
		}
	} else {
		$MotifBorders::drawBezel(g, x, y, width, height, false, false, this->shadow, this->highlight, this->darkShadow, this->focus);
	}
}

$Insets* MotifBorders$ToggleButtonBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 3, 3);
	return insets;
}

MotifBorders$ToggleButtonBorder::MotifBorders$ToggleButtonBorder() {
}

$Class* MotifBorders$ToggleButtonBorder::load$($String* name, bool initialize) {
	$loadClass(MotifBorders$ToggleButtonBorder, name, initialize, &_MotifBorders$ToggleButtonBorder_ClassInfo_, allocate$MotifBorders$ToggleButtonBorder);
	return class$;
}

$Class* MotifBorders$ToggleButtonBorder::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com