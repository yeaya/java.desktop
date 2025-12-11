#include <com/apple/laf/AquaButtonRadioUI$RadioButtonBorder.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonLabeledUI$LabeledButtonBorder.h>
#include <com/apple/laf/AquaButtonRadioUI.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

#undef BUTTON_RADIO

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaButtonLabeledUI$LabeledButtonBorder = ::com::apple::laf::AquaButtonLabeledUI$LabeledButtonBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonRadioUI$RadioButtonBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonRadioUI$RadioButtonBorder::*)()>(&AquaButtonRadioUI$RadioButtonBorder::init$))},
	{"<init>", "(Lcom/apple/laf/AquaButtonRadioUI$RadioButtonBorder;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonRadioUI$RadioButtonBorder::*)(AquaButtonRadioUI$RadioButtonBorder*)>(&AquaButtonRadioUI$RadioButtonBorder::init$))},
	{}
};

$InnerClassInfo _AquaButtonRadioUI$RadioButtonBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonRadioUI$RadioButtonBorder", "com.apple.laf.AquaButtonRadioUI", "RadioButtonBorder", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder", "com.apple.laf.AquaButtonLabeledUI", "LabeledButtonBorder", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonRadioUI$RadioButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonRadioUI$RadioButtonBorder",
	"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder",
	nullptr,
	nullptr,
	_AquaButtonRadioUI$RadioButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonRadioUI$RadioButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonRadioUI"
};

$Object* allocate$AquaButtonRadioUI$RadioButtonBorder($Class* clazz) {
	return $of($alloc(AquaButtonRadioUI$RadioButtonBorder));
}

void AquaButtonRadioUI$RadioButtonBorder::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaButtonLabeledUI$LabeledButtonBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant)->replaceMargins("RadioButton.margin"_s))));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_RADIO);
}

void AquaButtonRadioUI$RadioButtonBorder::init$(AquaButtonRadioUI$RadioButtonBorder* other) {
	$AquaButtonLabeledUI$LabeledButtonBorder::init$(static_cast<$AquaButtonLabeledUI$LabeledButtonBorder*>(other));
}

AquaButtonRadioUI$RadioButtonBorder::AquaButtonRadioUI$RadioButtonBorder() {
}

$Class* AquaButtonRadioUI$RadioButtonBorder::load$($String* name, bool initialize) {
	$loadClass(AquaButtonRadioUI$RadioButtonBorder, name, initialize, &_AquaButtonRadioUI$RadioButtonBorder_ClassInfo_, allocate$AquaButtonRadioUI$RadioButtonBorder);
	return class$;
}

$Class* AquaButtonRadioUI$RadioButtonBorder::class$ = nullptr;

		} // laf
	} // apple
} // com