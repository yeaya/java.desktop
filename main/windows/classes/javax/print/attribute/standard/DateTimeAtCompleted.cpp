#include <javax/print/attribute/standard/DateTimeAtCompleted.h>

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

$FieldInfo _DateTimeAtCompleted_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeAtCompleted, serialVersionUID)},
	{}
};

$MethodInfo _DateTimeAtCompleted_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Date;)V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeAtCompleted::*)($Date*)>(&DateTimeAtCompleted::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DateTimeAtCompleted_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.DateTimeAtCompleted",
	"javax.print.attribute.DateTimeSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_DateTimeAtCompleted_FieldInfo_,
	_DateTimeAtCompleted_MethodInfo_
};

$Object* allocate$DateTimeAtCompleted($Class* clazz) {
	return $of($alloc(DateTimeAtCompleted));
}

int32_t DateTimeAtCompleted::hashCode() {
	 return this->$DateTimeSyntax::hashCode();
}

$String* DateTimeAtCompleted::toString() {
	 return this->$DateTimeSyntax::toString();
}

$Object* DateTimeAtCompleted::clone() {
	 return this->$DateTimeSyntax::clone();
}

void DateTimeAtCompleted::finalize() {
	this->$DateTimeSyntax::finalize();
}

void DateTimeAtCompleted::init$($Date* dateTime) {
	$DateTimeSyntax::init$(dateTime);
}

bool DateTimeAtCompleted::equals(Object$* object) {
	return ($DateTimeSyntax::equals(object) && $instanceOf(DateTimeAtCompleted, object));
}

$Class* DateTimeAtCompleted::getCategory() {
	return DateTimeAtCompleted::class$;
}

$String* DateTimeAtCompleted::getName() {
	return "date-time-at-completed"_s;
}

DateTimeAtCompleted::DateTimeAtCompleted() {
}

$Class* DateTimeAtCompleted::load$($String* name, bool initialize) {
	$loadClass(DateTimeAtCompleted, name, initialize, &_DateTimeAtCompleted_ClassInfo_, allocate$DateTimeAtCompleted);
	return class$;
}

$Class* DateTimeAtCompleted::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax