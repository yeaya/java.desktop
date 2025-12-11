#include <java/awt/Toolkit$2.h>

#include <java/awt/Toolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Toolkit$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Toolkit$2::*)()>(&Toolkit$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Toolkit$2_EnclosingMethodInfo_ = {
	"java.awt.Toolkit",
	"loadLibraries",
	"()V"
};

$InnerClassInfo _Toolkit$2_InnerClassesInfo_[] = {
	{"java.awt.Toolkit$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Toolkit$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Toolkit$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Toolkit$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Toolkit$2_EnclosingMethodInfo_,
	_Toolkit$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Toolkit"
};

$Object* allocate$Toolkit$2($Class* clazz) {
	return $of($alloc(Toolkit$2));
}

void Toolkit$2::init$() {
}

$Object* Toolkit$2::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return $of(nullptr);
}

Toolkit$2::Toolkit$2() {
}

$Class* Toolkit$2::load$($String* name, bool initialize) {
	$loadClass(Toolkit$2, name, initialize, &_Toolkit$2_ClassInfo_, allocate$Toolkit$2);
	return class$;
}

$Class* Toolkit$2::class$ = nullptr;

	} // awt
} // java