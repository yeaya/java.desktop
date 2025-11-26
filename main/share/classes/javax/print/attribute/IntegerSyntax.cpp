#include <javax/print/attribute/IntegerSyntax.h>

#include <java/io/Serializable.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _IntegerSyntax_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerSyntax, serialVersionUID)},
	{"value", "I", nullptr, $PRIVATE, $field(IntegerSyntax, value)},
	{}
};

$MethodInfo _IntegerSyntax_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(IntegerSyntax::*)(int32_t)>(&IntegerSyntax::init$))},
	{"<init>", "(III)V", nullptr, $PROTECTED, $method(static_cast<void(IntegerSyntax::*)(int32_t,int32_t,int32_t)>(&IntegerSyntax::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntegerSyntax_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.attribute.IntegerSyntax",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_IntegerSyntax_FieldInfo_,
	_IntegerSyntax_MethodInfo_
};

$Object* allocate$IntegerSyntax($Class* clazz) {
	return $of($alloc(IntegerSyntax));
}

$Object* IntegerSyntax::clone() {
	 return this->$Serializable::clone();
}

void IntegerSyntax::finalize() {
	this->$Serializable::finalize();
}

void IntegerSyntax::init$(int32_t value) {
	this->value = value;
}

void IntegerSyntax::init$(int32_t value, int32_t lowerBound, int32_t upperBound) {
	$useLocalCurrentObjectStackCache();
	if (lowerBound > value || value > upperBound) {
		$throwNew($IllegalArgumentException, $$str({"Value "_s, $$str(value), " not in range "_s, $$str(lowerBound), ".."_s, $$str(upperBound)}));
	}
	this->value = value;
}

int32_t IntegerSyntax::getValue() {
	return this->value;
}

bool IntegerSyntax::equals(Object$* object) {
	return (object != nullptr && $instanceOf(IntegerSyntax, object) && this->value == $nc(($cast(IntegerSyntax, object)))->value);
}

int32_t IntegerSyntax::hashCode() {
	return this->value;
}

$String* IntegerSyntax::toString() {
	return $str({""_s, $$str(this->value)});
}

IntegerSyntax::IntegerSyntax() {
}

$Class* IntegerSyntax::load$($String* name, bool initialize) {
	$loadClass(IntegerSyntax, name, initialize, &_IntegerSyntax_ClassInfo_, allocate$IntegerSyntax);
	return class$;
}

$Class* IntegerSyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax