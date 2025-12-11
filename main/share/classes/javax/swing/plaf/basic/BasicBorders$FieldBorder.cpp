#include <javax/swing/plaf/basic/BasicBorders$FieldBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/text/JTextComponent.h>
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
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicBorders$FieldBorder_FieldInfo_[] = {
	{"shadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$FieldBorder, shadow)},
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$FieldBorder, darkShadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$FieldBorder, highlight)},
	{"lightHighlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$FieldBorder, lightHighlight)},
	{}
};

$MethodInfo _BasicBorders$FieldBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicBorders$FieldBorder::*)($Color*,$Color*,$Color*,$Color*)>(&BasicBorders$FieldBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicBorders$FieldBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$FieldBorder", "javax.swing.plaf.basic.BasicBorders", "FieldBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicBorders$FieldBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders$FieldBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_BasicBorders$FieldBorder_FieldInfo_,
	_BasicBorders$FieldBorder_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders$FieldBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders"
};

$Object* allocate$BasicBorders$FieldBorder($Class* clazz) {
	return $of($alloc(BasicBorders$FieldBorder));
}

int32_t BasicBorders$FieldBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool BasicBorders$FieldBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* BasicBorders$FieldBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* BasicBorders$FieldBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void BasicBorders$FieldBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void BasicBorders$FieldBorder::init$($Color* shadow, $Color* darkShadow, $Color* highlight, $Color* lightHighlight) {
	$AbstractBorder::init$();
	$set(this, shadow, shadow);
	$set(this, highlight, highlight);
	$set(this, darkShadow, darkShadow);
	$set(this, lightHighlight, lightHighlight);
}

void BasicBorders$FieldBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$BasicGraphicsUtils::drawEtchedRect(g, x, y, width, height, this->shadow, this->darkShadow, this->highlight, this->lightHighlight);
}

$Insets* BasicBorders$FieldBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($Insets, margin, nullptr);
	if ($instanceOf($JTextComponent, c)) {
		$assign(margin, $nc(($cast($JTextComponent, c)))->getMargin());
	}
	$nc(insets)->top = margin != nullptr ? 2 + $nc(margin)->top : 2;
	insets->left = margin != nullptr ? 2 + margin->left : 2;
	insets->bottom = margin != nullptr ? 2 + margin->bottom : 2;
	insets->right = margin != nullptr ? 2 + margin->right : 2;
	return insets;
}

BasicBorders$FieldBorder::BasicBorders$FieldBorder() {
}

$Class* BasicBorders$FieldBorder::load$($String* name, bool initialize) {
	$loadClass(BasicBorders$FieldBorder, name, initialize, &_BasicBorders$FieldBorder_ClassInfo_, allocate$BasicBorders$FieldBorder);
	return class$;
}

$Class* BasicBorders$FieldBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax