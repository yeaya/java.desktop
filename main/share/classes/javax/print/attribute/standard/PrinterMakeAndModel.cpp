#include <javax/print/attribute/standard/PrinterMakeAndModel.h>

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

$FieldInfo _PrinterMakeAndModel_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterMakeAndModel, serialVersionUID)},
	{}
};

$MethodInfo _PrinterMakeAndModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterMakeAndModel::*)($String*,$Locale*)>(&PrinterMakeAndModel::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterMakeAndModel_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterMakeAndModel",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterMakeAndModel_FieldInfo_,
	_PrinterMakeAndModel_MethodInfo_
};

$Object* allocate$PrinterMakeAndModel($Class* clazz) {
	return $of($alloc(PrinterMakeAndModel));
}

int32_t PrinterMakeAndModel::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* PrinterMakeAndModel::toString() {
	 return this->$TextSyntax::toString();
}

$Object* PrinterMakeAndModel::clone() {
	 return this->$TextSyntax::clone();
}

void PrinterMakeAndModel::finalize() {
	this->$TextSyntax::finalize();
}

void PrinterMakeAndModel::init$($String* makeAndModel, $Locale* locale) {
	$TextSyntax::init$(makeAndModel, locale);
}

bool PrinterMakeAndModel::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(PrinterMakeAndModel, object));
}

$Class* PrinterMakeAndModel::getCategory() {
	return PrinterMakeAndModel::class$;
}

$String* PrinterMakeAndModel::getName() {
	return "printer-make-and-model"_s;
}

PrinterMakeAndModel::PrinterMakeAndModel() {
}

$Class* PrinterMakeAndModel::load$($String* name, bool initialize) {
	$loadClass(PrinterMakeAndModel, name, initialize, &_PrinterMakeAndModel_ClassInfo_, allocate$PrinterMakeAndModel);
	return class$;
}

$Class* PrinterMakeAndModel::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax