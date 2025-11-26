#include <javax/print/attribute/standard/JobKOctetsSupported.h>

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

$FieldInfo _JobKOctetsSupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobKOctetsSupported, serialVersionUID)},
	{}
};

$MethodInfo _JobKOctetsSupported_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(JobKOctetsSupported::*)(int32_t,int32_t)>(&JobKOctetsSupported::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobKOctetsSupported_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobKOctetsSupported",
	"javax.print.attribute.SetOfIntegerSyntax",
	"javax.print.attribute.SupportedValuesAttribute",
	_JobKOctetsSupported_FieldInfo_,
	_JobKOctetsSupported_MethodInfo_
};

$Object* allocate$JobKOctetsSupported($Class* clazz) {
	return $of($alloc(JobKOctetsSupported));
}

int32_t JobKOctetsSupported::hashCode() {
	 return this->$SetOfIntegerSyntax::hashCode();
}

$String* JobKOctetsSupported::toString() {
	 return this->$SetOfIntegerSyntax::toString();
}

$Object* JobKOctetsSupported::clone() {
	 return this->$SetOfIntegerSyntax::clone();
}

void JobKOctetsSupported::finalize() {
	this->$SetOfIntegerSyntax::finalize();
}

void JobKOctetsSupported::init$(int32_t lowerBound, int32_t upperBound) {
	$SetOfIntegerSyntax::init$(lowerBound, upperBound);
	if (lowerBound > upperBound) {
		$throwNew($IllegalArgumentException, "Null range specified"_s);
	} else if (lowerBound < 0) {
		$throwNew($IllegalArgumentException, "Job K octets value < 0 specified"_s);
	}
}

bool JobKOctetsSupported::equals(Object$* object) {
	return ($SetOfIntegerSyntax::equals(object) && $instanceOf(JobKOctetsSupported, object));
}

$Class* JobKOctetsSupported::getCategory() {
	return JobKOctetsSupported::class$;
}

$String* JobKOctetsSupported::getName() {
	return "job-k-octets-supported"_s;
}

JobKOctetsSupported::JobKOctetsSupported() {
}

$Class* JobKOctetsSupported::load$($String* name, bool initialize) {
	$loadClass(JobKOctetsSupported, name, initialize, &_JobKOctetsSupported_ClassInfo_, allocate$JobKOctetsSupported);
	return class$;
}

$Class* JobKOctetsSupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax