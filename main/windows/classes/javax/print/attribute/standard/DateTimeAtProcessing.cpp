#include <javax/print/attribute/standard/DateTimeAtProcessing.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _DateTimeAtProcessing_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeAtProcessing, serialVersionUID)},
	{}
};

$MethodInfo _DateTimeAtProcessing_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Date;)V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeAtProcessing::*)($Date*)>(&DateTimeAtProcessing::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DateTimeAtProcessing_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.DateTimeAtProcessing",
	"javax.print.attribute.DateTimeSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_DateTimeAtProcessing_FieldInfo_,
	_DateTimeAtProcessing_MethodInfo_
};

$Object* allocate$DateTimeAtProcessing($Class* clazz) {
	return $of($alloc(DateTimeAtProcessing));
}

int32_t DateTimeAtProcessing::hashCode() {
	 return this->$DateTimeSyntax::hashCode();
}

$String* DateTimeAtProcessing::toString() {
	 return this->$DateTimeSyntax::toString();
}

$Object* DateTimeAtProcessing::clone() {
	 return this->$DateTimeSyntax::clone();
}

void DateTimeAtProcessing::finalize() {
	this->$DateTimeSyntax::finalize();
}

void DateTimeAtProcessing::init$($Date* dateTime) {
	$DateTimeSyntax::init$(dateTime);
}

bool DateTimeAtProcessing::equals(Object$* object) {
	return ($DateTimeSyntax::equals(object) && $instanceOf(DateTimeAtProcessing, object));
}

$Class* DateTimeAtProcessing::getCategory() {
	return DateTimeAtProcessing::class$;
}

$String* DateTimeAtProcessing::getName() {
	return "date-time-at-processing"_s;
}

DateTimeAtProcessing::DateTimeAtProcessing() {
}

$Class* DateTimeAtProcessing::load$($String* name, bool initialize) {
	$loadClass(DateTimeAtProcessing, name, initialize, &_DateTimeAtProcessing_ClassInfo_, allocate$DateTimeAtProcessing);
	return class$;
}

$Class* DateTimeAtProcessing::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax