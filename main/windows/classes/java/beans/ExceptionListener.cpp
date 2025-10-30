#include <java/beans/ExceptionListener.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _ExceptionListener_MethodInfo_[] = {
	{"exceptionThrown", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ExceptionListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.ExceptionListener",
	nullptr,
	nullptr,
	nullptr,
	_ExceptionListener_MethodInfo_
};

$Object* allocate$ExceptionListener($Class* clazz) {
	return $of($alloc(ExceptionListener));
}

$Class* ExceptionListener::load$($String* name, bool initialize) {
	$loadClass(ExceptionListener, name, initialize, &_ExceptionListener_ClassInfo_, allocate$ExceptionListener);
	return class$;
}

$Class* ExceptionListener::class$ = nullptr;

	} // beans
} // java