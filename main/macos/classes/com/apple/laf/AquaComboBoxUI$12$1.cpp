#include <com/apple/laf/AquaComboBoxUI$12$1.h>

#include <com/apple/laf/AquaComboBoxUI$12.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <java/awt/Component.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

#undef FALSE

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$12 = ::com::apple::laf::AquaComboBoxUI$12;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $Boolean = ::java::lang::Boolean;
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

$FieldInfo _AquaComboBoxUI$12$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI$12;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$12$1, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$12$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI$12;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$12$1::*)($AquaComboBoxUI$12*,$String*)>(&AquaComboBoxUI$12$1::init$))},
	{"applyProperty", "(Lcom/apple/laf/AquaComboBoxUI;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$12$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI$12",
	"getInstance",
	"()Lcom/apple/laf/ClientPropertyApplicator;"
};

$InnerClassInfo _AquaComboBoxUI$12$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$12", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$12$1", nullptr, nullptr, 0},
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$12$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$12$1",
	"com.apple.laf.ClientPropertyApplicator$Property",
	nullptr,
	_AquaComboBoxUI$12$1_FieldInfo_,
	_AquaComboBoxUI$12$1_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator$Property<Lcom/apple/laf/AquaComboBoxUI;>;",
	&_AquaComboBoxUI$12$1_EnclosingMethodInfo_,
	_AquaComboBoxUI$12$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$12$1($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$12$1));
}

void AquaComboBoxUI$12$1::init$($AquaComboBoxUI$12* this$0, $String* name) {
	$set(this, this$0, this$0);
	$ClientPropertyApplicator$Property::init$(name);
}

void AquaComboBoxUI$12$1::applyProperty($AquaComboBoxUI* target, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	if ($nc($Boolean::FALSE)->equals(value)) {
		if ($AquaComboBoxUI::access$6700(target) != nullptr) {
			$nc($($AquaComboBoxUI::access$6800(target)))->hidePopup();
		}
	}
	if ($AquaComboBoxUI::access$6900(target) != nullptr) {
		$nc($($AquaComboBoxUI::access$7000(target)))->repaint();
	}
}

void AquaComboBoxUI$12$1::applyProperty(Object$* target, Object$* value) {
	this->applyProperty($cast($AquaComboBoxUI, target), value);
}

AquaComboBoxUI$12$1::AquaComboBoxUI$12$1() {
}

$Class* AquaComboBoxUI$12$1::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$12$1, name, initialize, &_AquaComboBoxUI$12$1_ClassInfo_, allocate$AquaComboBoxUI$12$1);
	return class$;
}

$Class* AquaComboBoxUI$12$1::class$ = nullptr;

		} // laf
	} // apple
} // com