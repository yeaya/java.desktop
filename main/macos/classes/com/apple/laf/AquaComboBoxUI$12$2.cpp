#include <com/apple/laf/AquaComboBoxUI$12$2.h>

#include <com/apple/laf/AquaComboBoxUI$12.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <java/awt/Component.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$12 = ::com::apple::laf::AquaComboBoxUI$12;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$12$2_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI$12;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$12$2, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$12$2_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI$12;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$12$2::*)($AquaComboBoxUI$12*,$String*)>(&AquaComboBoxUI$12$2::init$))},
	{"applyProperty", "(Lcom/apple/laf/AquaComboBoxUI;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$12$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI$12",
	"getInstance",
	"()Lcom/apple/laf/ClientPropertyApplicator;"
};

$InnerClassInfo _AquaComboBoxUI$12$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$12", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$12$2", nullptr, nullptr, 0},
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaComboBoxUI$12$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$12$2",
	"com.apple.laf.ClientPropertyApplicator$Property",
	nullptr,
	_AquaComboBoxUI$12$2_FieldInfo_,
	_AquaComboBoxUI$12$2_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator$Property<Lcom/apple/laf/AquaComboBoxUI;>;",
	&_AquaComboBoxUI$12$2_EnclosingMethodInfo_,
	_AquaComboBoxUI$12$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$12$2($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$12$2));
}

void AquaComboBoxUI$12$2::init$($AquaComboBoxUI$12* this$0, $String* name) {
	$set(this, this$0, this$0);
	$ClientPropertyApplicator$Property::init$(name);
}

void AquaComboBoxUI$12$2::applyProperty($AquaComboBoxUI* target, Object$* value) {
	if ($AquaComboBoxUI::access$7100(target) == nullptr) {
		return;
	}
	$nc($($AquaComboBoxUI::access$7200(target)))->repaint();
}

void AquaComboBoxUI$12$2::applyProperty(Object$* target, Object$* value) {
	this->applyProperty($cast($AquaComboBoxUI, target), value);
}

AquaComboBoxUI$12$2::AquaComboBoxUI$12$2() {
}

$Class* AquaComboBoxUI$12$2::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$12$2, name, initialize, &_AquaComboBoxUI$12$2_ClassInfo_, allocate$AquaComboBoxUI$12$2);
	return class$;
}

$Class* AquaComboBoxUI$12$2::class$ = nullptr;

		} // laf
	} // apple
} // com