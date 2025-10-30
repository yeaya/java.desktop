#include <javax/print/attribute/standard/JobHoldUntil.h>

#include <java/util/Date.h>
#include <javax/print/attribute/DateTimeSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $DateTimeSyntax = ::javax::print::attribute::DateTimeSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobHoldUntil_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobHoldUntil, serialVersionUID)},
	{}
};

$MethodInfo _JobHoldUntil_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Date;)V", nullptr, $PUBLIC, $method(static_cast<void(JobHoldUntil::*)($Date*)>(&JobHoldUntil::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobHoldUntil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobHoldUntil",
	"javax.print.attribute.DateTimeSyntax",
	"javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_JobHoldUntil_FieldInfo_,
	_JobHoldUntil_MethodInfo_
};

$Object* allocate$JobHoldUntil($Class* clazz) {
	return $of($alloc(JobHoldUntil));
}

int32_t JobHoldUntil::hashCode() {
	 return this->$DateTimeSyntax::hashCode();
}

$String* JobHoldUntil::toString() {
	 return this->$DateTimeSyntax::toString();
}

$Object* JobHoldUntil::clone() {
	 return this->$DateTimeSyntax::clone();
}

void JobHoldUntil::finalize() {
	this->$DateTimeSyntax::finalize();
}

void JobHoldUntil::init$($Date* dateTime) {
	$DateTimeSyntax::init$(dateTime);
}

bool JobHoldUntil::equals(Object$* object) {
	return ($DateTimeSyntax::equals(object) && $instanceOf(JobHoldUntil, object));
}

$Class* JobHoldUntil::getCategory() {
	return JobHoldUntil::class$;
}

$String* JobHoldUntil::getName() {
	return "job-hold-until"_s;
}

JobHoldUntil::JobHoldUntil() {
}

$Class* JobHoldUntil::load$($String* name, bool initialize) {
	$loadClass(JobHoldUntil, name, initialize, &_JobHoldUntil_ClassInfo_, allocate$JobHoldUntil);
	return class$;
}

$Class* JobHoldUntil::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax