#include <javax/print/attribute/standard/PrinterLocation.h>

#include <java/util/Locale.h>
#include <javax/print/attribute/TextSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $TextSyntax = ::javax::print::attribute::TextSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterLocation_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterLocation, serialVersionUID)},
	{}
};

$MethodInfo _PrinterLocation_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterLocation::*)($String*,$Locale*)>(&PrinterLocation::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterLocation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterLocation",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterLocation_FieldInfo_,
	_PrinterLocation_MethodInfo_
};

$Object* allocate$PrinterLocation($Class* clazz) {
	return $of($alloc(PrinterLocation));
}

int32_t PrinterLocation::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* PrinterLocation::toString() {
	 return this->$TextSyntax::toString();
}

$Object* PrinterLocation::clone() {
	 return this->$TextSyntax::clone();
}

void PrinterLocation::finalize() {
	this->$TextSyntax::finalize();
}

void PrinterLocation::init$($String* location, $Locale* locale) {
	$TextSyntax::init$(location, locale);
}

bool PrinterLocation::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(PrinterLocation, object));
}

$Class* PrinterLocation::getCategory() {
	return PrinterLocation::class$;
}

$String* PrinterLocation::getName() {
	return "printer-location"_s;
}

PrinterLocation::PrinterLocation() {
}

$Class* PrinterLocation::load$($String* name, bool initialize) {
	$loadClass(PrinterLocation, name, initialize, &_PrinterLocation_ClassInfo_, allocate$PrinterLocation);
	return class$;
}

$Class* PrinterLocation::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax