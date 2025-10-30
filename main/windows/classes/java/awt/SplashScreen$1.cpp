#include <java/awt/SplashScreen$1.h>

#include <java/awt/SplashScreen.h>
#include <jcpp.h>

using $SplashScreen = ::java::awt::SplashScreen;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {

$MethodInfo _SplashScreen$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SplashScreen$1::*)()>(&SplashScreen$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SplashScreen$1_EnclosingMethodInfo_ = {
	"java.awt.SplashScreen",
	"getSplashScreen",
	"()Ljava/awt/SplashScreen;"
};

$InnerClassInfo _SplashScreen$1_InnerClassesInfo_[] = {
	{"java.awt.SplashScreen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SplashScreen$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.SplashScreen$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SplashScreen$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SplashScreen$1_EnclosingMethodInfo_,
	_SplashScreen$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.SplashScreen"
};

$Object* allocate$SplashScreen$1($Class* clazz) {
	return $of($alloc(SplashScreen$1));
}

void SplashScreen$1::init$() {
}

$Object* SplashScreen$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("splashscreen"_s);
	return $of(nullptr);
}

SplashScreen$1::SplashScreen$1() {
}

$Class* SplashScreen$1::load$($String* name, bool initialize) {
	$loadClass(SplashScreen$1, name, initialize, &_SplashScreen$1_ClassInfo_, allocate$SplashScreen$1);
	return class$;
}

$Class* SplashScreen$1::class$ = nullptr;

	} // awt
} // java