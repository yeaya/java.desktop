#include <java/awt/AWTError.h>

#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _AWTError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTError, serialVersionUID)},
	{}
};

$MethodInfo _AWTError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AWTError::*)($String*)>(&AWTError::init$))},
	{}
};

$ClassInfo _AWTError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.AWTError",
	"java.lang.Error",
	nullptr,
	_AWTError_FieldInfo_,
	_AWTError_MethodInfo_
};

$Object* allocate$AWTError($Class* clazz) {
	return $of($alloc(AWTError));
}

void AWTError::init$($String* msg) {
	$Error::init$(msg);
}

AWTError::AWTError() {
}

AWTError::AWTError(const AWTError& e) : $Error(e) {
}

void AWTError::throw$() {
	throw *this;
}

$Class* AWTError::load$($String* name, bool initialize) {
	$loadClass(AWTError, name, initialize, &_AWTError_ClassInfo_, allocate$AWTError);
	return class$;
}

$Class* AWTError::class$ = nullptr;

	} // awt
} // java