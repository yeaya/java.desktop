#include <javax/print/attribute/standard/JobMessageFromOperator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/print/attribute/TextSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $TextSyntax = ::javax::print::attribute::TextSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobMessageFromOperator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobMessageFromOperator, serialVersionUID)},
	{}
};

$MethodInfo _JobMessageFromOperator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(JobMessageFromOperator::*)($String*,$Locale*)>(&JobMessageFromOperator::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobMessageFromOperator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobMessageFromOperator",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_JobMessageFromOperator_FieldInfo_,
	_JobMessageFromOperator_MethodInfo_
};

$Object* allocate$JobMessageFromOperator($Class* clazz) {
	return $of($alloc(JobMessageFromOperator));
}

int32_t JobMessageFromOperator::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* JobMessageFromOperator::toString() {
	 return this->$TextSyntax::toString();
}

$Object* JobMessageFromOperator::clone() {
	 return this->$TextSyntax::clone();
}

void JobMessageFromOperator::finalize() {
	this->$TextSyntax::finalize();
}

void JobMessageFromOperator::init$($String* message, $Locale* locale) {
	$TextSyntax::init$(message, locale);
}

bool JobMessageFromOperator::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(JobMessageFromOperator, object));
}

$Class* JobMessageFromOperator::getCategory() {
	return JobMessageFromOperator::class$;
}

$String* JobMessageFromOperator::getName() {
	return "job-message-from-operator"_s;
}

JobMessageFromOperator::JobMessageFromOperator() {
}

$Class* JobMessageFromOperator::load$($String* name, bool initialize) {
	$loadClass(JobMessageFromOperator, name, initialize, &_JobMessageFromOperator_ClassInfo_, allocate$JobMessageFromOperator);
	return class$;
}

$Class* JobMessageFromOperator::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax