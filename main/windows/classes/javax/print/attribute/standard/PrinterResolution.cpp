#include <javax/print/attribute/standard/PrinterResolution.h>

#include <javax/print/attribute/ResolutionSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $ResolutionSyntax = ::javax::print::attribute::ResolutionSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterResolution_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterResolution, serialVersionUID)},
	{}
};

$MethodInfo _PrinterResolution_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterResolution::*)(int32_t,int32_t,int32_t)>(&PrinterResolution::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterResolution_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterResolution",
	"javax.print.attribute.ResolutionSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_PrinterResolution_FieldInfo_,
	_PrinterResolution_MethodInfo_
};

$Object* allocate$PrinterResolution($Class* clazz) {
	return $of($alloc(PrinterResolution));
}

int32_t PrinterResolution::hashCode() {
	 return this->$ResolutionSyntax::hashCode();
}

$String* PrinterResolution::toString() {
	 return this->$ResolutionSyntax::toString();
}

$Object* PrinterResolution::clone() {
	 return this->$ResolutionSyntax::clone();
}

void PrinterResolution::finalize() {
	this->$ResolutionSyntax::finalize();
}

void PrinterResolution::init$(int32_t crossFeedResolution, int32_t feedResolution, int32_t units) {
	$ResolutionSyntax::init$(crossFeedResolution, feedResolution, units);
}

bool PrinterResolution::equals(Object$* object) {
	return ($ResolutionSyntax::equals(object) && $instanceOf(PrinterResolution, object));
}

$Class* PrinterResolution::getCategory() {
	return PrinterResolution::class$;
}

$String* PrinterResolution::getName() {
	return "printer-resolution"_s;
}

PrinterResolution::PrinterResolution() {
}

$Class* PrinterResolution::load$($String* name, bool initialize) {
	$loadClass(PrinterResolution, name, initialize, &_PrinterResolution_ClassInfo_, allocate$PrinterResolution);
	return class$;
}

$Class* PrinterResolution::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax