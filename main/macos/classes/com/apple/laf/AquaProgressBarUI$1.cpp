#include <com/apple/laf/AquaProgressBarUI$1.h>

#include <com/apple/laf/AquaProgressBarUI$1$1.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaProgressBarUI$1$1 = ::com::apple::laf::AquaProgressBarUI$1$1;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaProgressBarUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaProgressBarUI$1::*)()>(&AquaProgressBarUI$1::init$))},
	{"getInstance", "()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaProgressBarUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaProgressBarUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaProgressBarUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaProgressBarUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaProgressBarUI$1$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaProgressBarUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaProgressBarUI$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaProgressBarUI$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;>;",
	&_AquaProgressBarUI$1_EnclosingMethodInfo_,
	_AquaProgressBarUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaProgressBarUI"
};

$Object* allocate$AquaProgressBarUI$1($Class* clazz) {
	return $of($alloc(AquaProgressBarUI$1));
}

void AquaProgressBarUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaProgressBarUI$1::getInstance() {
	return $of($new($AquaProgressBarUI$1$1, this, $$new($AquaUtilControlSize$SizeVariant, 146, 20)));
}

AquaProgressBarUI$1::AquaProgressBarUI$1() {
}

$Class* AquaProgressBarUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaProgressBarUI$1, name, initialize, &_AquaProgressBarUI$1_ClassInfo_, allocate$AquaProgressBarUI$1);
	return class$;
}

$Class* AquaProgressBarUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com