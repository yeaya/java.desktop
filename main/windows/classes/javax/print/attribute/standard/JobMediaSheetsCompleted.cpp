#include <javax/print/attribute/standard/JobMediaSheetsCompleted.h>

#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobMediaSheetsCompleted_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobMediaSheetsCompleted, serialVersionUID)},
	{}
};

$MethodInfo _JobMediaSheetsCompleted_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobMediaSheetsCompleted::*)(int32_t)>(&JobMediaSheetsCompleted::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobMediaSheetsCompleted_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobMediaSheetsCompleted",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_JobMediaSheetsCompleted_FieldInfo_,
	_JobMediaSheetsCompleted_MethodInfo_
};

$Object* allocate$JobMediaSheetsCompleted($Class* clazz) {
	return $of($alloc(JobMediaSheetsCompleted));
}

int32_t JobMediaSheetsCompleted::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* JobMediaSheetsCompleted::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* JobMediaSheetsCompleted::clone() {
	 return this->$IntegerSyntax::clone();
}

void JobMediaSheetsCompleted::finalize() {
	this->$IntegerSyntax::finalize();
}

void JobMediaSheetsCompleted::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool JobMediaSheetsCompleted::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(JobMediaSheetsCompleted, object));
}

$Class* JobMediaSheetsCompleted::getCategory() {
	return JobMediaSheetsCompleted::class$;
}

$String* JobMediaSheetsCompleted::getName() {
	return "job-media-sheets-completed"_s;
}

JobMediaSheetsCompleted::JobMediaSheetsCompleted() {
}

$Class* JobMediaSheetsCompleted::load$($String* name, bool initialize) {
	$loadClass(JobMediaSheetsCompleted, name, initialize, &_JobMediaSheetsCompleted_ClassInfo_, allocate$JobMediaSheetsCompleted);
	return class$;
}

$Class* JobMediaSheetsCompleted::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax