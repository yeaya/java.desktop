#include <javax/print/attribute/standard/PrinterURI.h>

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

$FieldInfo _PrinterURI_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterURI, serialVersionUID)},
	{}
};

$MethodInfo _PrinterURI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterURI::*)($URI*)>(&PrinterURI::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterURI_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterURI",
	"javax.print.attribute.URISyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterURI_FieldInfo_,
	_PrinterURI_MethodInfo_
};

$Object* allocate$PrinterURI($Class* clazz) {
	return $of($alloc(PrinterURI));
}

int32_t PrinterURI::hashCode() {
	 return this->$URISyntax::hashCode();
}

$String* PrinterURI::toString() {
	 return this->$URISyntax::toString();
}

$Object* PrinterURI::clone() {
	 return this->$URISyntax::clone();
}

void PrinterURI::finalize() {
	this->$URISyntax::finalize();
}

void PrinterURI::init$($URI* uri) {
	$URISyntax::init$(uri);
}

bool PrinterURI::equals(Object$* object) {
	return ($URISyntax::equals(object) && $instanceOf(PrinterURI, object));
}

$Class* PrinterURI::getCategory() {
	return PrinterURI::class$;
}

$String* PrinterURI::getName() {
	return "printer-uri"_s;
}

PrinterURI::PrinterURI() {
}

$Class* PrinterURI::load$($String* name, bool initialize) {
	$loadClass(PrinterURI, name, initialize, &_PrinterURI_ClassInfo_, allocate$PrinterURI);
	return class$;
}

$Class* PrinterURI::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax