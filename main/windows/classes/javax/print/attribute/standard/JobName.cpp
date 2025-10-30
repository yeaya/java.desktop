#include <javax/print/attribute/standard/JobName.h>

#include <java/util/Locale.h>
#include <javax/print/attribute/TextSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $TextSyntax = ::javax::print::attribute::TextSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobName_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobName, serialVersionUID)},
	{}
};

$MethodInfo _JobName_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(JobName::*)($String*,$Locale*)>(&JobName::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobName_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobName",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_JobName_FieldInfo_,
	_JobName_MethodInfo_
};

$Object* allocate$JobName($Class* clazz) {
	return $of($alloc(JobName));
}

int32_t JobName::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* JobName::toString() {
	 return this->$TextSyntax::toString();
}

$Object* JobName::clone() {
	 return this->$TextSyntax::clone();
}

void JobName::finalize() {
	this->$TextSyntax::finalize();
}

void JobName::init$($String* jobName, $Locale* locale) {
	$TextSyntax::init$(jobName, locale);
}

bool JobName::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(JobName, object));
}

$Class* JobName::getCategory() {
	return JobName::class$;
}

$String* JobName::getName() {
	return "job-name"_s;
}

JobName::JobName() {
}

$Class* JobName::load$($String* name, bool initialize) {
	$loadClass(JobName, name, initialize, &_JobName_ClassInfo_, allocate$JobName);
	return class$;
}

$Class* JobName::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax