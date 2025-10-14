#include <com/sun/beans/decoder/JavaElementHandler.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <java/beans/XMLDecoder.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $XMLDecoder = ::java::beans::XMLDecoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _JavaElementHandler_FieldInfo_[] = {
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(JavaElementHandler, type)},
	{"value", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $PRIVATE, $field(JavaElementHandler, value)},
	{}
};

$MethodInfo _JavaElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavaElementHandler::*)()>(&JavaElementHandler::init$))},
	{"addArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(JavaElementHandler::*)()>(&JavaElementHandler::getValue))},
	{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED},
	{"isArgument", "()Z", nullptr, $PROTECTED},
	{"isValid", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavaElementHandler::*)(Object$*)>(&JavaElementHandler::isValid))},
	{}
};

$ClassInfo _JavaElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.JavaElementHandler",
	"com.sun.beans.decoder.ElementHandler",
	nullptr,
	_JavaElementHandler_FieldInfo_,
	_JavaElementHandler_MethodInfo_
};

$Object* allocate$JavaElementHandler($Class* clazz) {
	return $of($alloc(JavaElementHandler));
}

void JavaElementHandler::init$() {
	$ElementHandler::init$();
}

void JavaElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("version"_s)) {
	} else if (name->equals("class"_s)) {
		$set(this, type, $nc($(getOwner()))->findClass(value));
	} else {
		$ElementHandler::addAttribute(name, value);
	}
}

void JavaElementHandler::addArgument(Object$* argument) {
	$nc($(getOwner()))->addObject(argument);
}

bool JavaElementHandler::isArgument() {
	return false;
}

$ValueObject* JavaElementHandler::getValueObject() {
	if (this->value == nullptr) {
		$set(this, value, $ValueObjectImpl::create($(getValue())));
	}
	return this->value;
}

$Object* JavaElementHandler::getValue() {
	$var($Object, owner, $nc($(getOwner()))->getOwner());
	if ((this->type == nullptr) || isValid(owner)) {
		return $of(owner);
	}
	if ($instanceOf($XMLDecoder, owner)) {
		$var($XMLDecoder, decoder, $cast($XMLDecoder, owner));
		$assign(owner, $nc(decoder)->getOwner());
		if (isValid(owner)) {
			return $of(owner);
		}
	}
	$throwNew($IllegalStateException, $$str({"Unexpected owner class: "_s, $($nc($of(owner))->getClass()->getName())}));
}

bool JavaElementHandler::isValid(Object$* owner) {
	return (owner == nullptr) || $nc(this->type)->isInstance(owner);
}

JavaElementHandler::JavaElementHandler() {
}

$Class* JavaElementHandler::load$($String* name, bool initialize) {
	$loadClass(JavaElementHandler, name, initialize, &_JavaElementHandler_ClassInfo_, allocate$JavaElementHandler);
	return class$;
}

$Class* JavaElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com