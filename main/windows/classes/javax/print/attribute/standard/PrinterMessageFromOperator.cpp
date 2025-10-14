#include <javax/print/attribute/standard/PrinterMessageFromOperator.h>

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
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $TextSyntax = ::javax::print::attribute::TextSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterMessageFromOperator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterMessageFromOperator, serialVersionUID)},
	{}
};

$MethodInfo _PrinterMessageFromOperator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterMessageFromOperator::*)($String*,$Locale*)>(&PrinterMessageFromOperator::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterMessageFromOperator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterMessageFromOperator",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterMessageFromOperator_FieldInfo_,
	_PrinterMessageFromOperator_MethodInfo_
};

$Object* allocate$PrinterMessageFromOperator($Class* clazz) {
	return $of($alloc(PrinterMessageFromOperator));
}

int32_t PrinterMessageFromOperator::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* PrinterMessageFromOperator::toString() {
	 return this->$TextSyntax::toString();
}

$Object* PrinterMessageFromOperator::clone() {
	 return this->$TextSyntax::clone();
}

void PrinterMessageFromOperator::finalize() {
	this->$TextSyntax::finalize();
}

void PrinterMessageFromOperator::init$($String* message, $Locale* locale) {
	$TextSyntax::init$(message, locale);
}

bool PrinterMessageFromOperator::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(PrinterMessageFromOperator, object));
}

$Class* PrinterMessageFromOperator::getCategory() {
	return PrinterMessageFromOperator::class$;
}

$String* PrinterMessageFromOperator::getName() {
	return "printer-message-from-operator"_s;
}

PrinterMessageFromOperator::PrinterMessageFromOperator() {
}

$Class* PrinterMessageFromOperator::load$($String* name, bool initialize) {
	$loadClass(PrinterMessageFromOperator, name, initialize, &_PrinterMessageFromOperator_ClassInfo_, allocate$PrinterMessageFromOperator);
	return class$;
}

$Class* PrinterMessageFromOperator::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax