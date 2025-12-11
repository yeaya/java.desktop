#include <javax/print/attribute/standard/NumberUpSupported.h>

#include <javax/print/attribute/SetOfIntegerSyntax.h>
#include <jcpp.h>

using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SetOfIntegerSyntax = ::javax::print::attribute::SetOfIntegerSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _NumberUpSupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberUpSupported, serialVersionUID)},
	{}
};

$MethodInfo _NumberUpSupported_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "([[I)V", nullptr, $PUBLIC, $method(static_cast<void(NumberUpSupported::*)($intArray2*)>(&NumberUpSupported::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(NumberUpSupported::*)(int32_t)>(&NumberUpSupported::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(NumberUpSupported::*)(int32_t,int32_t)>(&NumberUpSupported::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NumberUpSupported_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.NumberUpSupported",
	"javax.print.attribute.SetOfIntegerSyntax",
	"javax.print.attribute.SupportedValuesAttribute",
	_NumberUpSupported_FieldInfo_,
	_NumberUpSupported_MethodInfo_
};

$Object* allocate$NumberUpSupported($Class* clazz) {
	return $of($alloc(NumberUpSupported));
}

int32_t NumberUpSupported::hashCode() {
	 return this->$SetOfIntegerSyntax::hashCode();
}

$String* NumberUpSupported::toString() {
	 return this->$SetOfIntegerSyntax::toString();
}

$Object* NumberUpSupported::clone() {
	 return this->$SetOfIntegerSyntax::clone();
}

void NumberUpSupported::finalize() {
	this->$SetOfIntegerSyntax::finalize();
}

void NumberUpSupported::init$($intArray2* members) {
	$SetOfIntegerSyntax::init$(members);
	if (members == nullptr) {
		$throwNew($NullPointerException, "members is null"_s);
	}
	$var($intArray2, myMembers, getMembers());
	int32_t n = $nc(myMembers)->length;
	if (n == 0) {
		$throwNew($IllegalArgumentException, "members is zero-length"_s);
	}
	int32_t i = 0;
	for (i = 0; i < n; ++i) {
		if ($nc(myMembers->get(i))->get(0) < 1) {
			$throwNew($IllegalArgumentException, "Number up value must be > 0"_s);
		}
	}
}

void NumberUpSupported::init$(int32_t member) {
	$SetOfIntegerSyntax::init$(member);
	if (member < 1) {
		$throwNew($IllegalArgumentException, "Number up value must be > 0"_s);
	}
}

void NumberUpSupported::init$(int32_t lowerBound, int32_t upperBound) {
	$SetOfIntegerSyntax::init$(lowerBound, upperBound);
	if (lowerBound > upperBound) {
		$throwNew($IllegalArgumentException, "Null range specified"_s);
	} else if (lowerBound < 1) {
		$throwNew($IllegalArgumentException, "Number up value must be > 0"_s);
	}
}

bool NumberUpSupported::equals(Object$* object) {
	return ($SetOfIntegerSyntax::equals(object) && $instanceOf(NumberUpSupported, object));
}

$Class* NumberUpSupported::getCategory() {
	return NumberUpSupported::class$;
}

$String* NumberUpSupported::getName() {
	return "number-up-supported"_s;
}

NumberUpSupported::NumberUpSupported() {
}

$Class* NumberUpSupported::load$($String* name, bool initialize) {
	$loadClass(NumberUpSupported, name, initialize, &_NumberUpSupported_ClassInfo_, allocate$NumberUpSupported);
	return class$;
}

$Class* NumberUpSupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax