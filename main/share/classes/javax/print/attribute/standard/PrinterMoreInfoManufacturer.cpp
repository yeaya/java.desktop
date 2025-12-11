#include <javax/print/attribute/standard/PrinterMoreInfoManufacturer.h>

#include <java/net/URI.h>
#include <javax/print/attribute/URISyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntax = ::javax::print::attribute::URISyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterMoreInfoManufacturer_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterMoreInfoManufacturer, serialVersionUID)},
	{}
};

$MethodInfo _PrinterMoreInfoManufacturer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterMoreInfoManufacturer::*)($URI*)>(&PrinterMoreInfoManufacturer::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterMoreInfoManufacturer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterMoreInfoManufacturer",
	"javax.print.attribute.URISyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterMoreInfoManufacturer_FieldInfo_,
	_PrinterMoreInfoManufacturer_MethodInfo_
};

$Object* allocate$PrinterMoreInfoManufacturer($Class* clazz) {
	return $of($alloc(PrinterMoreInfoManufacturer));
}

int32_t PrinterMoreInfoManufacturer::hashCode() {
	 return this->$URISyntax::hashCode();
}

$String* PrinterMoreInfoManufacturer::toString() {
	 return this->$URISyntax::toString();
}

$Object* PrinterMoreInfoManufacturer::clone() {
	 return this->$URISyntax::clone();
}

void PrinterMoreInfoManufacturer::finalize() {
	this->$URISyntax::finalize();
}

void PrinterMoreInfoManufacturer::init$($URI* uri) {
	$URISyntax::init$(uri);
}

bool PrinterMoreInfoManufacturer::equals(Object$* object) {
	return ($URISyntax::equals(object) && $instanceOf(PrinterMoreInfoManufacturer, object));
}

$Class* PrinterMoreInfoManufacturer::getCategory() {
	return PrinterMoreInfoManufacturer::class$;
}

$String* PrinterMoreInfoManufacturer::getName() {
	return "printer-more-info-manufacturer"_s;
}

PrinterMoreInfoManufacturer::PrinterMoreInfoManufacturer() {
}

$Class* PrinterMoreInfoManufacturer::load$($String* name, bool initialize) {
	$loadClass(PrinterMoreInfoManufacturer, name, initialize, &_PrinterMoreInfoManufacturer_ClassInfo_, allocate$PrinterMoreInfoManufacturer);
	return class$;
}

$Class* PrinterMoreInfoManufacturer::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax