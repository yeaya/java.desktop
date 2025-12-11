#include <javax/print/attribute/standard/JobImpressionsCompleted.h>

#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobImpressionsCompleted_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobImpressionsCompleted, serialVersionUID)},
	{}
};

$MethodInfo _JobImpressionsCompleted_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobImpressionsCompleted::*)(int32_t)>(&JobImpressionsCompleted::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobImpressionsCompleted_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobImpressionsCompleted",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_JobImpressionsCompleted_FieldInfo_,
	_JobImpressionsCompleted_MethodInfo_
};

$Object* allocate$JobImpressionsCompleted($Class* clazz) {
	return $of($alloc(JobImpressionsCompleted));
}

int32_t JobImpressionsCompleted::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* JobImpressionsCompleted::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* JobImpressionsCompleted::clone() {
	 return this->$IntegerSyntax::clone();
}

void JobImpressionsCompleted::finalize() {
	this->$IntegerSyntax::finalize();
}

void JobImpressionsCompleted::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool JobImpressionsCompleted::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(JobImpressionsCompleted, object));
}

$Class* JobImpressionsCompleted::getCategory() {
	return JobImpressionsCompleted::class$;
}

$String* JobImpressionsCompleted::getName() {
	return "job-impressions-completed"_s;
}

JobImpressionsCompleted::JobImpressionsCompleted() {
}

$Class* JobImpressionsCompleted::load$($String* name, bool initialize) {
	$loadClass(JobImpressionsCompleted, name, initialize, &_JobImpressionsCompleted_ClassInfo_, allocate$JobImpressionsCompleted);
	return class$;
}

$Class* JobImpressionsCompleted::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax