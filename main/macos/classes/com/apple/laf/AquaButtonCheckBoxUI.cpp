#include <com/apple/laf/AquaButtonCheckBoxUI.h>

#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonCheckBoxUI$1.h>
#include <com/apple/laf/AquaButtonCheckBoxUI$CheckBoxButtonBorder.h>
#include <com/apple/laf/AquaButtonLabeledUI$LabeledButtonBorder.h>
#include <com/apple/laf/AquaButtonLabeledUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonCheckBoxUI$1 = ::com::apple::laf::AquaButtonCheckBoxUI$1;
using $AquaButtonCheckBoxUI$CheckBoxButtonBorder = ::com::apple::laf::AquaButtonCheckBoxUI$CheckBoxButtonBorder;
using $AquaButtonLabeledUI = ::com::apple::laf::AquaButtonLabeledUI;
using $AquaButtonLabeledUI$LabeledButtonBorder = ::com::apple::laf::AquaButtonLabeledUI$LabeledButtonBorder;
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

$FieldInfo _AquaButtonCheckBoxUI_FieldInfo_[] = {
	{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonCheckBoxUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonCheckBoxUI, instance)},
	{"sizingIcon", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/ImageIcon;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonCheckBoxUI, sizingIcon)},
	{}
};

$MethodInfo _AquaButtonCheckBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonCheckBoxUI::*)()>(&AquaButtonCheckBoxUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaButtonCheckBoxUI::createUI))},
	{"getPainter", "()Lcom/apple/laf/AquaButtonBorder;", nullptr, $PROTECTED},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSizingCheckBoxIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&AquaButtonCheckBoxUI::getSizingCheckBoxIcon))},
	{}
};

$InnerClassInfo _AquaButtonCheckBoxUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonCheckBoxUI$CheckBoxButtonBorder", "com.apple.laf.AquaButtonCheckBoxUI", "CheckBoxButtonBorder", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonCheckBoxUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaButtonCheckBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonCheckBoxUI",
	"com.apple.laf.AquaButtonLabeledUI",
	nullptr,
	_AquaButtonCheckBoxUI_FieldInfo_,
	_AquaButtonCheckBoxUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonCheckBoxUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonCheckBoxUI$CheckBoxButtonBorder,com.apple.laf.AquaButtonCheckBoxUI$1"
};

$Object* allocate$AquaButtonCheckBoxUI($Class* clazz) {
	return $of($alloc(AquaButtonCheckBoxUI));
}

$AquaUtils$RecyclableSingleton* AquaButtonCheckBoxUI::instance = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonCheckBoxUI::sizingIcon = nullptr;

void AquaButtonCheckBoxUI::init$() {
	$AquaButtonLabeledUI::init$();
}

$ComponentUI* AquaButtonCheckBoxUI::createUI($JComponent* b) {
	$init(AquaButtonCheckBoxUI);
	return $cast($ComponentUI, $nc(AquaButtonCheckBoxUI::instance)->get());
}

$Icon* AquaButtonCheckBoxUI::getSizingCheckBoxIcon() {
	$init(AquaButtonCheckBoxUI);
	return $cast($Icon, $nc(AquaButtonCheckBoxUI::sizingIcon)->get());
}

$String* AquaButtonCheckBoxUI::getPropertyPrefix() {
	return "CheckBox."_s;
}

$AquaButtonBorder* AquaButtonCheckBoxUI::getPainter() {
	return $new($AquaButtonCheckBoxUI$CheckBoxButtonBorder);
}

void clinit$AquaButtonCheckBoxUI($Class* class$) {
	$assignStatic(AquaButtonCheckBoxUI::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaButtonCheckBoxUI::class$));
	$assignStatic(AquaButtonCheckBoxUI::sizingIcon, $new($AquaButtonCheckBoxUI$1));
}

AquaButtonCheckBoxUI::AquaButtonCheckBoxUI() {
}

$Class* AquaButtonCheckBoxUI::load$($String* name, bool initialize) {
	$loadClass(AquaButtonCheckBoxUI, name, initialize, &_AquaButtonCheckBoxUI_ClassInfo_, clinit$AquaButtonCheckBoxUI, allocate$AquaButtonCheckBoxUI);
	return class$;
}

$Class* AquaButtonCheckBoxUI::class$ = nullptr;

		} // laf
	} // apple
} // com