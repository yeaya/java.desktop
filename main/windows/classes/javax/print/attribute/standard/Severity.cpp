#include <javax/print/attribute/standard/Severity.h>

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

#undef ERROR
#undef REPORT
#undef WARNING

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $SeverityArray = $Array<::javax::print::attribute::standard::Severity>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _Severity_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Severity, serialVersionUID)},
	{"REPORT", "Ljavax/print/attribute/standard/Severity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Severity, REPORT)},
	{"WARNING", "Ljavax/print/attribute/standard/Severity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Severity, WARNING)},
	{"ERROR", "Ljavax/print/attribute/standard/Severity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Severity, ERROR)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Severity, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/Severity;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Severity, myEnumValueTable)},
	{}
};

$MethodInfo _Severity_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Severity::*)(int32_t)>(&Severity::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Severity_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.Severity",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.Attribute",
	_Severity_FieldInfo_,
	_Severity_MethodInfo_
};

$Object* allocate$Severity($Class* clazz) {
	return $of($alloc(Severity));
}

$Object* Severity::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t Severity::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* Severity::toString() {
	 return this->$EnumSyntax::toString();
}

bool Severity::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void Severity::finalize() {
	this->$EnumSyntax::finalize();
}


Severity* Severity::REPORT = nullptr;

Severity* Severity::WARNING = nullptr;

Severity* Severity::ERROR = nullptr;

$StringArray* Severity::myStringTable = nullptr;

$SeverityArray* Severity::myEnumValueTable = nullptr;

void Severity::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* Severity::getStringTable() {
	return Severity::myStringTable;
}

$EnumSyntaxArray* Severity::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, Severity::myEnumValueTable);
}

$Class* Severity::getCategory() {
	return Severity::class$;
}

$String* Severity::getName() {
	return "severity"_s;
}

void clinit$Severity($Class* class$) {
	$assignStatic(Severity::REPORT, $new(Severity, 0));
	$assignStatic(Severity::WARNING, $new(Severity, 1));
	$assignStatic(Severity::ERROR, $new(Severity, 2));
	$assignStatic(Severity::myStringTable, $new($StringArray, {
		"report"_s,
		"warning"_s,
		"error"_s
	}));
	$assignStatic(Severity::myEnumValueTable, $new($SeverityArray, {
		Severity::REPORT,
		Severity::WARNING,
		Severity::ERROR
	}));
}

Severity::Severity() {
}

$Class* Severity::load$($String* name, bool initialize) {
	$loadClass(Severity, name, initialize, &_Severity_ClassInfo_, clinit$Severity, allocate$Severity);
	return class$;
}

$Class* Severity::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax