#include <javax/print/attribute/standard/JobMediaSheets.h>

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

$FieldInfo _JobMediaSheets_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobMediaSheets, serialVersionUID)},
	{}
};

$MethodInfo _JobMediaSheets_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobMediaSheets::*)(int32_t)>(&JobMediaSheets::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobMediaSheets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.JobMediaSheets",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_JobMediaSheets_FieldInfo_,
	_JobMediaSheets_MethodInfo_
};

$Object* allocate$JobMediaSheets($Class* clazz) {
	return $of($alloc(JobMediaSheets));
}

int32_t JobMediaSheets::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* JobMediaSheets::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* JobMediaSheets::clone() {
	 return this->$IntegerSyntax::clone();
}

void JobMediaSheets::finalize() {
	this->$IntegerSyntax::finalize();
}

void JobMediaSheets::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool JobMediaSheets::equals(Object$* object) {
	return $IntegerSyntax::equals(object) && $instanceOf(JobMediaSheets, object);
}

$Class* JobMediaSheets::getCategory() {
	return JobMediaSheets::class$;
}

$String* JobMediaSheets::getName() {
	return "job-media-sheets"_s;
}

JobMediaSheets::JobMediaSheets() {
}

$Class* JobMediaSheets::load$($String* name, bool initialize) {
	$loadClass(JobMediaSheets, name, initialize, &_JobMediaSheets_ClassInfo_, allocate$JobMediaSheets);
	return class$;
}

$Class* JobMediaSheets::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax