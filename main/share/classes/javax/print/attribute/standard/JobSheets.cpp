#include <javax/print/attribute/standard/JobSheets.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef NONE
#undef STANDARD

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $JobSheetsArray = $Array<::javax::print::attribute::standard::JobSheets>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobSheets_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobSheets, serialVersionUID)},
	{"NONE", "Ljavax/print/attribute/standard/JobSheets;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobSheets, NONE)},
	{"STANDARD", "Ljavax/print/attribute/standard/JobSheets;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobSheets, STANDARD)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobSheets, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/JobSheets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobSheets, myEnumValueTable)},
	{}
};

$MethodInfo _JobSheets_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(JobSheets::*)(int32_t)>(&JobSheets::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobSheets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.JobSheets",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_JobSheets_FieldInfo_,
	_JobSheets_MethodInfo_
};

$Object* allocate$JobSheets($Class* clazz) {
	return $of($alloc(JobSheets));
}

$Object* JobSheets::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t JobSheets::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* JobSheets::toString() {
	 return this->$EnumSyntax::toString();
}

bool JobSheets::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void JobSheets::finalize() {
	this->$EnumSyntax::finalize();
}

JobSheets* JobSheets::NONE = nullptr;
JobSheets* JobSheets::STANDARD = nullptr;
$StringArray* JobSheets::myStringTable = nullptr;
$JobSheetsArray* JobSheets::myEnumValueTable = nullptr;

void JobSheets::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* JobSheets::getStringTable() {
	return $cast($StringArray, $nc(JobSheets::myStringTable)->clone());
}

$EnumSyntaxArray* JobSheets::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(JobSheets::myEnumValueTable)->clone());
}

$Class* JobSheets::getCategory() {
	return JobSheets::class$;
}

$String* JobSheets::getName() {
	return "job-sheets"_s;
}

void clinit$JobSheets($Class* class$) {
	$assignStatic(JobSheets::NONE, $new(JobSheets, 0));
	$assignStatic(JobSheets::STANDARD, $new(JobSheets, 1));
	$assignStatic(JobSheets::myStringTable, $new($StringArray, {
		"none"_s,
		"standard"_s
	}));
	$assignStatic(JobSheets::myEnumValueTable, $new($JobSheetsArray, {
		JobSheets::NONE,
		JobSheets::STANDARD
	}));
}

JobSheets::JobSheets() {
}

$Class* JobSheets::load$($String* name, bool initialize) {
	$loadClass(JobSheets, name, initialize, &_JobSheets_ClassInfo_, clinit$JobSheets, allocate$JobSheets);
	return class$;
}

$Class* JobSheets::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax