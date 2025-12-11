#include <com/apple/laf/AquaComboBoxUI$5.h>

#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <javax/swing/Action.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$ComboBoxAction = ::com::apple::laf::AquaComboBoxUI$ComboBoxAction;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$5_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$5, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$5_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$5::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$5::init$))},
	{"performComboBoxAction", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$5_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$5_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$5",
	"com.apple.laf.AquaComboBoxUI$ComboBoxAction",
	nullptr,
	_AquaComboBoxUI$5_FieldInfo_,
	_AquaComboBoxUI$5_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$5_EnclosingMethodInfo_,
	_AquaComboBoxUI$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$5($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$5));
}

void AquaComboBoxUI$5::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AquaComboBoxUI$ComboBoxAction::init$(this$0);
}

void AquaComboBoxUI$5::performComboBoxAction($AquaComboBoxUI* ui) {
	$useLocalCurrentObjectStackCache();
	$nc($($AquaComboBoxUI::access$3300(this->this$0)))->setSelectedIndex(0);
	$nc($($AquaComboBoxUI::access$3400(this->this$0)))->ensureIndexIsVisible(0);
}

AquaComboBoxUI$5::AquaComboBoxUI$5() {
}

$Class* AquaComboBoxUI$5::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$5, name, initialize, &_AquaComboBoxUI$5_ClassInfo_, allocate$AquaComboBoxUI$5);
	return class$;
}

$Class* AquaComboBoxUI$5::class$ = nullptr;

		} // laf
	} // apple
} // com