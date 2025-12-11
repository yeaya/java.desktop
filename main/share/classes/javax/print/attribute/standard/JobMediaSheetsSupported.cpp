#include <javax/print/attribute/standard/JobMediaSheetsSupported.h>

#include <javax/print/attribute/SetOfIntegerSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SetOfIntegerSyntax = ::javax::print::attribute::SetOfIntegerSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobMediaSheetsSupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobMediaSheetsSupported, serialVersionUID)},
	{}
};

$MethodInfo _JobMediaSheetsSupported_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(JobMediaSheetsSupported::*)(int32_t,int32_t)>(&JobMediaSheetsSupported::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobMediaSheetsSupported_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobMediaSheetsSupported",
	"javax.print.attribute.SetOfIntegerSyntax",
	"javax.print.attribute.SupportedValuesAttribute",
	_JobMediaSheetsSupported_FieldInfo_,
	_JobMediaSheetsSupported_MethodInfo_
};

$Object* allocate$JobMediaSheetsSupported($Class* clazz) {
	return $of($alloc(JobMediaSheetsSupported));
}

int32_t JobMediaSheetsSupported::hashCode() {
	 return this->$SetOfIntegerSyntax::hashCode();
}

$String* JobMediaSheetsSupported::toString() {
	 return this->$SetOfIntegerSyntax::toString();
}

$Object* JobMediaSheetsSupported::clone() {
	 return this->$SetOfIntegerSyntax::clone();
}

void JobMediaSheetsSupported::finalize() {
	this->$SetOfIntegerSyntax::finalize();
}

void JobMediaSheetsSupported::init$(int32_t lowerBound, int32_t upperBound) {
	$SetOfIntegerSyntax::init$(lowerBound, upperBound);
	if (lowerBound > upperBound) {
		$throwNew($IllegalArgumentException, "Null range specified"_s);
	} else if (lowerBound < 0) {
		$throwNew($IllegalArgumentException, "Job K octets value < 0 specified"_s);
	}
}

bool JobMediaSheetsSupported::equals(Object$* object) {
	return ($SetOfIntegerSyntax::equals(object) && $instanceOf(JobMediaSheetsSupported, object));
}

$Class* JobMediaSheetsSupported::getCategory() {
	return JobMediaSheetsSupported::class$;
}

$String* JobMediaSheetsSupported::getName() {
	return "job-media-sheets-supported"_s;
}

JobMediaSheetsSupported::JobMediaSheetsSupported() {
}

$Class* JobMediaSheetsSupported::load$($String* name, bool initialize) {
	$loadClass(JobMediaSheetsSupported, name, initialize, &_JobMediaSheetsSupported_ClassInfo_, allocate$JobMediaSheetsSupported);
	return class$;
}

$Class* JobMediaSheetsSupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax