#include <com/sun/beans/decoder/AccessorElementHandler.h>

#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef VOID

using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _AccessorElementHandler_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AccessorElementHandler, name)},
	{"value", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $PRIVATE, $field(AccessorElementHandler, value)},
	{}
};

$MethodInfo _AccessorElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AccessorElementHandler::*)()>(&AccessorElementHandler::init$))},
	{"addArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $FINAL},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT},
	{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED | $FINAL},
	{"setValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _AccessorElementHandler_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.beans.decoder.AccessorElementHandler",
	"com.sun.beans.decoder.ElementHandler",
	nullptr,
	_AccessorElementHandler_FieldInfo_,
	_AccessorElementHandler_MethodInfo_
};

$Object* allocate$AccessorElementHandler($Class* clazz) {
	return $of($alloc(AccessorElementHandler));
}

void AccessorElementHandler::init$() {
	$ElementHandler::init$();
}

void AccessorElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("name"_s)) {
		$set(this, name, value);
	} else {
		$ElementHandler::addAttribute(name, value);
	}
}

void AccessorElementHandler::addArgument(Object$* argument) {
	if (this->value != nullptr) {
		$throwNew($IllegalStateException, "Could not add argument to evaluated element"_s);
	}
	setValue(this->name, argument);
	$init($ValueObjectImpl);
	$set(this, value, $ValueObjectImpl::VOID);
}

$ValueObject* AccessorElementHandler::getValueObject() {
	if (this->value == nullptr) {
		$set(this, value, $ValueObjectImpl::create($(getValue(this->name))));
	}
	return this->value;
}

AccessorElementHandler::AccessorElementHandler() {
}

$Class* AccessorElementHandler::load$($String* name, bool initialize) {
	$loadClass(AccessorElementHandler, name, initialize, &_AccessorElementHandler_ClassInfo_, allocate$AccessorElementHandler);
	return class$;
}

$Class* AccessorElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com