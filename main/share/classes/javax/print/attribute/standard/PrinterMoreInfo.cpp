#include <javax/print/attribute/standard/PrinterMoreInfo.h>

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

$FieldInfo _PrinterMoreInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterMoreInfo, serialVersionUID)},
	{}
};

$MethodInfo _PrinterMoreInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterMoreInfo::*)($URI*)>(&PrinterMoreInfo::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterMoreInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterMoreInfo",
	"javax.print.attribute.URISyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterMoreInfo_FieldInfo_,
	_PrinterMoreInfo_MethodInfo_
};

$Object* allocate$PrinterMoreInfo($Class* clazz) {
	return $of($alloc(PrinterMoreInfo));
}

int32_t PrinterMoreInfo::hashCode() {
	 return this->$URISyntax::hashCode();
}

$String* PrinterMoreInfo::toString() {
	 return this->$URISyntax::toString();
}

$Object* PrinterMoreInfo::clone() {
	 return this->$URISyntax::clone();
}

void PrinterMoreInfo::finalize() {
	this->$URISyntax::finalize();
}

void PrinterMoreInfo::init$($URI* uri) {
	$URISyntax::init$(uri);
}

bool PrinterMoreInfo::equals(Object$* object) {
	return ($URISyntax::equals(object) && $instanceOf(PrinterMoreInfo, object));
}

$Class* PrinterMoreInfo::getCategory() {
	return PrinterMoreInfo::class$;
}

$String* PrinterMoreInfo::getName() {
	return "printer-more-info"_s;
}

PrinterMoreInfo::PrinterMoreInfo() {
}

$Class* PrinterMoreInfo::load$($String* name, bool initialize) {
	$loadClass(PrinterMoreInfo, name, initialize, &_PrinterMoreInfo_ClassInfo_, allocate$PrinterMoreInfo);
	return class$;
}

$Class* PrinterMoreInfo::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax