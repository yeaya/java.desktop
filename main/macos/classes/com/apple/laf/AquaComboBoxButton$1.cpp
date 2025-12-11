#include <com/apple/laf/AquaComboBoxButton$1.h>

#include <com/apple/laf/AquaComboBoxButton.h>
#include <javax/swing/DefaultButtonModel.h>
#include <jcpp.h>

using $AquaComboBoxButton = ::com::apple::laf::AquaComboBoxButton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxButton$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxButton$1, this$0)},
	{}
};

$MethodInfo _AquaComboBoxButton$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxButton;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxButton$1::*)($AquaComboBoxButton*)>(&AquaComboBoxButton$1::init$))},
	{"setArmed", "(Z)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxButton$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxButton",
	"<init>",
	"(Lcom/apple/laf/AquaComboBoxUI;Ljavax/swing/JComboBox;Ljavax/swing/CellRendererPane;Ljavax/swing/JList;)V"
};

$InnerClassInfo _AquaComboBoxButton$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxButton$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxButton$1",
	"javax.swing.DefaultButtonModel",
	nullptr,
	_AquaComboBoxButton$1_FieldInfo_,
	_AquaComboBoxButton$1_MethodInfo_,
	nullptr,
	&_AquaComboBoxButton$1_EnclosingMethodInfo_,
	_AquaComboBoxButton$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxButton"
};

$Object* allocate$AquaComboBoxButton$1($Class* clazz) {
	return $of($alloc(AquaComboBoxButton$1));
}

void AquaComboBoxButton$1::init$($AquaComboBoxButton* this$0) {
	$set(this, this$0, this$0);
	$DefaultButtonModel::init$();
}

void AquaComboBoxButton$1::setArmed(bool armed) {
	$DefaultButtonModel::setArmed(isPressed() ? true : armed);
}

AquaComboBoxButton$1::AquaComboBoxButton$1() {
}

$Class* AquaComboBoxButton$1::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxButton$1, name, initialize, &_AquaComboBoxButton$1_ClassInfo_, allocate$AquaComboBoxButton$1);
	return class$;
}

$Class* AquaComboBoxButton$1::class$ = nullptr;

		} // laf
	} // apple
} // com