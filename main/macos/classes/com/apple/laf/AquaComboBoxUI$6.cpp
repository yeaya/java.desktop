#include <com/apple/laf/AquaComboBoxUI$6.h>

#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <javax/swing/Action.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$ComboBoxAction = ::com::apple::laf::AquaComboBoxUI$ComboBoxAction;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$6_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$6, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$6_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$6::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$6::init$))},
	{"performComboBoxAction", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$6_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$6_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$6",
	"com.apple.laf.AquaComboBoxUI$ComboBoxAction",
	nullptr,
	_AquaComboBoxUI$6_FieldInfo_,
	_AquaComboBoxUI$6_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$6_EnclosingMethodInfo_,
	_AquaComboBoxUI$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$6($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$6));
}

void AquaComboBoxUI$6::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AquaComboBoxUI$ComboBoxAction::init$(this$0);
}

void AquaComboBoxUI$6::performComboBoxAction($AquaComboBoxUI* ui) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc($($nc($($AquaComboBoxUI::access$3500(this->this$0)))->getModel()))->getSize();
	$nc($($AquaComboBoxUI::access$3600(this->this$0)))->setSelectedIndex(size - 1);
	$nc($($AquaComboBoxUI::access$3700(this->this$0)))->ensureIndexIsVisible(size - 1);
}

AquaComboBoxUI$6::AquaComboBoxUI$6() {
}

$Class* AquaComboBoxUI$6::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$6, name, initialize, &_AquaComboBoxUI$6_ClassInfo_, allocate$AquaComboBoxUI$6);
	return class$;
}

$Class* AquaComboBoxUI$6::class$ = nullptr;

		} // laf
	} // apple
} // com