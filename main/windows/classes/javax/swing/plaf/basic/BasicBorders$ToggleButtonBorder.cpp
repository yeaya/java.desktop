#include <javax/swing/plaf/basic/BasicBorders$ToggleButtonBorder.h>

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
#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $BasicBorders$ButtonBorder = ::javax::swing::plaf::basic::BasicBorders$ButtonBorder;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicBorders$ToggleButtonBorder_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicBorders$ToggleButtonBorder::*)($Color*,$Color*,$Color*,$Color*)>(&BasicBorders$ToggleButtonBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicBorders$ToggleButtonBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$ToggleButtonBorder", "javax.swing.plaf.basic.BasicBorders", "ToggleButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$ButtonBorder", "javax.swing.plaf.basic.BasicBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicBorders$ToggleButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders$ToggleButtonBorder",
	"javax.swing.plaf.basic.BasicBorders$ButtonBorder",
	nullptr,
	nullptr,
	_BasicBorders$ToggleButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders$ToggleButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders"
};

$Object* allocate$BasicBorders$ToggleButtonBorder($Class* clazz) {
	return $of($alloc(BasicBorders$ToggleButtonBorder));
}

void BasicBorders$ToggleButtonBorder::init$($Color* shadow, $Color* darkShadow, $Color* highlight, $Color* lightHighlight) {
	$BasicBorders$ButtonBorder::init$(shadow, darkShadow, highlight, lightHighlight);
}

void BasicBorders$ToggleButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$BasicGraphicsUtils::drawBezel(g, x, y, width, height, false, false, this->shadow, this->darkShadow, this->highlight, this->lightHighlight);
}

$Insets* BasicBorders$ToggleButtonBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 2, 2);
	return insets;
}

BasicBorders$ToggleButtonBorder::BasicBorders$ToggleButtonBorder() {
}

$Class* BasicBorders$ToggleButtonBorder::load$($String* name, bool initialize) {
	$loadClass(BasicBorders$ToggleButtonBorder, name, initialize, &_BasicBorders$ToggleButtonBorder_ClassInfo_, allocate$BasicBorders$ToggleButtonBorder);
	return class$;
}

$Class* BasicBorders$ToggleButtonBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax