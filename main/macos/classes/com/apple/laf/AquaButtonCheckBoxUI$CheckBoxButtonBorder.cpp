#include <com/apple/laf/AquaButtonCheckBoxUI$CheckBoxButtonBorder.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonCheckBoxUI.h>
#include <com/apple/laf/AquaButtonLabeledUI$LabeledButtonBorder.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

#undef BUTTON_CHECK_BOX

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

$MethodInfo _AquaButtonCheckBoxUI$CheckBoxButtonBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonCheckBoxUI$CheckBoxButtonBorder::*)()>(&AquaButtonCheckBoxUI$CheckBoxButtonBorder::init$))},
	{"<init>", "(Lcom/apple/laf/AquaButtonCheckBoxUI$CheckBoxButtonBorder;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonCheckBoxUI$CheckBoxButtonBorder::*)(AquaButtonCheckBoxUI$CheckBoxButtonBorder*)>(&AquaButtonCheckBoxUI$CheckBoxButtonBorder::init$))},
	{}
};

$InnerClassInfo _AquaButtonCheckBoxUI$CheckBoxButtonBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonCheckBoxUI$CheckBoxButtonBorder", "com.apple.laf.AquaButtonCheckBoxUI", "CheckBoxButtonBorder", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder", "com.apple.laf.AquaButtonLabeledUI", "LabeledButtonBorder", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonCheckBoxUI$CheckBoxButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonCheckBoxUI$CheckBoxButtonBorder",
	"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder",
	nullptr,
	nullptr,
	_AquaButtonCheckBoxUI$CheckBoxButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonCheckBoxUI$CheckBoxButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonCheckBoxUI"
};

$Object* allocate$AquaButtonCheckBoxUI$CheckBoxButtonBorder($Class* clazz) {
	return $of($alloc(AquaButtonCheckBoxUI$CheckBoxButtonBorder));
}

void AquaButtonCheckBoxUI$CheckBoxButtonBorder::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaButtonLabeledUI$LabeledButtonBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant)->replaceMargins("CheckBox.margin"_s))));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_CHECK_BOX);
}

void AquaButtonCheckBoxUI$CheckBoxButtonBorder::init$(AquaButtonCheckBoxUI$CheckBoxButtonBorder* sizeDescriptor) {
	$AquaButtonLabeledUI$LabeledButtonBorder::init$(static_cast<$AquaButtonLabeledUI$LabeledButtonBorder*>(sizeDescriptor));
}

AquaButtonCheckBoxUI$CheckBoxButtonBorder::AquaButtonCheckBoxUI$CheckBoxButtonBorder() {
}

$Class* AquaButtonCheckBoxUI$CheckBoxButtonBorder::load$($String* name, bool initialize) {
	$loadClass(AquaButtonCheckBoxUI$CheckBoxButtonBorder, name, initialize, &_AquaButtonCheckBoxUI$CheckBoxButtonBorder_ClassInfo_, allocate$AquaButtonCheckBoxUI$CheckBoxButtonBorder);
	return class$;
}

$Class* AquaButtonCheckBoxUI$CheckBoxButtonBorder::class$ = nullptr;

		} // laf
	} // apple
} // com