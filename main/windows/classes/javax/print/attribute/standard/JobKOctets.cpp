#include <javax/print/attribute/standard/JobKOctets.h>

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

$FieldInfo _JobKOctets_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobKOctets, serialVersionUID)},
	{}
};

$MethodInfo _JobKOctets_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobKOctets::*)(int32_t)>(&JobKOctets::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobKOctets_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.JobKOctets",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_JobKOctets_FieldInfo_,
	_JobKOctets_MethodInfo_
};

$Object* allocate$JobKOctets($Class* clazz) {
	return $of($alloc(JobKOctets));
}

int32_t JobKOctets::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* JobKOctets::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* JobKOctets::clone() {
	 return this->$IntegerSyntax::clone();
}

void JobKOctets::finalize() {
	this->$IntegerSyntax::finalize();
}

void JobKOctets::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool JobKOctets::equals(Object$* object) {
	return $IntegerSyntax::equals(object) && $instanceOf(JobKOctets, object);
}

$Class* JobKOctets::getCategory() {
	return JobKOctets::class$;
}

$String* JobKOctets::getName() {
	return "job-k-octets"_s;
}

JobKOctets::JobKOctets() {
}

$Class* JobKOctets::load$($String* name, bool initialize) {
	$loadClass(JobKOctets, name, initialize, &_JobKOctets_ClassInfo_, allocate$JobKOctets);
	return class$;
}

$Class* JobKOctets::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax