#include <com/apple/laf/AquaUtils$3.h>

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaUtils$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaUtils$3::*)()>(&AquaUtils$3::init$))},
	{"getInstance", "()Ljava/lang/Boolean;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaUtils$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaUtils",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaUtils$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaUtils$3",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaUtils$3_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/lang/Boolean;>;",
	&_AquaUtils$3_EnclosingMethodInfo_,
	_AquaUtils$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$3($Class* clazz) {
	return $of($alloc(AquaUtils$3));
}

void AquaUtils$3::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaUtils$3::getInstance() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, sizeProperty, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.enableAnimations"_s)))));
	return $of($Boolean::valueOf(!"false"_s->equals(sizeProperty)));
}

AquaUtils$3::AquaUtils$3() {
}

$Class* AquaUtils$3::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$3, name, initialize, &_AquaUtils$3_ClassInfo_, allocate$AquaUtils$3);
	return class$;
}

$Class* AquaUtils$3::class$ = nullptr;

		} // laf
	} // apple
} // com