#include <com/apple/laf/AquaSliderUI$1$1.h>

#include <com/apple/laf/AquaSliderUI$1.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaSliderUI$1 = ::com::apple::laf::AquaSliderUI$1;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSliderUI$1$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaSliderUI$1;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSliderUI$1$1, this$0)},
	{}
};

$MethodInfo _AquaSliderUI$1$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaSliderUI$1;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, 0, $method(static_cast<void(AquaSliderUI$1$1::*)($AquaSliderUI$1*,$AquaUtilControlSize$SizeVariant*)>(&AquaSliderUI$1$1::init$))},
	{"deriveMini", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{"deriveSmall", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaSliderUI$1$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaSliderUI$1",
	"getInstance",
	"()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;"
};

$InnerClassInfo _AquaSliderUI$1$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSliderUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaSliderUI$1$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaSliderUI$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSliderUI$1$1",
	"com.apple.laf.AquaUtilControlSize$SizeDescriptor",
	nullptr,
	_AquaSliderUI$1$1_FieldInfo_,
	_AquaSliderUI$1$1_MethodInfo_,
	nullptr,
	&_AquaSliderUI$1$1_EnclosingMethodInfo_,
	_AquaSliderUI$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSliderUI"
};

$Object* allocate$AquaSliderUI$1$1($Class* clazz) {
	return $of($alloc(AquaSliderUI$1$1));
}

void AquaSliderUI$1$1::init$($AquaSliderUI$1* this$0, $AquaUtilControlSize$SizeVariant* variant) {
	$set(this, this$0, this$0);
	$AquaUtilControlSize$SizeDescriptor::init$(variant);
}

$AquaUtilControlSize$SizeVariant* AquaSliderUI$1$1::deriveSmall($AquaUtilControlSize$SizeVariant* v) {
	return $AquaUtilControlSize$SizeDescriptor::deriveSmall($($nc(v)->alterMinSize(-2, -2)));
}

$AquaUtilControlSize$SizeVariant* AquaSliderUI$1$1::deriveMini($AquaUtilControlSize$SizeVariant* v) {
	return $AquaUtilControlSize$SizeDescriptor::deriveMini($($nc(v)->alterMinSize(-2, -2)));
}

AquaSliderUI$1$1::AquaSliderUI$1$1() {
}

$Class* AquaSliderUI$1$1::load$($String* name, bool initialize) {
	$loadClass(AquaSliderUI$1$1, name, initialize, &_AquaSliderUI$1$1_ClassInfo_, allocate$AquaSliderUI$1$1);
	return class$;
}

$Class* AquaSliderUI$1$1::class$ = nullptr;

		} // laf
	} // apple
} // com