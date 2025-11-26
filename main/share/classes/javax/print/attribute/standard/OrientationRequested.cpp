#include <javax/print/attribute/standard/OrientationRequested.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef LANDSCAPE
#undef PORTRAIT
#undef REVERSE_LANDSCAPE
#undef REVERSE_PORTRAIT

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $OrientationRequestedArray = $Array<::javax::print::attribute::standard::OrientationRequested>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _OrientationRequested_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OrientationRequested, serialVersionUID)},
	{"PORTRAIT", "Ljavax/print/attribute/standard/OrientationRequested;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OrientationRequested, PORTRAIT)},
	{"LANDSCAPE", "Ljavax/print/attribute/standard/OrientationRequested;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OrientationRequested, LANDSCAPE)},
	{"REVERSE_LANDSCAPE", "Ljavax/print/attribute/standard/OrientationRequested;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OrientationRequested, REVERSE_LANDSCAPE)},
	{"REVERSE_PORTRAIT", "Ljavax/print/attribute/standard/OrientationRequested;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OrientationRequested, REVERSE_PORTRAIT)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OrientationRequested, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/OrientationRequested;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OrientationRequested, myEnumValueTable)},
	{}
};

$MethodInfo _OrientationRequested_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(OrientationRequested::*)(int32_t)>(&OrientationRequested::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getOffset", "()I", nullptr, $PROTECTED},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OrientationRequested_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.OrientationRequested",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_OrientationRequested_FieldInfo_,
	_OrientationRequested_MethodInfo_
};

$Object* allocate$OrientationRequested($Class* clazz) {
	return $of($alloc(OrientationRequested));
}

$Object* OrientationRequested::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t OrientationRequested::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* OrientationRequested::toString() {
	 return this->$EnumSyntax::toString();
}

bool OrientationRequested::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void OrientationRequested::finalize() {
	this->$EnumSyntax::finalize();
}

OrientationRequested* OrientationRequested::PORTRAIT = nullptr;
OrientationRequested* OrientationRequested::LANDSCAPE = nullptr;
OrientationRequested* OrientationRequested::REVERSE_LANDSCAPE = nullptr;
OrientationRequested* OrientationRequested::REVERSE_PORTRAIT = nullptr;
$StringArray* OrientationRequested::myStringTable = nullptr;
$OrientationRequestedArray* OrientationRequested::myEnumValueTable = nullptr;

void OrientationRequested::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* OrientationRequested::getStringTable() {
	return OrientationRequested::myStringTable;
}

$EnumSyntaxArray* OrientationRequested::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, OrientationRequested::myEnumValueTable);
}

int32_t OrientationRequested::getOffset() {
	return 3;
}

$Class* OrientationRequested::getCategory() {
	return OrientationRequested::class$;
}

$String* OrientationRequested::getName() {
	return "orientation-requested"_s;
}

void clinit$OrientationRequested($Class* class$) {
	$assignStatic(OrientationRequested::PORTRAIT, $new(OrientationRequested, 3));
	$assignStatic(OrientationRequested::LANDSCAPE, $new(OrientationRequested, 4));
	$assignStatic(OrientationRequested::REVERSE_LANDSCAPE, $new(OrientationRequested, 5));
	$assignStatic(OrientationRequested::REVERSE_PORTRAIT, $new(OrientationRequested, 6));
	$assignStatic(OrientationRequested::myStringTable, $new($StringArray, {
		"portrait"_s,
		"landscape"_s,
		"reverse-landscape"_s,
		"reverse-portrait"_s
	}));
	$assignStatic(OrientationRequested::myEnumValueTable, $new($OrientationRequestedArray, {
		OrientationRequested::PORTRAIT,
		OrientationRequested::LANDSCAPE,
		OrientationRequested::REVERSE_LANDSCAPE,
		OrientationRequested::REVERSE_PORTRAIT
	}));
}

OrientationRequested::OrientationRequested() {
}

$Class* OrientationRequested::load$($String* name, bool initialize) {
	$loadClass(OrientationRequested, name, initialize, &_OrientationRequested_ClassInfo_, clinit$OrientationRequested, allocate$OrientationRequested);
	return class$;
}

$Class* OrientationRequested::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax