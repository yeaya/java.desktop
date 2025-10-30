#include <javax/print/attribute/standard/JobPriority.h>

#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobPriority_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobPriority, serialVersionUID)},
	{}
};

$MethodInfo _JobPriority_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobPriority::*)(int32_t)>(&JobPriority::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobPriority_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobPriority",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_JobPriority_FieldInfo_,
	_JobPriority_MethodInfo_
};

$Object* allocate$JobPriority($Class* clazz) {
	return $of($alloc(JobPriority));
}

int32_t JobPriority::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* JobPriority::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* JobPriority::clone() {
	 return this->$IntegerSyntax::clone();
}

void JobPriority::finalize() {
	this->$IntegerSyntax::finalize();
}

void JobPriority::init$(int32_t value) {
	$IntegerSyntax::init$(value, 1, 100);
}

bool JobPriority::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(JobPriority, object));
}

$Class* JobPriority::getCategory() {
	return JobPriority::class$;
}

$String* JobPriority::getName() {
	return "job-priority"_s;
}

JobPriority::JobPriority() {
}

$Class* JobPriority::load$($String* name, bool initialize) {
	$loadClass(JobPriority, name, initialize, &_JobPriority_ClassInfo_, allocate$JobPriority);
	return class$;
}

$Class* JobPriority::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax