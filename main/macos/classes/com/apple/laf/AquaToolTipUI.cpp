#include <com/apple/laf/AquaToolTipUI.h>

#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicToolTipUI.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicToolTipUI = ::javax::swing::plaf::basic::BasicToolTipUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaToolTipUI_FieldInfo_[] = {
	{"sharedAquaInstance", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor;", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor<Lcom/apple/laf/AquaToolTipUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaToolTipUI, sharedAquaInstance)},
	{}
};

$MethodInfo _AquaToolTipUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaToolTipUI::*)()>(&AquaToolTipUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaToolTipUI::createUI))},
	{}
};

$ClassInfo _AquaToolTipUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaToolTipUI",
	"javax.swing.plaf.basic.BasicToolTipUI",
	nullptr,
	_AquaToolTipUI_FieldInfo_,
	_AquaToolTipUI_MethodInfo_
};

$Object* allocate$AquaToolTipUI($Class* clazz) {
	return $of($alloc(AquaToolTipUI));
}

$AquaUtils$RecyclableSingletonFromDefaultConstructor* AquaToolTipUI::sharedAquaInstance = nullptr;

$ComponentUI* AquaToolTipUI::createUI($JComponent* c) {
	$init(AquaToolTipUI);
	return $cast($ComponentUI, $nc(AquaToolTipUI::sharedAquaInstance)->get());
}

void AquaToolTipUI::init$() {
	$BasicToolTipUI::init$();
}

void clinit$AquaToolTipUI($Class* class$) {
	$assignStatic(AquaToolTipUI::sharedAquaInstance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaToolTipUI::class$));
}

AquaToolTipUI::AquaToolTipUI() {
}

$Class* AquaToolTipUI::load$($String* name, bool initialize) {
	$loadClass(AquaToolTipUI, name, initialize, &_AquaToolTipUI_ClassInfo_, clinit$AquaToolTipUI, allocate$AquaToolTipUI);
	return class$;
}

$Class* AquaToolTipUI::class$ = nullptr;

		} // laf
	} // apple
} // com