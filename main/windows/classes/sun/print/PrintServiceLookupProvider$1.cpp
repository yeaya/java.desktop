#include <sun/print/PrintServiceLookupProvider$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;

namespace sun {
	namespace print {

$MethodInfo _PrintServiceLookupProvider$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PrintServiceLookupProvider$1::*)()>(&PrintServiceLookupProvider$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintServiceLookupProvider$1_EnclosingMethodInfo_ = {
	"sun.print.PrintServiceLookupProvider",
	nullptr,
	nullptr
};

$InnerClassInfo _PrintServiceLookupProvider$1_InnerClassesInfo_[] = {
	{"sun.print.PrintServiceLookupProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintServiceLookupProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PrintServiceLookupProvider$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_PrintServiceLookupProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_PrintServiceLookupProvider$1_EnclosingMethodInfo_,
	_PrintServiceLookupProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PrintServiceLookupProvider"
};

$Object* allocate$PrintServiceLookupProvider$1($Class* clazz) {
	return $of($alloc(PrintServiceLookupProvider$1));
}

void PrintServiceLookupProvider$1::init$() {
}

$Object* PrintServiceLookupProvider$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return $of(nullptr);
}

PrintServiceLookupProvider$1::PrintServiceLookupProvider$1() {
}

$Class* PrintServiceLookupProvider$1::load$($String* name, bool initialize) {
	$loadClass(PrintServiceLookupProvider$1, name, initialize, &_PrintServiceLookupProvider$1_ClassInfo_, allocate$PrintServiceLookupProvider$1);
	return class$;
}

$Class* PrintServiceLookupProvider$1::class$ = nullptr;

	} // print
} // sun