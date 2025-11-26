#include <com/sun/beans/finder/SignatureException.h>

#include <java/lang/NoSuchMethodException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _SignatureException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SignatureException, serialVersionUID)},
	{}
};

$MethodInfo _SignatureException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(SignatureException::*)($Throwable*)>(&SignatureException::init$))},
	{"toNoSuchMethodException", "(Ljava/lang/String;)Ljava/lang/NoSuchMethodException;", nullptr, 0, $method(static_cast<$NoSuchMethodException*(SignatureException::*)($String*)>(&SignatureException::toNoSuchMethodException))},
	{}
};

$ClassInfo _SignatureException_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.finder.SignatureException",
	"java.lang.RuntimeException",
	nullptr,
	_SignatureException_FieldInfo_,
	_SignatureException_MethodInfo_
};

$Object* allocate$SignatureException($Class* clazz) {
	return $of($alloc(SignatureException));
}

void SignatureException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

$NoSuchMethodException* SignatureException::toNoSuchMethodException($String* message) {
	$useLocalCurrentObjectStackCache();
	$var($Throwable, throwable, getCause());
	if ($instanceOf($NoSuchMethodException, throwable)) {
		return $cast($NoSuchMethodException, throwable);
	}
	$var($NoSuchMethodException, exception, $new($NoSuchMethodException, message));
	exception->initCause(throwable);
	return exception;
}

SignatureException::SignatureException() {
}

SignatureException::SignatureException(const SignatureException& e) : $RuntimeException(e) {
}

void SignatureException::throw$() {
	throw *this;
}

$Class* SignatureException::load$($String* name, bool initialize) {
	$loadClass(SignatureException, name, initialize, &_SignatureException_ClassInfo_, allocate$SignatureException);
	return class$;
}

$Class* SignatureException::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com