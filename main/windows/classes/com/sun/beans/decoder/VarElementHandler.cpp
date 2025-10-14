#include <com/sun/beans/decoder/VarElementHandler.h>

#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _VarElementHandler_FieldInfo_[] = {
	{"value", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $PRIVATE, $field(VarElementHandler, value)},
	{}
};

$MethodInfo _VarElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarElementHandler::*)()>(&VarElementHandler::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _VarElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.VarElementHandler",
	"com.sun.beans.decoder.ElementHandler",
	nullptr,
	_VarElementHandler_FieldInfo_,
	_VarElementHandler_MethodInfo_
};

$Object* allocate$VarElementHandler($Class* clazz) {
	return $of($alloc(VarElementHandler));
}

void VarElementHandler::init$() {
	$ElementHandler::init$();
}

void VarElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("idref"_s)) {
		$set(this, value, $ValueObjectImpl::create($(getVariable(value))));
	} else {
		$ElementHandler::addAttribute(name, value);
	}
}

$ValueObject* VarElementHandler::getValueObject() {
	if (this->value == nullptr) {
		$throwNew($IllegalArgumentException, "Variable name is not set"_s);
	}
	return this->value;
}

VarElementHandler::VarElementHandler() {
}

$Class* VarElementHandler::load$($String* name, bool initialize) {
	$loadClass(VarElementHandler, name, initialize, &_VarElementHandler_ClassInfo_, allocate$VarElementHandler);
	return class$;
}

$Class* VarElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com