#include <com/apple/laf/AquaButtonBorder$Toggle.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder$SizeConstants.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <jcpp.h>

#undef BUTTON_BEVEL
#undef BUTTON_BEVEL_ROUND

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonBorder$SizeConstants = ::com::apple::laf::AquaButtonBorder$SizeConstants;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonBorder$Toggle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder$Toggle::*)()>(&AquaButtonBorder$Toggle::init$))},
	{"<init>", "(Lcom/apple/laf/AquaButtonBorder$Toggle;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder$Toggle::*)(AquaButtonBorder$Toggle*)>(&AquaButtonBorder$Toggle::init$))},
	{"doButtonPaint", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaButtonBorder$Toggle_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonBorder$Toggle", "com.apple.laf.AquaButtonBorder", "Toggle", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaButtonBorder$Toggle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonBorder$Toggle",
	"com.apple.laf.AquaButtonBorder",
	nullptr,
	nullptr,
	_AquaButtonBorder$Toggle_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonBorder$Toggle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonBorder"
};

$Object* allocate$AquaButtonBorder$Toggle($Class* clazz) {
	return $of($alloc(AquaButtonBorder$Toggle));
}

void AquaButtonBorder$Toggle::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaButtonBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 6, 6, 6))));
}

void AquaButtonBorder$Toggle::init$(AquaButtonBorder$Toggle* other) {
	$AquaButtonBorder::init$(static_cast<$AquaButtonBorder*>(other));
}

void AquaButtonBorder$Toggle::doButtonPaint($AbstractButton* b, $ButtonModel* model, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (height < $AquaButtonBorder$SizeConstants::fSquareButtonHeightThreshold || width < $AquaButtonBorder$SizeConstants::fSquareButtonWidthThreshold) {
		$init($JRSUIConstants$Widget);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_BEVEL);
		$AquaButtonBorder::doButtonPaint(b, model, g, x, y, width, height);
		return;
	}
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_BEVEL_ROUND);
	$AquaButtonBorder::doButtonPaint(b, model, g, x, y + 1, width, height - 1);
}

AquaButtonBorder$Toggle::AquaButtonBorder$Toggle() {
}

$Class* AquaButtonBorder$Toggle::load$($String* name, bool initialize) {
	$loadClass(AquaButtonBorder$Toggle, name, initialize, &_AquaButtonBorder$Toggle_ClassInfo_, allocate$AquaButtonBorder$Toggle);
	return class$;
}

$Class* AquaButtonBorder$Toggle::class$ = nullptr;

		} // laf
	} // apple
} // com