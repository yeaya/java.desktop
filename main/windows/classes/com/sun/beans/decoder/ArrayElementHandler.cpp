#include <com/sun/beans/decoder/ArrayElementHandler.h>

#include <com/sun/beans/decoder/NewElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <java/lang/reflect/Array.h>
#include <jcpp.h>

using $NewElementHandler = ::com::sun::beans::decoder::NewElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _ArrayElementHandler_FieldInfo_[] = {
	{"length", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(ArrayElementHandler, length)},
	{}
};

$MethodInfo _ArrayElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ArrayElementHandler::*)()>(&ArrayElementHandler::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getValueObject", "(Ljava/lang/Class;[Ljava/lang/Object;)Lcom/sun/beans/decoder/ValueObject;", "(Ljava/lang/Class<*>;[Ljava/lang/Object;)Lcom/sun/beans/decoder/ValueObject;", $PROTECTED},
	{"isArgument", "()Z", nullptr, $PROTECTED},
	{"startElement", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArrayElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.ArrayElementHandler",
	"com.sun.beans.decoder.NewElementHandler",
	nullptr,
	_ArrayElementHandler_FieldInfo_,
	_ArrayElementHandler_MethodInfo_
};

$Object* allocate$ArrayElementHandler($Class* clazz) {
	return $of($alloc(ArrayElementHandler));
}

void ArrayElementHandler::init$() {
	$NewElementHandler::init$();
}

void ArrayElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("length"_s)) {
		$set(this, length, $Integer::valueOf(value));
	} else {
		$NewElementHandler::addAttribute(name, value);
	}
}

void ArrayElementHandler::startElement() {
	if (this->length != nullptr) {
		getValueObject();
	}
}

bool ArrayElementHandler::isArgument() {
	return true;
}

$ValueObject* ArrayElementHandler::getValueObject($Class* type, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	if (type == nullptr) {
		type = $Object::class$;
	}
	if (this->length != nullptr) {
		return $ValueObjectImpl::create($($1Array::newInstance(type, $nc(this->length)->intValue())));
	}
	$var($Object, array, $1Array::newInstance(type, $nc(args)->length));
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		$1Array::set(array, i, args->get(i));
	}
	return $ValueObjectImpl::create(array);
}

ArrayElementHandler::ArrayElementHandler() {
}

$Class* ArrayElementHandler::load$($String* name, bool initialize) {
	$loadClass(ArrayElementHandler, name, initialize, &_ArrayElementHandler_ClassInfo_, allocate$ArrayElementHandler);
	return class$;
}

$Class* ArrayElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com