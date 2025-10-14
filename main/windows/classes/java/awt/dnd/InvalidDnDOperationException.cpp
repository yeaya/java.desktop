#include <java/awt/dnd/InvalidDnDOperationException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _InvalidDnDOperationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidDnDOperationException, serialVersionUID)},
	{"dft_msg", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(InvalidDnDOperationException, dft_msg)},
	{}
};

$MethodInfo _InvalidDnDOperationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDnDOperationException::*)()>(&InvalidDnDOperationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDnDOperationException::*)($String*)>(&InvalidDnDOperationException::init$))},
	{}
};

$ClassInfo _InvalidDnDOperationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.InvalidDnDOperationException",
	"java.lang.IllegalStateException",
	nullptr,
	_InvalidDnDOperationException_FieldInfo_,
	_InvalidDnDOperationException_MethodInfo_
};

$Object* allocate$InvalidDnDOperationException($Class* clazz) {
	return $of($alloc(InvalidDnDOperationException));
}

$String* InvalidDnDOperationException::dft_msg = nullptr;

void InvalidDnDOperationException::init$() {
	$IllegalStateException::init$(InvalidDnDOperationException::dft_msg);
}

void InvalidDnDOperationException::init$($String* msg) {
	$IllegalStateException::init$(msg);
}

void clinit$InvalidDnDOperationException($Class* class$) {
	$assignStatic(InvalidDnDOperationException::dft_msg, "The operation requested cannot be performed by the DnD system since it is not in the appropriate state"_s);
}

InvalidDnDOperationException::InvalidDnDOperationException() {
}

InvalidDnDOperationException::InvalidDnDOperationException(const InvalidDnDOperationException& e) {
}

InvalidDnDOperationException InvalidDnDOperationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidDnDOperationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidDnDOperationException::load$($String* name, bool initialize) {
	$loadClass(InvalidDnDOperationException, name, initialize, &_InvalidDnDOperationException_ClassInfo_, clinit$InvalidDnDOperationException, allocate$InvalidDnDOperationException);
	return class$;
}

$Class* InvalidDnDOperationException::class$ = nullptr;

		} // dnd
	} // awt
} // java