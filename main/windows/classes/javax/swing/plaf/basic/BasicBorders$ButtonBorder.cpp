#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>

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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicBorders$ButtonBorder_FieldInfo_[] = {
	{"shadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$ButtonBorder, shadow)},
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$ButtonBorder, darkShadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$ButtonBorder, highlight)},
	{"lightHighlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$ButtonBorder, lightHighlight)},
	{}
};

$MethodInfo _BasicBorders$ButtonBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicBorders$ButtonBorder::*)($Color*,$Color*,$Color*,$Color*)>(&BasicBorders$ButtonBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicBorders$ButtonBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$ButtonBorder", "javax.swing.plaf.basic.BasicBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicBorders$ButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders$ButtonBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_BasicBorders$ButtonBorder_FieldInfo_,
	_BasicBorders$ButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders$ButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders"
};

$Object* allocate$BasicBorders$ButtonBorder($Class* clazz) {
	return $of($alloc(BasicBorders$ButtonBorder));
}

int32_t BasicBorders$ButtonBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool BasicBorders$ButtonBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* BasicBorders$ButtonBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* BasicBorders$ButtonBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void BasicBorders$ButtonBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void BasicBorders$ButtonBorder::init$($Color* shadow, $Color* darkShadow, $Color* highlight, $Color* lightHighlight) {
	$AbstractBorder::init$();
	$set(this, shadow, shadow);
	$set(this, darkShadow, darkShadow);
	$set(this, highlight, highlight);
	$set(this, lightHighlight, lightHighlight);
}

void BasicBorders$ButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	bool isPressed = false;
	bool isDefault = false;
	if ($instanceOf($AbstractButton, c)) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, $nc(b)->getModel());
		bool var$0 = $nc(model)->isPressed();
		isPressed = var$0 && model->isArmed();
		if ($instanceOf($JButton, c)) {
			isDefault = $nc(($cast($JButton, c)))->isDefaultButton();
		}
	}
	$BasicGraphicsUtils::drawBezel(g, x, y, width, height, isPressed, isDefault, this->shadow, this->darkShadow, this->highlight, this->lightHighlight);
}

$Insets* BasicBorders$ButtonBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 3, 3, 3);
	return insets;
}

BasicBorders$ButtonBorder::BasicBorders$ButtonBorder() {
}

$Class* BasicBorders$ButtonBorder::load$($String* name, bool initialize) {
	$loadClass(BasicBorders$ButtonBorder, name, initialize, &_BasicBorders$ButtonBorder_ClassInfo_, allocate$BasicBorders$ButtonBorder);
	return class$;
}

$Class* BasicBorders$ButtonBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax