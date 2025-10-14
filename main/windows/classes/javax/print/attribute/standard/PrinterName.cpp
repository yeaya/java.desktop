#include <javax/print/attribute/standard/PrinterName.h>

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

$FieldInfo _PrinterName_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterName, serialVersionUID)},
	{}
};

$MethodInfo _PrinterName_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterName::*)($String*,$Locale*)>(&PrinterName::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterName_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterName",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterName_FieldInfo_,
	_PrinterName_MethodInfo_
};

$Object* allocate$PrinterName($Class* clazz) {
	return $of($alloc(PrinterName));
}

int32_t PrinterName::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* PrinterName::toString() {
	 return this->$TextSyntax::toString();
}

$Object* PrinterName::clone() {
	 return this->$TextSyntax::clone();
}

void PrinterName::finalize() {
	this->$TextSyntax::finalize();
}

void PrinterName::init$($String* printerName, $Locale* locale) {
	$TextSyntax::init$(printerName, locale);
}

bool PrinterName::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(PrinterName, object));
}

$Class* PrinterName::getCategory() {
	return PrinterName::class$;
}

$String* PrinterName::getName() {
	return "printer-name"_s;
}

PrinterName::PrinterName() {
}

$Class* PrinterName::load$($String* name, bool initialize) {
	$loadClass(PrinterName, name, initialize, &_PrinterName_ClassInfo_, allocate$PrinterName);
	return class$;
}

$Class* PrinterName::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax