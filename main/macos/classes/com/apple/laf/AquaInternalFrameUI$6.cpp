#include <com/apple/laf/AquaInternalFrameUI$6.h>

#include <com/apple/laf/AquaInternalFrameUI$6$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaInternalFrameUI$6$1 = ::com::apple::laf::AquaInternalFrameUI$6$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameUI$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$6::*)()>(&AquaInternalFrameUI$6::init$))},
	{"getInstance", "()Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$6_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameUI$6_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameUI$6$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameUI$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$6",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameUI$6_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;",
	&_AquaInternalFrameUI$6_EnclosingMethodInfo_,
	_AquaInternalFrameUI$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$6($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$6));
}

void AquaInternalFrameUI$6::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameUI$6::getInstance() {
	return $of($new($AquaInternalFrameUI$6$1, this, 11, 11));
}

AquaInternalFrameUI$6::AquaInternalFrameUI$6() {
}

$Class* AquaInternalFrameUI$6::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$6, name, initialize, &_AquaInternalFrameUI$6_ClassInfo_, allocate$AquaInternalFrameUI$6);
	return class$;
}

$Class* AquaInternalFrameUI$6::class$ = nullptr;

		} // laf
	} // apple
} // com