#include <com/apple/laf/AquaComboBoxUI$4.h>

#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <javax/swing/Action.h>
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
using $JComboBox = ::javax::swing::JComboBox;
using $JList = ::javax::swing::JList;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$4_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$4, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$4_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$4::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$4::init$))},
	{"performComboBoxAction", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$4",
	"com.apple.laf.AquaComboBoxUI$ComboBoxAction",
	nullptr,
	_AquaComboBoxUI$4_FieldInfo_,
	_AquaComboBoxUI$4_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$4_EnclosingMethodInfo_,
	_AquaComboBoxUI$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$4($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$4));
}

void AquaComboBoxUI$4::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AquaComboBoxUI$ComboBoxAction::init$(this$0);
}

void AquaComboBoxUI$4::performComboBoxAction($AquaComboBoxUI* ui) {
	$useLocalCurrentObjectStackCache();
	int32_t si = $nc($($AquaComboBoxUI::access$2900(this->this$0)))->getSelectedIndex();
	if (si > 0) {
		$nc($($AquaComboBoxUI::access$3000(this->this$0)))->setSelectedIndex(si - 1);
		$nc($($AquaComboBoxUI::access$3100(this->this$0)))->ensureIndexIsVisible(si - 1);
	}
	$nc($($AquaComboBoxUI::access$3200(this->this$0)))->repaint();
}

AquaComboBoxUI$4::AquaComboBoxUI$4() {
}

$Class* AquaComboBoxUI$4::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$4, name, initialize, &_AquaComboBoxUI$4_ClassInfo_, allocate$AquaComboBoxUI$4);
	return class$;
}

$Class* AquaComboBoxUI$4::class$ = nullptr;

		} // laf
	} // apple
} // com