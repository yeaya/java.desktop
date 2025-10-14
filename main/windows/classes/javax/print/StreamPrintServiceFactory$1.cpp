#include <javax/print/StreamPrintServiceFactory$1.h>

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
#include <javax/print/StreamPrintServiceFactory.h>
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
using $StreamPrintServiceFactory = ::javax::print::StreamPrintServiceFactory;

namespace javax {
	namespace print {

$MethodInfo _StreamPrintServiceFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StreamPrintServiceFactory$1::*)()>(&StreamPrintServiceFactory$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StreamPrintServiceFactory$1_EnclosingMethodInfo_ = {
	"javax.print.StreamPrintServiceFactory",
	"getAllFactories",
	"()Ljava/util/ArrayList;"
};

$InnerClassInfo _StreamPrintServiceFactory$1_InnerClassesInfo_[] = {
	{"javax.print.StreamPrintServiceFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StreamPrintServiceFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.StreamPrintServiceFactory$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	_StreamPrintServiceFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_StreamPrintServiceFactory$1_EnclosingMethodInfo_,
	_StreamPrintServiceFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.StreamPrintServiceFactory"
};

$Object* allocate$StreamPrintServiceFactory$1($Class* clazz) {
	return $of($alloc(StreamPrintServiceFactory$1));
}

void StreamPrintServiceFactory$1::init$() {
}

$Object* StreamPrintServiceFactory$1::run() {
	$beforeCallerSensitive();
	$load($StreamPrintServiceFactory);
	$var($Iterator, iterator, $nc($($ServiceLoader::load($StreamPrintServiceFactory::class$)))->iterator());
	$var($ArrayList, lof, $StreamPrintServiceFactory::getListOfFactories());
	while ($nc(iterator)->hasNext()) {
		try {
			$nc(lof)->add($cast($StreamPrintServiceFactory, $(iterator->next())));
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

StreamPrintServiceFactory$1::StreamPrintServiceFactory$1() {
}

$Class* StreamPrintServiceFactory$1::load$($String* name, bool initialize) {
	$loadClass(StreamPrintServiceFactory$1, name, initialize, &_StreamPrintServiceFactory$1_ClassInfo_, allocate$StreamPrintServiceFactory$1);
	return class$;
}

$Class* StreamPrintServiceFactory$1::class$ = nullptr;

	} // print
} // javax