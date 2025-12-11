#include <com/apple/laf/AquaNativeResources$1.h>

#include <com/apple/laf/AquaNativeResources.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaNativeResources$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaNativeResources$1::*)()>(&AquaNativeResources$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaNativeResources$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaNativeResources",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaNativeResources$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaNativeResources$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaNativeResources$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaNativeResources$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_AquaNativeResources$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_AquaNativeResources$1_EnclosingMethodInfo_,
	_AquaNativeResources$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaNativeResources"
};

$Object* allocate$AquaNativeResources$1($Class* clazz) {
	return $of($alloc(AquaNativeResources$1));
}

void AquaNativeResources$1::init$() {
}

$Object* AquaNativeResources$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("osxui"_s);
	return $of(nullptr);
}

AquaNativeResources$1::AquaNativeResources$1() {
}

$Class* AquaNativeResources$1::load$($String* name, bool initialize) {
	$loadClass(AquaNativeResources$1, name, initialize, &_AquaNativeResources$1_ClassInfo_, allocate$AquaNativeResources$1);
	return class$;
}

$Class* AquaNativeResources$1::class$ = nullptr;

		} // laf
	} // apple
} // com