#include <javax/print/attribute/standard/JobImpressions.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobImpressions_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobImpressions, serialVersionUID)},
	{}
};

$MethodInfo _JobImpressions_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobImpressions::*)(int32_t)>(&JobImpressions::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobImpressions_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobImpressions",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_JobImpressions_FieldInfo_,
	_JobImpressions_MethodInfo_
};

$Object* allocate$JobImpressions($Class* clazz) {
	return $of($alloc(JobImpressions));
}

int32_t JobImpressions::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* JobImpressions::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* JobImpressions::clone() {
	 return this->$IntegerSyntax::clone();
}

void JobImpressions::finalize() {
	this->$IntegerSyntax::finalize();
}

void JobImpressions::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool JobImpressions::equals(Object$* object) {
	return $IntegerSyntax::equals(object) && $instanceOf(JobImpressions, object);
}

$Class* JobImpressions::getCategory() {
	return JobImpressions::class$;
}

$String* JobImpressions::getName() {
	return "job-impressions"_s;
}

JobImpressions::JobImpressions() {
}

$Class* JobImpressions::load$($String* name, bool initialize) {
	$loadClass(JobImpressions, name, initialize, &_JobImpressions_ClassInfo_, allocate$JobImpressions);
	return class$;
}

$Class* JobImpressions::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax