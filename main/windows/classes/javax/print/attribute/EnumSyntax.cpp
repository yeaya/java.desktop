#include <javax/print/attribute/EnumSyntax.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _EnumSyntax_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EnumSyntax, serialVersionUID)},
	{"value", "I", nullptr, $PRIVATE, $field(EnumSyntax, value)},
	{}
};

$MethodInfo _EnumSyntax_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(EnumSyntax::*)(int32_t)>(&EnumSyntax::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getOffset", "()I", nullptr, $PROTECTED},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EnumSyntax_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.attribute.EnumSyntax",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_EnumSyntax_FieldInfo_,
	_EnumSyntax_MethodInfo_
};

$Object* allocate$EnumSyntax($Class* clazz) {
	return $of($alloc(EnumSyntax));
}

bool EnumSyntax::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

void EnumSyntax::finalize() {
	this->$Serializable::finalize();
}

void EnumSyntax::init$(int32_t value) {
	this->value = value;
}

int32_t EnumSyntax::getValue() {
	return this->value;
}

$Object* EnumSyntax::clone() {
	return $of(this);
}

int32_t EnumSyntax::hashCode() {
	return this->value;
}

$String* EnumSyntax::toString() {
	$var($StringArray, theTable, getStringTable());
	int32_t theIndex = this->value - getOffset();
	return theTable != nullptr && theIndex >= 0 && theIndex < theTable->length ? $nc(theTable)->get(theIndex) : $Integer::toString(this->value);
}

$Object* EnumSyntax::readResolve() {
	$var($EnumSyntaxArray, theTable, getEnumValueTable());
	if (theTable == nullptr) {
		$throwNew($InvalidObjectException, $$str({"Null enumeration value table for class "_s, $of(this)->getClass()}));
	}
	int32_t theOffset = getOffset();
	int32_t theIndex = this->value - theOffset;
	if (0 > theIndex || theIndex >= $nc(theTable)->length) {
		$throwNew($InvalidObjectException, $$str({"Integer value = "_s, $$str(this->value), " not in valid range "_s, $$str(theOffset), ".."_s, $$str((theOffset + theTable->length - 1)), "for class "_s, $of(this)->getClass()}));
	}
	$var(EnumSyntax, result, $nc(theTable)->get(theIndex));
	if (result == nullptr) {
		$throwNew($InvalidObjectException, $$str({"No enumeration value for integer value = "_s, $$str(this->value), "for class "_s, $of(this)->getClass()}));
	}
	return $of(result);
}

$StringArray* EnumSyntax::getStringTable() {
	return nullptr;
}

$EnumSyntaxArray* EnumSyntax::getEnumValueTable() {
	return nullptr;
}

int32_t EnumSyntax::getOffset() {
	return 0;
}

EnumSyntax::EnumSyntax() {
}

$Class* EnumSyntax::load$($String* name, bool initialize) {
	$loadClass(EnumSyntax, name, initialize, &_EnumSyntax_ClassInfo_, allocate$EnumSyntax);
	return class$;
}

$Class* EnumSyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax