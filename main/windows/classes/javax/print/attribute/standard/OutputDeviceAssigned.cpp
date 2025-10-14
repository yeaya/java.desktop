#include <javax/print/attribute/standard/OutputDeviceAssigned.h>

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
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $TextSyntax = ::javax::print::attribute::TextSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _OutputDeviceAssigned_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OutputDeviceAssigned, serialVersionUID)},
	{}
};

$MethodInfo _OutputDeviceAssigned_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(OutputDeviceAssigned::*)($String*,$Locale*)>(&OutputDeviceAssigned::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OutputDeviceAssigned_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.OutputDeviceAssigned",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_OutputDeviceAssigned_FieldInfo_,
	_OutputDeviceAssigned_MethodInfo_
};

$Object* allocate$OutputDeviceAssigned($Class* clazz) {
	return $of($alloc(OutputDeviceAssigned));
}

int32_t OutputDeviceAssigned::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* OutputDeviceAssigned::toString() {
	 return this->$TextSyntax::toString();
}

$Object* OutputDeviceAssigned::clone() {
	 return this->$TextSyntax::clone();
}

void OutputDeviceAssigned::finalize() {
	this->$TextSyntax::finalize();
}

void OutputDeviceAssigned::init$($String* deviceName, $Locale* locale) {
	$TextSyntax::init$(deviceName, locale);
}

bool OutputDeviceAssigned::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(OutputDeviceAssigned, object));
}

$Class* OutputDeviceAssigned::getCategory() {
	return OutputDeviceAssigned::class$;
}

$String* OutputDeviceAssigned::getName() {
	return "output-device-assigned"_s;
}

OutputDeviceAssigned::OutputDeviceAssigned() {
}

$Class* OutputDeviceAssigned::load$($String* name, bool initialize) {
	$loadClass(OutputDeviceAssigned, name, initialize, &_OutputDeviceAssigned_ClassInfo_, allocate$OutputDeviceAssigned);
	return class$;
}

$Class* OutputDeviceAssigned::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax