#include <sun/lwawt/macosx/CAccessibility$1.h>

#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CAccessibility$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CAccessibility$1::*)()>(&CAccessibility$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibility$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	nullptr,
	nullptr
};

$InnerClassInfo _CAccessibility$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_CAccessibility$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_CAccessibility$1_EnclosingMethodInfo_,
	_CAccessibility$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$1($Class* clazz) {
	return $of($alloc(CAccessibility$1));
}

void CAccessibility$1::init$() {
}

$Object* CAccessibility$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return $of(nullptr);
}

CAccessibility$1::CAccessibility$1() {
}

$Class* CAccessibility$1::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$1, name, initialize, &_CAccessibility$1_ClassInfo_, allocate$CAccessibility$1);
	return class$;
}

$Class* CAccessibility$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun