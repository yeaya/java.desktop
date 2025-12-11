#include <com/apple/laf/AquaComboBoxUI$8.h>

#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Rectangle.h>
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

$FieldInfo _AquaComboBoxUI$8_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$8, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$8_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$8::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$8::init$))},
	{"performComboBoxAction", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$8_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$8_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$8", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$8_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$8",
	"com.apple.laf.AquaComboBoxUI$ComboBoxAction",
	nullptr,
	_AquaComboBoxUI$8_FieldInfo_,
	_AquaComboBoxUI$8_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$8_EnclosingMethodInfo_,
	_AquaComboBoxUI$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$8($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$8));
}

void AquaComboBoxUI$8::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AquaComboBoxUI$ComboBoxAction::init$(this$0);
}

void AquaComboBoxUI$8::performComboBoxAction($AquaComboBoxUI* ui) {
	$useLocalCurrentObjectStackCache();
	int32_t current = $nc($($AquaComboBoxUI::access$4500(this->this$0)))->getSelectedIndex();
	int32_t last = $nc($($AquaComboBoxUI::access$4600(this->this$0)))->getLastVisibleIndex();
	if (current != last) {
		$nc($($AquaComboBoxUI::access$4700(this->this$0)))->setSelectedIndex(last);
		return;
	}
	int32_t var$0 = $nc($($nc($($AquaComboBoxUI::access$4800(this->this$0)))->getVisibleRect()))->height;
	int32_t page = $div(var$0, $nc($($nc($($AquaComboBoxUI::access$4900(this->this$0)))->getCellBounds(0, 0)))->height);
	int32_t end = $nc($($nc($($AquaComboBoxUI::access$5000(this->this$0)))->getModel()))->getSize() - 1;
	int32_t target = last + page;
	if (target > end) {
		target = end;
	}
	$nc($($AquaComboBoxUI::access$5100(this->this$0)))->ensureIndexIsVisible(target);
	$nc($($AquaComboBoxUI::access$5200(this->this$0)))->setSelectedIndex(target);
}

AquaComboBoxUI$8::AquaComboBoxUI$8() {
}

$Class* AquaComboBoxUI$8::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$8, name, initialize, &_AquaComboBoxUI$8_ClassInfo_, allocate$AquaComboBoxUI$8);
	return class$;
}

$Class* AquaComboBoxUI$8::class$ = nullptr;

		} // laf
	} // apple
} // com