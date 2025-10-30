#include <javax/print/attribute/standard/JobKOctetsProcessed.h>

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

$FieldInfo _JobKOctetsProcessed_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobKOctetsProcessed, serialVersionUID)},
	{}
};

$MethodInfo _JobKOctetsProcessed_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobKOctetsProcessed::*)(int32_t)>(&JobKOctetsProcessed::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobKOctetsProcessed_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobKOctetsProcessed",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_JobKOctetsProcessed_FieldInfo_,
	_JobKOctetsProcessed_MethodInfo_
};

$Object* allocate$JobKOctetsProcessed($Class* clazz) {
	return $of($alloc(JobKOctetsProcessed));
}

int32_t JobKOctetsProcessed::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* JobKOctetsProcessed::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* JobKOctetsProcessed::clone() {
	 return this->$IntegerSyntax::clone();
}

void JobKOctetsProcessed::finalize() {
	this->$IntegerSyntax::finalize();
}

void JobKOctetsProcessed::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool JobKOctetsProcessed::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(JobKOctetsProcessed, object));
}

$Class* JobKOctetsProcessed::getCategory() {
	return JobKOctetsProcessed::class$;
}

$String* JobKOctetsProcessed::getName() {
	return "job-k-octets-processed"_s;
}

JobKOctetsProcessed::JobKOctetsProcessed() {
}

$Class* JobKOctetsProcessed::load$($String* name, bool initialize) {
	$loadClass(JobKOctetsProcessed, name, initialize, &_JobKOctetsProcessed_ClassInfo_, allocate$JobKOctetsProcessed);
	return class$;
}

$Class* JobKOctetsProcessed::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax