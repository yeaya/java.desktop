#include <javax/print/attribute/standard/JobPrioritySupported.h>

#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $SupportedValuesAttribute = ::javax::print::attribute::SupportedValuesAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobPrioritySupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobPrioritySupported, serialVersionUID)},
	{}
};

$MethodInfo _JobPrioritySupported_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobPrioritySupported::*)(int32_t)>(&JobPrioritySupported::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobPrioritySupported_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobPrioritySupported",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.SupportedValuesAttribute",
	_JobPrioritySupported_FieldInfo_,
	_JobPrioritySupported_MethodInfo_
};

$Object* allocate$JobPrioritySupported($Class* clazz) {
	return $of($alloc(JobPrioritySupported));
}

int32_t JobPrioritySupported::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* JobPrioritySupported::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* JobPrioritySupported::clone() {
	 return this->$IntegerSyntax::clone();
}

void JobPrioritySupported::finalize() {
	this->$IntegerSyntax::finalize();
}

void JobPrioritySupported::init$(int32_t value) {
	$IntegerSyntax::init$(value, 1, 100);
}

bool JobPrioritySupported::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(JobPrioritySupported, object));
}

$Class* JobPrioritySupported::getCategory() {
	return JobPrioritySupported::class$;
}

$String* JobPrioritySupported::getName() {
	return "job-priority-supported"_s;
}

JobPrioritySupported::JobPrioritySupported() {
}

$Class* JobPrioritySupported::load$($String* name, bool initialize) {
	$loadClass(JobPrioritySupported, name, initialize, &_JobPrioritySupported_ClassInfo_, allocate$JobPrioritySupported);
	return class$;
}

$Class* JobPrioritySupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax