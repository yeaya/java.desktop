#include <com/apple/laf/AquaComboBoxUI$1$1.h>

#include <com/apple/laf/AquaComboBoxUI$1.h>
#include <com/apple/laf/AquaListUI.h>
#include <jcpp.h>

using $AquaComboBoxUI$1 = ::com::apple::laf::AquaComboBoxUI$1;
using $AquaListUI = ::com::apple::laf::AquaListUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$1$1_FieldInfo_[] = {
	{"this$1", "Lcom/apple/laf/AquaComboBoxUI$1;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$1$1, this$1)},
	{"val$selectedIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$1$1, val$selectedIndex)},
	{"val$value", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$1$1, val$value)},
	{"val$aquaListUI", "Lcom/apple/laf/AquaListUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$1$1, val$aquaListUI)},
	{}
};

$MethodInfo _AquaComboBoxUI$1$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI$1;Lcom/apple/laf/AquaListUI;Ljava/lang/Object;I)V", "()V", 0, $method(static_cast<void(AquaComboBoxUI$1$1::*)($AquaComboBoxUI$1*,$AquaListUI*,Object$*,int32_t)>(&AquaComboBoxUI$1$1::init$))},
	{"paintSelected", "(Z)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$1$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI$1",
	"itemStateChanged",
	"(Ljava/awt/event/ItemEvent;)V"
};

$InnerClassInfo _AquaComboBoxUI$1$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$1$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$Selectable", "com.apple.laf.AquaUtils", "Selectable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$1$1",
	"java.lang.Object",
	"com.apple.laf.AquaUtils$Selectable",
	_AquaComboBoxUI$1$1_FieldInfo_,
	_AquaComboBoxUI$1$1_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$1$1_EnclosingMethodInfo_,
	_AquaComboBoxUI$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$1$1($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$1$1));
}

void AquaComboBoxUI$1$1::init$($AquaComboBoxUI$1* this$1, $AquaListUI* val$aquaListUI, Object$* val$value, int32_t val$selectedIndex) {
	$set(this, this$1, this$1);
	$set(this, val$aquaListUI, val$aquaListUI);
	$set(this, val$value, val$value);
	this->val$selectedIndex = val$selectedIndex;
}

void AquaComboBoxUI$1$1::paintSelected(bool selected) {
	$nc(this->val$aquaListUI)->repaintCell(this->val$value, this->val$selectedIndex, selected);
}

AquaComboBoxUI$1$1::AquaComboBoxUI$1$1() {
}

$Class* AquaComboBoxUI$1$1::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$1$1, name, initialize, &_AquaComboBoxUI$1$1_ClassInfo_, allocate$AquaComboBoxUI$1$1);
	return class$;
}

$Class* AquaComboBoxUI$1$1::class$ = nullptr;

		} // laf
	} // apple
} // com