#include <javax/print/attribute/standard/PrinterInfo.h>

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

$FieldInfo _PrinterInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterInfo, serialVersionUID)},
	{}
};

$MethodInfo _PrinterInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterInfo::*)($String*,$Locale*)>(&PrinterInfo::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterInfo",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterInfo_FieldInfo_,
	_PrinterInfo_MethodInfo_
};

$Object* allocate$PrinterInfo($Class* clazz) {
	return $of($alloc(PrinterInfo));
}

int32_t PrinterInfo::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* PrinterInfo::toString() {
	 return this->$TextSyntax::toString();
}

$Object* PrinterInfo::clone() {
	 return this->$TextSyntax::clone();
}

void PrinterInfo::finalize() {
	this->$TextSyntax::finalize();
}

void PrinterInfo::init$($String* info, $Locale* locale) {
	$TextSyntax::init$(info, locale);
}

bool PrinterInfo::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(PrinterInfo, object));
}

$Class* PrinterInfo::getCategory() {
	return PrinterInfo::class$;
}

$String* PrinterInfo::getName() {
	return "printer-info"_s;
}

PrinterInfo::PrinterInfo() {
}

$Class* PrinterInfo::load$($String* name, bool initialize) {
	$loadClass(PrinterInfo, name, initialize, &_PrinterInfo_ClassInfo_, allocate$PrinterInfo);
	return class$;
}

$Class* PrinterInfo::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax