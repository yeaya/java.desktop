#include <javax/print/attribute/standard/ColorSupported.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef NOT_SUPPORTED
#undef SUPPORTED

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $ColorSupportedArray = $Array<::javax::print::attribute::standard::ColorSupported>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _ColorSupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ColorSupported, serialVersionUID)},
	{"NOT_SUPPORTED", "Ljavax/print/attribute/standard/ColorSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorSupported, NOT_SUPPORTED)},
	{"SUPPORTED", "Ljavax/print/attribute/standard/ColorSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorSupported, SUPPORTED)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ColorSupported, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/ColorSupported;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ColorSupported, myEnumValueTable)},
	{}
};

$MethodInfo _ColorSupported_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(ColorSupported::*)(int32_t)>(&ColorSupported::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ColorSupported_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.ColorSupported",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_ColorSupported_FieldInfo_,
	_ColorSupported_MethodInfo_
};

$Object* allocate$ColorSupported($Class* clazz) {
	return $of($alloc(ColorSupported));
}

$Object* ColorSupported::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t ColorSupported::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* ColorSupported::toString() {
	 return this->$EnumSyntax::toString();
}

bool ColorSupported::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void ColorSupported::finalize() {
	this->$EnumSyntax::finalize();
}


ColorSupported* ColorSupported::NOT_SUPPORTED = nullptr;

ColorSupported* ColorSupported::SUPPORTED = nullptr;

$StringArray* ColorSupported::myStringTable = nullptr;

$ColorSupportedArray* ColorSupported::myEnumValueTable = nullptr;

void ColorSupported::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* ColorSupported::getStringTable() {
	return ColorSupported::myStringTable;
}

$EnumSyntaxArray* ColorSupported::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, ColorSupported::myEnumValueTable);
}

$Class* ColorSupported::getCategory() {
	return ColorSupported::class$;
}

$String* ColorSupported::getName() {
	return "color-supported"_s;
}

void clinit$ColorSupported($Class* class$) {
	$assignStatic(ColorSupported::NOT_SUPPORTED, $new(ColorSupported, 0));
	$assignStatic(ColorSupported::SUPPORTED, $new(ColorSupported, 1));
	$assignStatic(ColorSupported::myStringTable, $new($StringArray, {
		"not-supported"_s,
		"supported"_s
	}));
	$assignStatic(ColorSupported::myEnumValueTable, $new($ColorSupportedArray, {
		ColorSupported::NOT_SUPPORTED,
		ColorSupported::SUPPORTED
	}));
}

ColorSupported::ColorSupported() {
}

$Class* ColorSupported::load$($String* name, bool initialize) {
	$loadClass(ColorSupported, name, initialize, &_ColorSupported_ClassInfo_, clinit$ColorSupported, allocate$ColorSupported);
	return class$;
}

$Class* ColorSupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax