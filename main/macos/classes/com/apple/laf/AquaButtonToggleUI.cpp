#include <com/apple/laf/AquaButtonToggleUI.h>

#include <com/apple/laf/AquaButtonUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $AquaButtonUI = ::com::apple::laf::AquaButtonUI;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonToggleUI_FieldInfo_[] = {
	{"aquaToggleButtonUI", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonToggleUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonToggleUI, aquaToggleButtonUI)},
	{}
};

$MethodInfo _AquaButtonToggleUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonToggleUI::*)()>(&AquaButtonToggleUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaButtonToggleUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaButtonToggleUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonToggleUI",
	"com.apple.laf.AquaButtonUI",
	nullptr,
	_AquaButtonToggleUI_FieldInfo_,
	_AquaButtonToggleUI_MethodInfo_
};

$Object* allocate$AquaButtonToggleUI($Class* clazz) {
	return $of($alloc(AquaButtonToggleUI));
}

$AquaUtils$RecyclableSingleton* AquaButtonToggleUI::aquaToggleButtonUI = nullptr;

void AquaButtonToggleUI::init$() {
	$AquaButtonUI::init$();
}

$ComponentUI* AquaButtonToggleUI::createUI($JComponent* b) {
	$init(AquaButtonToggleUI);
	return $cast($ComponentUI, $nc(AquaButtonToggleUI::aquaToggleButtonUI)->get());
}

$String* AquaButtonToggleUI::getPropertyPrefix() {
	return "ToggleButton."_s;
}

void clinit$AquaButtonToggleUI($Class* class$) {
	$assignStatic(AquaButtonToggleUI::aquaToggleButtonUI, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaButtonToggleUI::class$));
}

AquaButtonToggleUI::AquaButtonToggleUI() {
}

$Class* AquaButtonToggleUI::load$($String* name, bool initialize) {
	$loadClass(AquaButtonToggleUI, name, initialize, &_AquaButtonToggleUI_ClassInfo_, clinit$AquaButtonToggleUI, allocate$AquaButtonToggleUI);
	return class$;
}

$Class* AquaButtonToggleUI::class$ = nullptr;

		} // laf
	} // apple
} // com