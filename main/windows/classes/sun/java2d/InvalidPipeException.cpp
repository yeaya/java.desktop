#include <sun/java2d/InvalidPipeException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

InvalidPipeException::InvalidPipeException(const InvalidPipeException& e) {
}

InvalidPipeException InvalidPipeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidPipeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidPipeException::load$($String* name, bool initialize) {
	$loadClass(InvalidPipeException, name, initialize, &_InvalidPipeException_ClassInfo_, allocate$InvalidPipeException);
	return class$;
}

$Class* InvalidPipeException::class$ = nullptr;

	} // java2d
} // sun