#include <sun/java2d/Disposer$1.h>

#include <sun/java2d/Disposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Disposer = ::sun::java2d::Disposer;

namespace sun {
	namespace java2d {

$MethodInfo _Disposer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Disposer$1::*)()>(&Disposer$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Disposer$1_EnclosingMethodInfo_ = {
	"sun.java2d.Disposer",
	nullptr,
	nullptr
};

$InnerClassInfo _Disposer$1_InnerClassesInfo_[] = {
	{"sun.java2d.Disposer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Disposer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.Disposer$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Disposer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Disposer$1_EnclosingMethodInfo_,
	_Disposer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.Disposer"
};

$Object* allocate$Disposer$1($Class* clazz) {
	return $of($alloc(Disposer$1));
}

void Disposer$1::init$() {
}

$Object* Disposer$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return $of(nullptr);
}

Disposer$1::Disposer$1() {
}

$Class* Disposer$1::load$($String* name, bool initialize) {
	$loadClass(Disposer$1, name, initialize, &_Disposer$1_ClassInfo_, allocate$Disposer$1);
	return class$;
}

$Class* Disposer$1::class$ = nullptr;

	} // java2d
} // sun