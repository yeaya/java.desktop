#include <com/apple/laf/AquaComboBoxUI$7.h>

#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Rectangle.h>
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

$FieldInfo _AquaComboBoxUI$7_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$7, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$7_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$7::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$7::init$))},
	{"performComboBoxAction", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$7_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaComboBoxUI$7_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$7", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$7",
	"com.apple.laf.AquaComboBoxUI$ComboBoxAction",
	nullptr,
	_AquaComboBoxUI$7_FieldInfo_,
	_AquaComboBoxUI$7_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$7_EnclosingMethodInfo_,
	_AquaComboBoxUI$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$7($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$7));
}

void AquaComboBoxUI$7::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AquaComboBoxUI$ComboBoxAction::init$(this$0);
}

void AquaComboBoxUI$7::performComboBoxAction($AquaComboBoxUI* ui) {
	$useLocalCurrentObjectStackCache();
	int32_t current = $nc($($AquaComboBoxUI::access$3800(this->this$0)))->getSelectedIndex();
	int32_t first = $nc($($AquaComboBoxUI::access$3900(this->this$0)))->getFirstVisibleIndex();
	if (current != first) {
		$nc($($AquaComboBoxUI::access$4000(this->this$0)))->setSelectedIndex(first);
		return;
	}
	int32_t var$0 = $nc($($nc($($AquaComboBoxUI::access$4100(this->this$0)))->getVisibleRect()))->height;
	int32_t page = $div(var$0, $nc($($nc($($AquaComboBoxUI::access$4200(this->this$0)))->getCellBounds(0, 0)))->height);
	int32_t target = first - page;
	if (target < 0) {
		target = 0;
	}
	$nc($($AquaComboBoxUI::access$4300(this->this$0)))->ensureIndexIsVisible(target);
	$nc($($AquaComboBoxUI::access$4400(this->this$0)))->setSelectedIndex(target);
}

AquaComboBoxUI$7::AquaComboBoxUI$7() {
}

$Class* AquaComboBoxUI$7::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$7, name, initialize, &_AquaComboBoxUI$7_ClassInfo_, allocate$AquaComboBoxUI$7);
	return class$;
}

$Class* AquaComboBoxUI$7::class$ = nullptr;

		} // laf
	} // apple
} // com