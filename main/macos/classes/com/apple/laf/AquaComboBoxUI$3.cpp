#include <com/apple/laf/AquaComboBoxUI$3.h>

#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <javax/swing/Action.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$ComboBoxAction = ::com::apple::laf::AquaComboBoxUI$ComboBoxAction;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;
using $JList = ::javax::swing::JList;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$3_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$3, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$3_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$3::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$3::init$))},
	{"performComboBoxAction", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$3",
	"com.apple.laf.AquaComboBoxUI$ComboBoxAction",
	nullptr,
	_AquaComboBoxUI$3_FieldInfo_,
	_AquaComboBoxUI$3_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$3_EnclosingMethodInfo_,
	_AquaComboBoxUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$3($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$3));
}

void AquaComboBoxUI$3::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AquaComboBoxUI$ComboBoxAction::init$(this$0);
}

void AquaComboBoxUI$3::performComboBoxAction($AquaComboBoxUI* ui) {
	$useLocalCurrentObjectStackCache();
	int32_t si = $nc($($AquaComboBoxUI::access$2400(this->this$0)))->getSelectedIndex();
	if (si < $nc($($nc($($AquaComboBoxUI::access$2500(this->this$0)))->getModel()))->getSize() - 1) {
		$nc($($AquaComboBoxUI::access$2600(this->this$0)))->setSelectedIndex(si + 1);
		$nc($($AquaComboBoxUI::access$2700(this->this$0)))->ensureIndexIsVisible(si + 1);
	}
	$nc($($AquaComboBoxUI::access$2800(this->this$0)))->repaint();
}

AquaComboBoxUI$3::AquaComboBoxUI$3() {
}

$Class* AquaComboBoxUI$3::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$3, name, initialize, &_AquaComboBoxUI$3_ClassInfo_, allocate$AquaComboBoxUI$3);
	return class$;
}

$Class* AquaComboBoxUI$3::class$ = nullptr;

		} // laf
	} // apple
} // com