#include <javax/print/attribute/standard/DateTimeAtCreation.h>

#include <java/util/Date.h>
#include <javax/print/attribute/DateTimeSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $DateTimeSyntax = ::javax::print::attribute::DateTimeSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _DateTimeAtCreation_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeAtCreation, serialVersionUID)},
	{}
};

$MethodInfo _DateTimeAtCreation_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Date;)V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeAtCreation::*)($Date*)>(&DateTimeAtCreation::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DateTimeAtCreation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.DateTimeAtCreation",
	"javax.print.attribute.DateTimeSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_DateTimeAtCreation_FieldInfo_,
	_DateTimeAtCreation_MethodInfo_
};

$Object* allocate$DateTimeAtCreation($Class* clazz) {
	return $of($alloc(DateTimeAtCreation));
}

int32_t DateTimeAtCreation::hashCode() {
	 return this->$DateTimeSyntax::hashCode();
}

$String* DateTimeAtCreation::toString() {
	 return this->$DateTimeSyntax::toString();
}

$Object* DateTimeAtCreation::clone() {
	 return this->$DateTimeSyntax::clone();
}

void DateTimeAtCreation::finalize() {
	this->$DateTimeSyntax::finalize();
}

void DateTimeAtCreation::init$($Date* dateTime) {
	$DateTimeSyntax::init$(dateTime);
}

bool DateTimeAtCreation::equals(Object$* object) {
	return ($DateTimeSyntax::equals(object) && $instanceOf(DateTimeAtCreation, object));
}

$Class* DateTimeAtCreation::getCategory() {
	return DateTimeAtCreation::class$;
}

$String* DateTimeAtCreation::getName() {
	return "date-time-at-creation"_s;
}

DateTimeAtCreation::DateTimeAtCreation() {
}

$Class* DateTimeAtCreation::load$($String* name, bool initialize) {
	$loadClass(DateTimeAtCreation, name, initialize, &_DateTimeAtCreation_ClassInfo_, allocate$DateTimeAtCreation);
	return class$;
}

$Class* DateTimeAtCreation::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax