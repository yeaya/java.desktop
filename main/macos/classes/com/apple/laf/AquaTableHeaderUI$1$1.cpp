#include <com/apple/laf/AquaTableHeaderUI$1$1.h>

#include <com/apple/laf/AquaTableHeaderUI$1.h>
#include <com/apple/laf/AquaTableHeaderUI.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <javax/swing/table/JTableHeader.h>
#include <jcpp.h>

using $AquaTableHeaderUI = ::com::apple::laf::AquaTableHeaderUI;
using $AquaTableHeaderUI$1 = ::com::apple::laf::AquaTableHeaderUI$1;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTableHeader = ::javax::swing::table::JTableHeader;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTableHeaderUI$1$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTableHeaderUI$1;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTableHeaderUI$1$1, this$0)},
	{}
};

$MethodInfo _AquaTableHeaderUI$1$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTableHeaderUI$1;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AquaTableHeaderUI$1$1::*)($AquaTableHeaderUI$1*,$String*)>(&AquaTableHeaderUI$1$1::init$))},
	{"applyProperty", "(Ljavax/swing/table/JTableHeader;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _AquaTableHeaderUI$1$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTableHeaderUI$1",
	"getInstance",
	"()Lcom/apple/laf/ClientPropertyApplicator;"
};

$InnerClassInfo _AquaTableHeaderUI$1$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTableHeaderUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTableHeaderUI$1$1", nullptr, nullptr, 0},
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaTableHeaderUI$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTableHeaderUI$1$1",
	"com.apple.laf.ClientPropertyApplicator$Property",
	nullptr,
	_AquaTableHeaderUI$1$1_FieldInfo_,
	_AquaTableHeaderUI$1$1_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator$Property<Ljavax/swing/table/JTableHeader;>;",
	&_AquaTableHeaderUI$1$1_EnclosingMethodInfo_,
	_AquaTableHeaderUI$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTableHeaderUI"
};

$Object* allocate$AquaTableHeaderUI$1$1($Class* clazz) {
	return $of($alloc(AquaTableHeaderUI$1$1));
}

void AquaTableHeaderUI$1$1::init$($AquaTableHeaderUI$1* this$0, $String* name) {
	$set(this, this$0, this$0);
	$ClientPropertyApplicator$Property::init$(name);
}

void AquaTableHeaderUI$1$1::applyProperty($JTableHeader* target, Object$* value) {
	$AquaTableHeaderUI::tickle(target, value, $($nc(target)->getClientProperty("JTableHeader.sortDirection"_s)));
}

void AquaTableHeaderUI$1$1::applyProperty(Object$* target, Object$* value) {
	this->applyProperty($cast($JTableHeader, target), value);
}

AquaTableHeaderUI$1$1::AquaTableHeaderUI$1$1() {
}

$Class* AquaTableHeaderUI$1$1::load$($String* name, bool initialize) {
	$loadClass(AquaTableHeaderUI$1$1, name, initialize, &_AquaTableHeaderUI$1$1_ClassInfo_, allocate$AquaTableHeaderUI$1$1);
	return class$;
}

$Class* AquaTableHeaderUI$1$1::class$ = nullptr;

		} // laf
	} // apple
} // com