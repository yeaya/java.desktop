#include <javax/print/attribute/standard/PDLOverrideSupported.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef ATTEMPTED
#undef NOT_ATTEMPTED

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $PDLOverrideSupportedArray = $Array<::javax::print::attribute::standard::PDLOverrideSupported>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PDLOverrideSupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PDLOverrideSupported, serialVersionUID)},
	{"NOT_ATTEMPTED", "Ljavax/print/attribute/standard/PDLOverrideSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PDLOverrideSupported, NOT_ATTEMPTED)},
	{"ATTEMPTED", "Ljavax/print/attribute/standard/PDLOverrideSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PDLOverrideSupported, ATTEMPTED)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PDLOverrideSupported, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/PDLOverrideSupported;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PDLOverrideSupported, myEnumValueTable)},
	{}
};

$MethodInfo _PDLOverrideSupported_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(PDLOverrideSupported::*)(int32_t)>(&PDLOverrideSupported::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PDLOverrideSupported_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.PDLOverrideSupported",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PDLOverrideSupported_FieldInfo_,
	_PDLOverrideSupported_MethodInfo_
};

$Object* allocate$PDLOverrideSupported($Class* clazz) {
	return $of($alloc(PDLOverrideSupported));
}

$Object* PDLOverrideSupported::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t PDLOverrideSupported::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* PDLOverrideSupported::toString() {
	 return this->$EnumSyntax::toString();
}

bool PDLOverrideSupported::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void PDLOverrideSupported::finalize() {
	this->$EnumSyntax::finalize();
}

PDLOverrideSupported* PDLOverrideSupported::NOT_ATTEMPTED = nullptr;
PDLOverrideSupported* PDLOverrideSupported::ATTEMPTED = nullptr;
$StringArray* PDLOverrideSupported::myStringTable = nullptr;
$PDLOverrideSupportedArray* PDLOverrideSupported::myEnumValueTable = nullptr;

void PDLOverrideSupported::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* PDLOverrideSupported::getStringTable() {
	return $cast($StringArray, $nc(PDLOverrideSupported::myStringTable)->clone());
}

$EnumSyntaxArray* PDLOverrideSupported::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(PDLOverrideSupported::myEnumValueTable)->clone());
}

$Class* PDLOverrideSupported::getCategory() {
	return PDLOverrideSupported::class$;
}

$String* PDLOverrideSupported::getName() {
	return "pdl-override-supported"_s;
}

void clinit$PDLOverrideSupported($Class* class$) {
	$assignStatic(PDLOverrideSupported::NOT_ATTEMPTED, $new(PDLOverrideSupported, 0));
	$assignStatic(PDLOverrideSupported::ATTEMPTED, $new(PDLOverrideSupported, 1));
	$assignStatic(PDLOverrideSupported::myStringTable, $new($StringArray, {
		"not-attempted"_s,
		"attempted"_s
	}));
	$assignStatic(PDLOverrideSupported::myEnumValueTable, $new($PDLOverrideSupportedArray, {
		PDLOverrideSupported::NOT_ATTEMPTED,
		PDLOverrideSupported::ATTEMPTED
	}));
}

PDLOverrideSupported::PDLOverrideSupported() {
}

$Class* PDLOverrideSupported::load$($String* name, bool initialize) {
	$loadClass(PDLOverrideSupported, name, initialize, &_PDLOverrideSupported_ClassInfo_, clinit$PDLOverrideSupported, allocate$PDLOverrideSupported);
	return class$;
}

$Class* PDLOverrideSupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax