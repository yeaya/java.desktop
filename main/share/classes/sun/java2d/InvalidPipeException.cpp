#include <sun/java2d/InvalidPipeException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$MethodInfo _InvalidPipeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidPipeException::*)()>(&InvalidPipeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidPipeException::*)($String*)>(&InvalidPipeException::init$))},
	{}
};

$ClassInfo _InvalidPipeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.InvalidPipeException",
	"java.lang.IllegalStateException",
	nullptr,
	nullptr,
	_InvalidPipeException_MethodInfo_
};

$Object* allocate$InvalidPipeException($Class* clazz) {
	return $of($alloc(InvalidPipeException));
}

void InvalidPipeException::init$() {
	$IllegalStateException::init$();
}

void InvalidPipeException::init$($String* s) {
	$IllegalStateException::init$(s);
}

InvalidPipeException::InvalidPipeException() {
}

InvalidPipeException::InvalidPipeException(const InvalidPipeException& e) : $IllegalStateException(e) {
}

void InvalidPipeException::throw$() {
	throw *this;
}

$Class* InvalidPipeException::load$($String* name, bool initialize) {
	$loadClass(InvalidPipeException, name, initialize, &_InvalidPipeException_ClassInfo_, allocate$InvalidPipeException);
	return class$;
}

$Class* InvalidPipeException::class$ = nullptr;

	} // java2d
} // sun