#include <javax/print/attribute/standard/PrinterIsAcceptingJobs.h>

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

#undef ACCEPTING_JOBS
#undef NOT_ACCEPTING_JOBS

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $PrinterIsAcceptingJobsArray = $Array<::javax::print::attribute::standard::PrinterIsAcceptingJobs>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterIsAcceptingJobs_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterIsAcceptingJobs, serialVersionUID)},
	{"NOT_ACCEPTING_JOBS", "Ljavax/print/attribute/standard/PrinterIsAcceptingJobs;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterIsAcceptingJobs, NOT_ACCEPTING_JOBS)},
	{"ACCEPTING_JOBS", "Ljavax/print/attribute/standard/PrinterIsAcceptingJobs;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterIsAcceptingJobs, ACCEPTING_JOBS)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrinterIsAcceptingJobs, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/PrinterIsAcceptingJobs;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrinterIsAcceptingJobs, myEnumValueTable)},
	{}
};

$MethodInfo _PrinterIsAcceptingJobs_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(PrinterIsAcceptingJobs::*)(int32_t)>(&PrinterIsAcceptingJobs::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterIsAcceptingJobs_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterIsAcceptingJobs",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterIsAcceptingJobs_FieldInfo_,
	_PrinterIsAcceptingJobs_MethodInfo_
};

$Object* allocate$PrinterIsAcceptingJobs($Class* clazz) {
	return $of($alloc(PrinterIsAcceptingJobs));
}

$Object* PrinterIsAcceptingJobs::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t PrinterIsAcceptingJobs::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* PrinterIsAcceptingJobs::toString() {
	 return this->$EnumSyntax::toString();
}

bool PrinterIsAcceptingJobs::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void PrinterIsAcceptingJobs::finalize() {
	this->$EnumSyntax::finalize();
}


PrinterIsAcceptingJobs* PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS = nullptr;

PrinterIsAcceptingJobs* PrinterIsAcceptingJobs::ACCEPTING_JOBS = nullptr;

$StringArray* PrinterIsAcceptingJobs::myStringTable = nullptr;

$PrinterIsAcceptingJobsArray* PrinterIsAcceptingJobs::myEnumValueTable = nullptr;

void PrinterIsAcceptingJobs::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* PrinterIsAcceptingJobs::getStringTable() {
	return PrinterIsAcceptingJobs::myStringTable;
}

$EnumSyntaxArray* PrinterIsAcceptingJobs::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, PrinterIsAcceptingJobs::myEnumValueTable);
}

$Class* PrinterIsAcceptingJobs::getCategory() {
	return PrinterIsAcceptingJobs::class$;
}

$String* PrinterIsAcceptingJobs::getName() {
	return "printer-is-accepting-jobs"_s;
}

void clinit$PrinterIsAcceptingJobs($Class* class$) {
	$assignStatic(PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS, $new(PrinterIsAcceptingJobs, 0));
	$assignStatic(PrinterIsAcceptingJobs::ACCEPTING_JOBS, $new(PrinterIsAcceptingJobs, 1));
	$assignStatic(PrinterIsAcceptingJobs::myStringTable, $new($StringArray, {
		"not-accepting-jobs"_s,
		"accepting-jobs"_s
	}));
	$assignStatic(PrinterIsAcceptingJobs::myEnumValueTable, $new($PrinterIsAcceptingJobsArray, {
		PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS,
		PrinterIsAcceptingJobs::ACCEPTING_JOBS
	}));
}

PrinterIsAcceptingJobs::PrinterIsAcceptingJobs() {
}

$Class* PrinterIsAcceptingJobs::load$($String* name, bool initialize) {
	$loadClass(PrinterIsAcceptingJobs, name, initialize, &_PrinterIsAcceptingJobs_ClassInfo_, clinit$PrinterIsAcceptingJobs, allocate$PrinterIsAcceptingJobs);
	return class$;
}

$Class* PrinterIsAcceptingJobs::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax