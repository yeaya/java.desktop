#include <com/apple/laf/AquaComboBoxUI$12$7.h>

#include <com/apple/laf/AquaComboBoxUI$12.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClientPropertyApplicator$PropertyArray = $Array<::com::apple::laf::ClientPropertyApplicator$Property>;
using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$12 = ::com::apple::laf::AquaComboBoxUI$12;
using $ClientPropertyApplicator = ::com::apple::laf::ClientPropertyApplicator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$12$7_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI$12;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$12$7, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$12$7_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI$12;[Lcom/apple/laf/ClientPropertyApplicator$Property;)V", nullptr, $TRANSIENT, $method(static_cast<void(AquaComboBoxUI$12$7::*)($AquaComboBoxUI$12*,$ClientPropertyApplicator$PropertyArray*)>(&AquaComboBoxUI$12$7::init$))},
	{"convertJComponentToTarget", "(Ljavax/swing/JComboBox;)Lcom/apple/laf/AquaComboBoxUI;", "(Ljavax/swing/JComboBox<*>;)Lcom/apple/laf/AquaComboBoxUI;", $PUBLIC},
	{"convertJComponentToTarget", "(Ljavax/swing/JComponent;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$12$7_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI$12",
	"getInstance",
	"()Lcom/apple/laf/ClientPropertyApplicator;"
};

$InnerClassInfo _AquaComboBoxUI$12$7_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$12", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$12$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxUI$12$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$12$7",
	"com.apple.laf.ClientPropertyApplicator",
	nullptr,
	_AquaComboBoxUI$12$7_FieldInfo_,
	_AquaComboBoxUI$12$7_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/JComboBox<*>;Lcom/apple/laf/AquaComboBoxUI;>;",
	&_AquaComboBoxUI$12$7_EnclosingMethodInfo_,
	_AquaComboBoxUI$12$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$12$7($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$12$7));
}

void AquaComboBoxUI$12$7::init$($AquaComboBoxUI$12* this$0, $ClientPropertyApplicator$PropertyArray* propertyList) {
	$set(this, this$0, this$0);
	$ClientPropertyApplicator::init$(propertyList);
}

$AquaComboBoxUI* AquaComboBoxUI$12$7::convertJComponentToTarget($JComboBox* combo) {
	$var($ComboBoxUI, comboUI, $cast($ComboBoxUI, $nc(combo)->getUI()));
	if ($instanceOf($AquaComboBoxUI, comboUI)) {
		return $cast($AquaComboBoxUI, comboUI);
	}
	return nullptr;
}

$Object* AquaComboBoxUI$12$7::convertJComponentToTarget($JComponent* combo) {
	return $of(this->convertJComponentToTarget($cast($JComboBox, combo)));
}

AquaComboBoxUI$12$7::AquaComboBoxUI$12$7() {
}

$Class* AquaComboBoxUI$12$7::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$12$7, name, initialize, &_AquaComboBoxUI$12$7_ClassInfo_, allocate$AquaComboBoxUI$12$7);
	return class$;
}

$Class* AquaComboBoxUI$12$7::class$ = nullptr;

		} // laf
	} // apple
} // com