#include <com/apple/laf/AquaButtonBorder$Named.h>

#include <apple/laf/JRSUIConstants$BooleanValue.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <jcpp.h>

#undef NO
#undef YES

using $JRSUIConstants$BooleanValue = ::apple::laf::JRSUIConstants$BooleanValue;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonBorder$Named_MethodInfo_[] = {
	{"<init>", "(Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder$Named::*)($JRSUIConstants$Widget*,$AquaUtilControlSize$SizeDescriptor*)>(&AquaButtonBorder$Named::init$))},
	{"<init>", "(Lcom/apple/laf/AquaButtonBorder$Named;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder$Named::*)(AquaButtonBorder$Named*)>(&AquaButtonBorder$Named::init$))},
	{"doButtonPaint", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaButtonBorder$Named_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonBorder$Named", "com.apple.laf.AquaButtonBorder", "Named", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaButtonBorder$Named_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonBorder$Named",
	"com.apple.laf.AquaButtonBorder",
	nullptr,
	nullptr,
	_AquaButtonBorder$Named_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonBorder$Named_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonBorder"
};

$Object* allocate$AquaButtonBorder$Named($Class* clazz) {
	return $of($alloc(AquaButtonBorder$Named));
}

void AquaButtonBorder$Named::init$($JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaButtonBorder::init$(sizeDescriptor);
	$nc($nc(this->painter)->state)->set(widget);
}

void AquaButtonBorder$Named::init$(AquaButtonBorder$Named* sizeDescriptor) {
	$AquaButtonBorder::init$(static_cast<$AquaButtonBorder*>(sizeDescriptor));
}

void AquaButtonBorder$Named::doButtonPaint($AbstractButton* b, $ButtonModel* model, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($JRSUIConstants$BooleanValue);
	$nc($nc(this->painter)->state)->set($nc(model)->isSelected() ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$BooleanValue::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$BooleanValue::NO));
	$AquaButtonBorder::doButtonPaint(b, model, g, x, y, width, height);
}

AquaButtonBorder$Named::AquaButtonBorder$Named() {
}

$Class* AquaButtonBorder$Named::load$($String* name, bool initialize) {
	$loadClass(AquaButtonBorder$Named, name, initialize, &_AquaButtonBorder$Named_ClassInfo_, allocate$AquaButtonBorder$Named);
	return class$;
}

$Class* AquaButtonBorder$Named::class$ = nullptr;

		} // laf
	} // apple
} // com