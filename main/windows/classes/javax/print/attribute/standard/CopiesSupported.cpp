#include <javax/print/attribute/standard/CopiesSupported.h>

#include <javax/print/attribute/SetOfIntegerSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SetOfIntegerSyntax = ::javax::print::attribute::SetOfIntegerSyntax;
using $SupportedValuesAttribute = ::javax::print::attribute::SupportedValuesAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _CopiesSupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CopiesSupported, serialVersionUID)},
	{}
};

$MethodInfo _CopiesSupported_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CopiesSupported::*)(int32_t)>(&CopiesSupported::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(CopiesSupported::*)(int32_t,int32_t)>(&CopiesSupported::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CopiesSupported_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.CopiesSupported",
	"javax.print.attribute.SetOfIntegerSyntax",
	"javax.print.attribute.SupportedValuesAttribute",
	_CopiesSupported_FieldInfo_,
	_CopiesSupported_MethodInfo_
};

$Object* allocate$CopiesSupported($Class* clazz) {
	return $of($alloc(CopiesSupported));
}

int32_t CopiesSupported::hashCode() {
	 return this->$SetOfIntegerSyntax::hashCode();
}

$String* CopiesSupported::toString() {
	 return this->$SetOfIntegerSyntax::toString();
}

$Object* CopiesSupported::clone() {
	 return this->$SetOfIntegerSyntax::clone();
}

void CopiesSupported::finalize() {
	this->$SetOfIntegerSyntax::finalize();
}

void CopiesSupported::init$(int32_t member) {
	$SetOfIntegerSyntax::init$(member);
	if (member < 1) {
		$throwNew($IllegalArgumentException, "Copies value < 1 specified"_s);
	}
}

void CopiesSupported::init$(int32_t lowerBound, int32_t upperBound) {
	$SetOfIntegerSyntax::init$(lowerBound, upperBound);
	if (lowerBound > upperBound) {
		$throwNew($IllegalArgumentException, "Null range specified"_s);
	} else if (lowerBound < 1) {
		$throwNew($IllegalArgumentException, "Copies value < 1 specified"_s);
	}
}

bool CopiesSupported::equals(Object$* object) {
	return $SetOfIntegerSyntax::equals(object) && $instanceOf(CopiesSupported, object);
}

$Class* CopiesSupported::getCategory() {
	return CopiesSupported::class$;
}

$String* CopiesSupported::getName() {
	return "copies-supported"_s;
}

CopiesSupported::CopiesSupported() {
}

$Class* CopiesSupported::load$($String* name, bool initialize) {
	$loadClass(CopiesSupported, name, initialize, &_CopiesSupported_ClassInfo_, allocate$CopiesSupported);
	return class$;
}

$Class* CopiesSupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax