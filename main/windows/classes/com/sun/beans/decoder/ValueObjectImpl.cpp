#include <com/sun/beans/decoder/ValueObjectImpl.h>

#include <com/sun/beans/decoder/ValueObject.h>
#include <jcpp.h>

#undef NULL
#undef VOID

using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _ValueObjectImpl_FieldInfo_[] = {
	{"NULL", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $STATIC | $FINAL, $staticField(ValueObjectImpl, NULL)},
	{"VOID", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $STATIC | $FINAL, $staticField(ValueObjectImpl, VOID)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ValueObjectImpl, value)},
	{"isVoid", "Z", nullptr, $PRIVATE, $field(ValueObjectImpl, isVoid$)},
	{}
};

$MethodInfo _ValueObjectImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ValueObjectImpl::*)()>(&ValueObjectImpl::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(ValueObjectImpl::*)(Object$*)>(&ValueObjectImpl::init$))},
	{"create", "(Ljava/lang/Object;)Lcom/sun/beans/decoder/ValueObject;", nullptr, $STATIC, $method(static_cast<$ValueObject*(*)(Object$*)>(&ValueObjectImpl::create))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isVoid", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ValueObjectImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.ValueObjectImpl",
	"java.lang.Object",
	"com.sun.beans.decoder.ValueObject",
	_ValueObjectImpl_FieldInfo_,
	_ValueObjectImpl_MethodInfo_
};

$Object* allocate$ValueObjectImpl($Class* clazz) {
	return $of($alloc(ValueObjectImpl));
}

$ValueObject* ValueObjectImpl::NULL = nullptr;
$ValueObject* ValueObjectImpl::VOID = nullptr;

$ValueObject* ValueObjectImpl::create(Object$* value) {
	$init(ValueObjectImpl);
	return (value != nullptr) ? static_cast<$ValueObject*>($new(ValueObjectImpl, value)) : ValueObjectImpl::NULL;
}

void ValueObjectImpl::init$() {
	this->isVoid$ = true;
}

void ValueObjectImpl::init$(Object$* value) {
	$set(this, value, value);
}

$Object* ValueObjectImpl::getValue() {
	return $of(this->value);
}

bool ValueObjectImpl::isVoid() {
	return this->isVoid$;
}

void clinit$ValueObjectImpl($Class* class$) {
	$assignStatic(ValueObjectImpl::NULL, $new(ValueObjectImpl, nullptr));
	$assignStatic(ValueObjectImpl::VOID, $new(ValueObjectImpl));
}

ValueObjectImpl::ValueObjectImpl() {
}

$Class* ValueObjectImpl::load$($String* name, bool initialize) {
	$loadClass(ValueObjectImpl, name, initialize, &_ValueObjectImpl_ClassInfo_, clinit$ValueObjectImpl, allocate$ValueObjectImpl);
	return class$;
}

$Class* ValueObjectImpl::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com