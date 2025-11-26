#include <javax/print/attribute/standard/JobImpressionsSupported.h>

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

$FieldInfo _JobImpressionsSupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobImpressionsSupported, serialVersionUID)},
	{}
};

$MethodInfo _JobImpressionsSupported_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(JobImpressionsSupported::*)(int32_t,int32_t)>(&JobImpressionsSupported::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobImpressionsSupported_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobImpressionsSupported",
	"javax.print.attribute.SetOfIntegerSyntax",
	"javax.print.attribute.SupportedValuesAttribute",
	_JobImpressionsSupported_FieldInfo_,
	_JobImpressionsSupported_MethodInfo_
};

$Object* allocate$JobImpressionsSupported($Class* clazz) {
	return $of($alloc(JobImpressionsSupported));
}

int32_t JobImpressionsSupported::hashCode() {
	 return this->$SetOfIntegerSyntax::hashCode();
}

$String* JobImpressionsSupported::toString() {
	 return this->$SetOfIntegerSyntax::toString();
}

$Object* JobImpressionsSupported::clone() {
	 return this->$SetOfIntegerSyntax::clone();
}

void JobImpressionsSupported::finalize() {
	this->$SetOfIntegerSyntax::finalize();
}

void JobImpressionsSupported::init$(int32_t lowerBound, int32_t upperBound) {
	$SetOfIntegerSyntax::init$(lowerBound, upperBound);
	if (lowerBound > upperBound) {
		$throwNew($IllegalArgumentException, "Null range specified"_s);
	} else if (lowerBound < 0) {
		$throwNew($IllegalArgumentException, "Job K octets value < 0 specified"_s);
	}
}

bool JobImpressionsSupported::equals(Object$* object) {
	return ($SetOfIntegerSyntax::equals(object) && $instanceOf(JobImpressionsSupported, object));
}

$Class* JobImpressionsSupported::getCategory() {
	return JobImpressionsSupported::class$;
}

$String* JobImpressionsSupported::getName() {
	return "job-impressions-supported"_s;
}

JobImpressionsSupported::JobImpressionsSupported() {
}

$Class* JobImpressionsSupported::load$($String* name, bool initialize) {
	$loadClass(JobImpressionsSupported, name, initialize, &_JobImpressionsSupported_ClassInfo_, allocate$JobImpressionsSupported);
	return class$;
}

$Class* JobImpressionsSupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax