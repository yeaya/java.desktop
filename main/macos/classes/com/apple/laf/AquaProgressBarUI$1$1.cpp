#include <com/apple/laf/AquaProgressBarUI$1$1.h>

#include <com/apple/laf/AquaProgressBarUI$1.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaProgressBarUI$1 = ::com::apple::laf::AquaProgressBarUI$1;
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

$FieldInfo _AquaProgressBarUI$1$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaProgressBarUI$1;", nullptr, $FINAL | $SYNTHETIC, $field(AquaProgressBarUI$1$1, this$0)},
	{}
};

$MethodInfo _AquaProgressBarUI$1$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaProgressBarUI$1;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, 0, $method(static_cast<void(AquaProgressBarUI$1$1::*)($AquaProgressBarUI$1*,$AquaUtilControlSize$SizeVariant*)>(&AquaProgressBarUI$1$1::init$))},
	{"deriveSmall", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaProgressBarUI$1$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaProgressBarUI$1",
	"getInstance",
	"()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;"
};

$InnerClassInfo _AquaProgressBarUI$1$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaProgressBarUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaProgressBarUI$1$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaProgressBarUI$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaProgressBarUI$1$1",
	"com.apple.laf.AquaUtilControlSize$SizeDescriptor",
	nullptr,
	_AquaProgressBarUI$1$1_FieldInfo_,
	_AquaProgressBarUI$1$1_MethodInfo_,
	nullptr,
	&_AquaProgressBarUI$1$1_EnclosingMethodInfo_,
	_AquaProgressBarUI$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaProgressBarUI"
};

$Object* allocate$AquaProgressBarUI$1$1($Class* clazz) {
	return $of($alloc(AquaProgressBarUI$1$1));
}

void AquaProgressBarUI$1$1::init$($AquaProgressBarUI$1* this$0, $AquaUtilControlSize$SizeVariant* variant) {
	$set(this, this$0, this$0);
	$AquaUtilControlSize$SizeDescriptor::init$(variant);
}

$AquaUtilControlSize$SizeVariant* AquaProgressBarUI$1$1::deriveSmall($AquaUtilControlSize$SizeVariant* v) {
	$nc(v)->alterMinSize(0, -6);
	return $AquaUtilControlSize$SizeDescriptor::deriveSmall(v);
}

AquaProgressBarUI$1$1::AquaProgressBarUI$1$1() {
}

$Class* AquaProgressBarUI$1$1::load$($String* name, bool initialize) {
	$loadClass(AquaProgressBarUI$1$1, name, initialize, &_AquaProgressBarUI$1$1_ClassInfo_, allocate$AquaProgressBarUI$1$1);
	return class$;
}

$Class* AquaProgressBarUI$1$1::class$ = nullptr;

		} // laf
	} // apple
} // com