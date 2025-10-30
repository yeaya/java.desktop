#include <java/awt/AWTException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _AWTException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTException, serialVersionUID)},
	{}
};

$MethodInfo _AWTException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AWTException::*)($String*)>(&AWTException::init$))},
	{}
};

$ClassInfo _AWTException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.AWTException",
	"java.lang.Exception",
	nullptr,
	_AWTException_FieldInfo_,
	_AWTException_MethodInfo_
};

$Object* allocate$AWTException($Class* clazz) {
	return $of($alloc(AWTException));
}

void AWTException::init$($String* msg) {
	$Exception::init$(msg);
}

AWTException::AWTException() {
}

AWTException::AWTException(const AWTException& e) : $Exception(e) {
}

void AWTException::throw$() {
	throw *this;
}

$Class* AWTException::load$($String* name, bool initialize) {
	$loadClass(AWTException, name, initialize, &_AWTException_ClassInfo_, allocate$AWTException);
	return class$;
}

$Class* AWTException::class$ = nullptr;

	} // awt
} // java