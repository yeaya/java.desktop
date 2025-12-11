#include <javax/print/attribute/standard/PagesPerMinute.h>

#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PagesPerMinute_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PagesPerMinute, serialVersionUID)},
	{}
};

$MethodInfo _PagesPerMinute_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PagesPerMinute::*)(int32_t)>(&PagesPerMinute::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PagesPerMinute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PagesPerMinute",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PagesPerMinute_FieldInfo_,
	_PagesPerMinute_MethodInfo_
};

$Object* allocate$PagesPerMinute($Class* clazz) {
	return $of($alloc(PagesPerMinute));
}

int32_t PagesPerMinute::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* PagesPerMinute::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* PagesPerMinute::clone() {
	 return this->$IntegerSyntax::clone();
}

void PagesPerMinute::finalize() {
	this->$IntegerSyntax::finalize();
}

void PagesPerMinute::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool PagesPerMinute::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(PagesPerMinute, object));
}

$Class* PagesPerMinute::getCategory() {
	return PagesPerMinute::class$;
}

$String* PagesPerMinute::getName() {
	return "pages-per-minute"_s;
}

PagesPerMinute::PagesPerMinute() {
}

$Class* PagesPerMinute::load$($String* name, bool initialize) {
	$loadClass(PagesPerMinute, name, initialize, &_PagesPerMinute_ClassInfo_, allocate$PagesPerMinute);
	return class$;
}

$Class* PagesPerMinute::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax