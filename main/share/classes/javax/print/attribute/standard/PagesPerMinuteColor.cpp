#include <javax/print/attribute/standard/PagesPerMinuteColor.h>

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

$FieldInfo _PagesPerMinuteColor_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PagesPerMinuteColor, serialVersionUID)},
	{}
};

$MethodInfo _PagesPerMinuteColor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PagesPerMinuteColor::*)(int32_t)>(&PagesPerMinuteColor::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PagesPerMinuteColor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PagesPerMinuteColor",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PagesPerMinuteColor_FieldInfo_,
	_PagesPerMinuteColor_MethodInfo_
};

$Object* allocate$PagesPerMinuteColor($Class* clazz) {
	return $of($alloc(PagesPerMinuteColor));
}

int32_t PagesPerMinuteColor::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* PagesPerMinuteColor::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* PagesPerMinuteColor::clone() {
	 return this->$IntegerSyntax::clone();
}

void PagesPerMinuteColor::finalize() {
	this->$IntegerSyntax::finalize();
}

void PagesPerMinuteColor::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool PagesPerMinuteColor::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(PagesPerMinuteColor, object));
}

$Class* PagesPerMinuteColor::getCategory() {
	return PagesPerMinuteColor::class$;
}

$String* PagesPerMinuteColor::getName() {
	return "pages-per-minute-color"_s;
}

PagesPerMinuteColor::PagesPerMinuteColor() {
}

$Class* PagesPerMinuteColor::load$($String* name, bool initialize) {
	$loadClass(PagesPerMinuteColor, name, initialize, &_PagesPerMinuteColor_ClassInfo_, allocate$PagesPerMinuteColor);
	return class$;
}

$Class* PagesPerMinuteColor::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax