#include <com/sun/beans/decoder/ObjectElementHandler.h>

#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/FieldElementHandler.h>
#include <com/sun/beans/decoder/NewElementHandler.h>
#include <com/sun/beans/decoder/PropertyElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <java/beans/Expression.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH
#undef GETTER
#undef SETTER

using $FieldElementHandler = ::com::sun::beans::decoder::FieldElementHandler;
using $NewElementHandler = ::com::sun::beans::decoder::NewElementHandler;
using $PropertyElementHandler = ::com::sun::beans::decoder::PropertyElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $Expression = ::java::beans::Expression;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _ObjectElementHandler_FieldInfo_[] = {
	{"idref", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ObjectElementHandler, idref)},
	{"field", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ObjectElementHandler, field)},
	{"index", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(ObjectElementHandler, index)},
	{"property", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ObjectElementHandler, property)},
	{"method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ObjectElementHandler, method)},
	{}
};

$MethodInfo _ObjectElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ObjectElementHandler::*)()>(&ObjectElementHandler::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"getValueObject", "(Ljava/lang/Class;[Ljava/lang/Object;)Lcom/sun/beans/decoder/ValueObject;", "(Ljava/lang/Class<*>;[Ljava/lang/Object;)Lcom/sun/beans/decoder/ValueObject;", $PROTECTED | $FINAL, nullptr, "java.lang.Exception"},
	{"isArgument", "()Z", nullptr, $PROTECTED},
	{"startElement", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _ObjectElementHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.beans.decoder.ObjectElementHandler",
	"com.sun.beans.decoder.NewElementHandler",
	nullptr,
	_ObjectElementHandler_FieldInfo_,
	_ObjectElementHandler_MethodInfo_
};

$Object* allocate$ObjectElementHandler($Class* clazz) {
	return $of($alloc(ObjectElementHandler));
}

void ObjectElementHandler::init$() {
	$NewElementHandler::init$();
}

void ObjectElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("idref"_s)) {
		$set(this, idref, value);
	} else if (name->equals("field"_s)) {
		$set(this, field, value);
	} else if (name->equals("index"_s)) {
		$set(this, index, $Integer::valueOf(value));
		addArgument(this->index);
	} else if (name->equals("property"_s)) {
		$set(this, property, value);
	} else if (name->equals("method"_s)) {
		$set(this, method, value);
	} else {
		$NewElementHandler::addAttribute(name, value);
	}
}

void ObjectElementHandler::startElement() {
	if ((this->field != nullptr) || (this->idref != nullptr)) {
		getValueObject();
	}
}

bool ObjectElementHandler::isArgument() {
	return true;
}

$ValueObject* ObjectElementHandler::getValueObject($Class* type, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	if (this->field != nullptr) {
		return $ValueObjectImpl::create($($FieldElementHandler::getFieldValue($(getContextBean()), this->field)));
	}
	if (this->idref != nullptr) {
		return $ValueObjectImpl::create($(getVariable(this->idref)));
	}
	$var($Object, bean, getContextBean());
	$var($String, name, nullptr);
	if (this->index != nullptr) {
		$init($PropertyElementHandler);
		$assign(name, ($nc(args)->length == 2) ? $PropertyElementHandler::SETTER : $PropertyElementHandler::GETTER);
	} else if (this->property != nullptr) {
		$init($PropertyElementHandler);
		$assign(name, ($nc(args)->length == 1) ? $PropertyElementHandler::SETTER : $PropertyElementHandler::GETTER);
		if (0 < $nc(this->property)->length()) {
			$init($Locale);
			$var($String, var$0, $($($nc(this->property)->substring(0, 1))->toUpperCase($Locale::ENGLISH)));
			$plusAssign(name, $$concat(var$0, $($nc(this->property)->substring(1))));
		}
	} else {
		$assign(name, (this->method != nullptr) && (0 < $nc(this->method)->length()) ? this->method : "new"_s);
	}
	$var($Expression, expression, $new($Expression, bean, name, args));
	return $ValueObjectImpl::create($(expression->getValue()));
}

ObjectElementHandler::ObjectElementHandler() {
}

$Class* ObjectElementHandler::load$($String* name, bool initialize) {
	$loadClass(ObjectElementHandler, name, initialize, &_ObjectElementHandler_ClassInfo_, allocate$ObjectElementHandler);
	return class$;
}

$Class* ObjectElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com