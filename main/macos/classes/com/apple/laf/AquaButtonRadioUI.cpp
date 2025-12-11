#include <com/apple/laf/AquaButtonRadioUI.h>

#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonLabeledUI$LabeledButtonBorder.h>
#include <com/apple/laf/AquaButtonLabeledUI.h>
#include <com/apple/laf/AquaButtonRadioUI$1.h>
#include <com/apple/laf/AquaButtonRadioUI$RadioButtonBorder.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonLabeledUI = ::com::apple::laf::AquaButtonLabeledUI;
using $AquaButtonLabeledUI$LabeledButtonBorder = ::com::apple::laf::AquaButtonLabeledUI$LabeledButtonBorder;
using $AquaButtonRadioUI$1 = ::com::apple::laf::AquaButtonRadioUI$1;
using $AquaButtonRadioUI$RadioButtonBorder = ::com::apple::laf::AquaButtonRadioUI$RadioButtonBorder;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonRadioUI_FieldInfo_[] = {
	{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonRadioUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonRadioUI, instance)},
	{"sizingIcon", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/ImageIcon;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonRadioUI, sizingIcon)},
	{}
};

$MethodInfo _AquaButtonRadioUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonRadioUI::*)()>(&AquaButtonRadioUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaButtonRadioUI::createUI))},
	{"getPainter", "()Lcom/apple/laf/AquaButtonBorder;", nullptr, $PROTECTED},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getSizingRadioButtonIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&AquaButtonRadioUI::getSizingRadioButtonIcon))},
	{}
};

$InnerClassInfo _AquaButtonRadioUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonRadioUI$RadioButtonBorder", "com.apple.laf.AquaButtonRadioUI", "RadioButtonBorder", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonRadioUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaButtonRadioUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonRadioUI",
	"com.apple.laf.AquaButtonLabeledUI",
	nullptr,
	_AquaButtonRadioUI_FieldInfo_,
	_AquaButtonRadioUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonRadioUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonRadioUI$RadioButtonBorder,com.apple.laf.AquaButtonRadioUI$1"
};

$Object* allocate$AquaButtonRadioUI($Class* clazz) {
	return $of($alloc(AquaButtonRadioUI));
}

$AquaUtils$RecyclableSingleton* AquaButtonRadioUI::instance = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonRadioUI::sizingIcon = nullptr;

void AquaButtonRadioUI::init$() {
	$AquaButtonLabeledUI::init$();
}

$ComponentUI* AquaButtonRadioUI::createUI($JComponent* b) {
	$init(AquaButtonRadioUI);
	return $cast($ComponentUI, $nc(AquaButtonRadioUI::instance)->get());
}

$Icon* AquaButtonRadioUI::getSizingRadioButtonIcon() {
	$init(AquaButtonRadioUI);
	return $cast($Icon, $nc(AquaButtonRadioUI::sizingIcon)->get());
}

$String* AquaButtonRadioUI::getPropertyPrefix() {
	return "RadioButton."_s;
}

$AquaButtonBorder* AquaButtonRadioUI::getPainter() {
	return $new($AquaButtonRadioUI$RadioButtonBorder);
}

void clinit$AquaButtonRadioUI($Class* class$) {
	$assignStatic(AquaButtonRadioUI::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaButtonRadioUI::class$));
	$assignStatic(AquaButtonRadioUI::sizingIcon, $new($AquaButtonRadioUI$1));
}

AquaButtonRadioUI::AquaButtonRadioUI() {
}

$Class* AquaButtonRadioUI::load$($String* name, bool initialize) {
	$loadClass(AquaButtonRadioUI, name, initialize, &_AquaButtonRadioUI_ClassInfo_, clinit$AquaButtonRadioUI, allocate$AquaButtonRadioUI);
	return class$;
}

$Class* AquaButtonRadioUI::class$ = nullptr;

		} // laf
	} // apple
} // com