#include <javax/print/PrintServiceLookup$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <javax/print/PrintServiceLookup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;

namespace javax {
	namespace print {

$MethodInfo _PrintServiceLookup$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PrintServiceLookup$1::*)()>(&PrintServiceLookup$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintServiceLookup$1_EnclosingMethodInfo_ = {
	"javax.print.PrintServiceLookup",
	"getAllLookupServices",
	"()Ljava/util/ArrayList;"
};

$InnerClassInfo _PrintServiceLookup$1_InnerClassesInfo_[] = {
	{"javax.print.PrintServiceLookup$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintServiceLookup$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.PrintServiceLookup$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	_PrintServiceLookup$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_PrintServiceLookup$1_EnclosingMethodInfo_,
	_PrintServiceLookup$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.PrintServiceLookup"
};

$Object* allocate$PrintServiceLookup$1($Class* clazz) {
	return $of($alloc(PrintServiceLookup$1));
}

void PrintServiceLookup$1::init$() {
}

$Object* PrintServiceLookup$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($PrintServiceLookup);
	$var($Iterator, iterator, $nc($($ServiceLoader::load($PrintServiceLookup::class$)))->iterator());
	$var($ArrayList, los, $PrintServiceLookup::getListOfLookupServices());
	while ($nc(iterator)->hasNext()) {
		try {
			$nc(los)->add($cast($PrintServiceLookup, $(iterator->next())));
		} catch ($ServiceConfigurationError&) {
			$var($ServiceConfigurationError, err, $catch());
			if ($System::getSecurityManager() != nullptr) {
				err->printStackTrace();
			} else {
				$throw(err);
			}
		}
	}
	return $of(nullptr);
}

PrintServiceLookup$1::PrintServiceLookup$1() {
}

$Class* PrintServiceLookup$1::load$($String* name, bool initialize) {
	$loadClass(PrintServiceLookup$1, name, initialize, &_PrintServiceLookup$1_ClassInfo_, allocate$PrintServiceLookup$1);
	return class$;
}

$Class* PrintServiceLookup$1::class$ = nullptr;

	} // print
} // javax