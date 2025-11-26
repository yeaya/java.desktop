#include <sun/print/CUPSPrinter$1.h>

#include <sun/print/CUPSPrinter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $CUPSPrinter = ::sun::print::CUPSPrinter;

namespace sun {
	namespace print {

$MethodInfo _CUPSPrinter$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CUPSPrinter$1::*)()>(&CUPSPrinter$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CUPSPrinter$1_EnclosingMethodInfo_ = {
	"sun.print.CUPSPrinter",
	nullptr,
	nullptr
};

$InnerClassInfo _CUPSPrinter$1_InnerClassesInfo_[] = {
	{"sun.print.CUPSPrinter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CUPSPrinter$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.CUPSPrinter$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_CUPSPrinter$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_CUPSPrinter$1_EnclosingMethodInfo_,
	_CUPSPrinter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.CUPSPrinter"
};

$Object* allocate$CUPSPrinter$1($Class* clazz) {
	return $of($alloc(CUPSPrinter$1));
}

void CUPSPrinter$1::init$() {
}

$Object* CUPSPrinter$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return $of(nullptr);
}

CUPSPrinter$1::CUPSPrinter$1() {
}

$Class* CUPSPrinter$1::load$($String* name, bool initialize) {
	$loadClass(CUPSPrinter$1, name, initialize, &_CUPSPrinter$1_ClassInfo_, allocate$CUPSPrinter$1);
	return class$;
}

$Class* CUPSPrinter$1::class$ = nullptr;

	} // print
} // sun