#include <java/beans/IntrospectionException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$FieldInfo _IntrospectionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntrospectionException, serialVersionUID)},
	{}
};

$MethodInfo _IntrospectionException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IntrospectionException::*)($String*)>(&IntrospectionException::init$))},
	{}
};

$ClassInfo _IntrospectionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.IntrospectionException",
	"java.lang.Exception",
	nullptr,
	_IntrospectionException_FieldInfo_,
	_IntrospectionException_MethodInfo_
};

$Object* allocate$IntrospectionException($Class* clazz) {
	return $of($alloc(IntrospectionException));
}

void IntrospectionException::init$($String* mess) {
	$Exception::init$(mess);
}

IntrospectionException::IntrospectionException() {
}

IntrospectionException::IntrospectionException(const IntrospectionException& e) : $Exception(e) {
}

void IntrospectionException::throw$() {
	throw *this;
}

$Class* IntrospectionException::load$($String* name, bool initialize) {
	$loadClass(IntrospectionException, name, initialize, &_IntrospectionException_ClassInfo_, allocate$IntrospectionException);
	return class$;
}

$Class* IntrospectionException::class$ = nullptr;

	} // beans
} // java