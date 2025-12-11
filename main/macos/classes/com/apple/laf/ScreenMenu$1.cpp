#include <com/apple/laf/ScreenMenu$1.h>

#include <com/apple/laf/ScreenMenu.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _ScreenMenu$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ScreenMenu$1::*)()>(&ScreenMenu$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScreenMenu$1_EnclosingMethodInfo_ = {
	"com.apple.laf.ScreenMenu",
	nullptr,
	nullptr
};

$InnerClassInfo _ScreenMenu$1_InnerClassesInfo_[] = {
	{"com.apple.laf.ScreenMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScreenMenu$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.ScreenMenu$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ScreenMenu$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_ScreenMenu$1_EnclosingMethodInfo_,
	_ScreenMenu$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.ScreenMenu"
};

$Object* allocate$ScreenMenu$1($Class* clazz) {
	return $of($alloc(ScreenMenu$1));
}

void ScreenMenu$1::init$() {
}

$Object* ScreenMenu$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return $of(nullptr);
}

ScreenMenu$1::ScreenMenu$1() {
}

$Class* ScreenMenu$1::load$($String* name, bool initialize) {
	$loadClass(ScreenMenu$1, name, initialize, &_ScreenMenu$1_ClassInfo_, allocate$ScreenMenu$1);
	return class$;
}

$Class* ScreenMenu$1::class$ = nullptr;

		} // laf
	} // apple
} // com