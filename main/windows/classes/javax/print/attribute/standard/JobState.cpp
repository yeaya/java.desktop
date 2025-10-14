#include <javax/print/attribute/standard/JobState.h>

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

#undef ABORTED
#undef CANCELED
#undef COMPLETED
#undef PENDING
#undef PENDING_HELD
#undef PROCESSING
#undef PROCESSING_STOPPED
#undef UNKNOWN

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $JobStateArray = $Array<::javax::print::attribute::standard::JobState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobState_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobState, serialVersionUID)},
	{"UNKNOWN", "Ljavax/print/attribute/standard/JobState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobState, UNKNOWN)},
	{"PENDING", "Ljavax/print/attribute/standard/JobState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobState, PENDING)},
	{"PENDING_HELD", "Ljavax/print/attribute/standard/JobState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobState, PENDING_HELD)},
	{"PROCESSING", "Ljavax/print/attribute/standard/JobState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobState, PROCESSING)},
	{"PROCESSING_STOPPED", "Ljavax/print/attribute/standard/JobState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobState, PROCESSING_STOPPED)},
	{"CANCELED", "Ljavax/print/attribute/standard/JobState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobState, CANCELED)},
	{"ABORTED", "Ljavax/print/attribute/standard/JobState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobState, ABORTED)},
	{"COMPLETED", "Ljavax/print/attribute/standard/JobState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobState, COMPLETED)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobState, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/JobState;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobState, myEnumValueTable)},
	{}
};

$MethodInfo _JobState_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(JobState::*)(int32_t)>(&JobState::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.JobState",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_JobState_FieldInfo_,
	_JobState_MethodInfo_
};

$Object* allocate$JobState($Class* clazz) {
	return $of($alloc(JobState));
}

$Object* JobState::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t JobState::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* JobState::toString() {
	 return this->$EnumSyntax::toString();
}

bool JobState::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void JobState::finalize() {
	this->$EnumSyntax::finalize();
}


JobState* JobState::UNKNOWN = nullptr;

JobState* JobState::PENDING = nullptr;

JobState* JobState::PENDING_HELD = nullptr;

JobState* JobState::PROCESSING = nullptr;

JobState* JobState::PROCESSING_STOPPED = nullptr;

JobState* JobState::CANCELED = nullptr;

JobState* JobState::ABORTED = nullptr;

JobState* JobState::COMPLETED = nullptr;

$StringArray* JobState::myStringTable = nullptr;

$JobStateArray* JobState::myEnumValueTable = nullptr;

void JobState::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* JobState::getStringTable() {
	return JobState::myStringTable;
}

$EnumSyntaxArray* JobState::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, JobState::myEnumValueTable);
}

$Class* JobState::getCategory() {
	return JobState::class$;
}

$String* JobState::getName() {
	return "job-state"_s;
}

void clinit$JobState($Class* class$) {
	$assignStatic(JobState::UNKNOWN, $new(JobState, 0));
	$assignStatic(JobState::PENDING, $new(JobState, 3));
	$assignStatic(JobState::PENDING_HELD, $new(JobState, 4));
	$assignStatic(JobState::PROCESSING, $new(JobState, 5));
	$assignStatic(JobState::PROCESSING_STOPPED, $new(JobState, 6));
	$assignStatic(JobState::CANCELED, $new(JobState, 7));
	$assignStatic(JobState::ABORTED, $new(JobState, 8));
	$assignStatic(JobState::COMPLETED, $new(JobState, 9));
	$assignStatic(JobState::myStringTable, $new($StringArray, {
		"unknown"_s,
		($String*)nullptr,
		($String*)nullptr,
		"pending"_s,
		"pending-held"_s,
		"processing"_s,
		"processing-stopped"_s,
		"canceled"_s,
		"aborted"_s,
		"completed"_s
	}));
	$assignStatic(JobState::myEnumValueTable, $new($JobStateArray, {
		JobState::UNKNOWN,
		(JobState*)nullptr,
		(JobState*)nullptr,
		JobState::PENDING,
		JobState::PENDING_HELD,
		JobState::PROCESSING,
		JobState::PROCESSING_STOPPED,
		JobState::CANCELED,
		JobState::ABORTED,
		JobState::COMPLETED
	}));
}

JobState::JobState() {
}

$Class* JobState::load$($String* name, bool initialize) {
	$loadClass(JobState, name, initialize, &_JobState_ClassInfo_, clinit$JobState, allocate$JobState);
	return class$;
}

$Class* JobState::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax