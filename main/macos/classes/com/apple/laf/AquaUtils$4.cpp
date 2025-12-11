#include <com/apple/laf/AquaUtils$4.h>

#include <com/apple/laf/AquaUtils$4$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $AquaUtils$4$1 = ::com::apple::laf::AquaUtils$4$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaUtils$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaUtils$4::*)()>(&AquaUtils$4::init$))},
	{"getInstance", "()Ljava/lang/reflect/Method;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaUtils$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaUtils",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaUtils$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaUtils$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaUtils$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaUtils$4",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaUtils$4_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/lang/reflect/Method;>;",
	&_AquaUtils$4_EnclosingMethodInfo_,
	_AquaUtils$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$4($Class* clazz) {
	return $of($alloc(AquaUtils$4));
}

void AquaUtils$4::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaUtils$4::getInstance() {
	$beforeCallerSensitive();
	return $of($cast($Method, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AquaUtils$4$1, this)))));
}

AquaUtils$4::AquaUtils$4() {
}

$Class* AquaUtils$4::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$4, name, initialize, &_AquaUtils$4_ClassInfo_, allocate$AquaUtils$4);
	return class$;
}

$Class* AquaUtils$4::class$ = nullptr;

		} // laf
	} // apple
} // com