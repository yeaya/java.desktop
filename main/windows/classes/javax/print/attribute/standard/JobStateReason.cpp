#include <javax/print/attribute/standard/JobStateReason.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef ABORTED_BY_SYSTEM
#undef COMPRESSION_ERROR
#undef DOCUMENT_ACCESS_ERROR
#undef DOCUMENT_FORMAT_ERROR
#undef JOB_CANCELED_AT_DEVICE
#undef JOB_CANCELED_BY_OPERATOR
#undef JOB_CANCELED_BY_USER
#undef JOB_COMPLETED_SUCCESSFULLY
#undef JOB_COMPLETED_WITH_ERRORS
#undef JOB_COMPLETED_WITH_WARNINGS
#undef JOB_DATA_INSUFFICIENT
#undef JOB_HOLD_UNTIL_SPECIFIED
#undef JOB_INCOMING
#undef JOB_INTERPRETING
#undef JOB_OUTGOING
#undef JOB_PRINTING
#undef JOB_QUEUED
#undef JOB_QUEUED_FOR_MARKER
#undef JOB_RESTARTABLE
#undef JOB_TRANSFORMING
#undef PRINTER_STOPPED
#undef PRINTER_STOPPED_PARTLY
#undef PROCESSING_TO_STOP_POINT
#undef QUEUED_IN_DEVICE
#undef RESOURCES_ARE_NOT_READY
#undef SERVICE_OFF_LINE
#undef SUBMISSION_INTERRUPTED
#undef UNSUPPORTED_COMPRESSION
#undef UNSUPPORTED_DOCUMENT_FORMAT

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $JobStateReasonArray = $Array<::javax::print::attribute::standard::JobStateReason>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _JobStateReason_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobStateReason, serialVersionUID)},
	{"JOB_INCOMING", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_INCOMING)},
	{"JOB_DATA_INSUFFICIENT", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_DATA_INSUFFICIENT)},
	{"DOCUMENT_ACCESS_ERROR", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, DOCUMENT_ACCESS_ERROR)},
	{"SUBMISSION_INTERRUPTED", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, SUBMISSION_INTERRUPTED)},
	{"JOB_OUTGOING", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_OUTGOING)},
	{"JOB_HOLD_UNTIL_SPECIFIED", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_HOLD_UNTIL_SPECIFIED)},
	{"RESOURCES_ARE_NOT_READY", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, RESOURCES_ARE_NOT_READY)},
	{"PRINTER_STOPPED_PARTLY", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, PRINTER_STOPPED_PARTLY)},
	{"PRINTER_STOPPED", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, PRINTER_STOPPED)},
	{"JOB_INTERPRETING", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_INTERPRETING)},
	{"JOB_QUEUED", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_QUEUED)},
	{"JOB_TRANSFORMING", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_TRANSFORMING)},
	{"JOB_QUEUED_FOR_MARKER", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_QUEUED_FOR_MARKER)},
	{"JOB_PRINTING", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_PRINTING)},
	{"JOB_CANCELED_BY_USER", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_CANCELED_BY_USER)},
	{"JOB_CANCELED_BY_OPERATOR", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_CANCELED_BY_OPERATOR)},
	{"JOB_CANCELED_AT_DEVICE", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_CANCELED_AT_DEVICE)},
	{"ABORTED_BY_SYSTEM", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, ABORTED_BY_SYSTEM)},
	{"UNSUPPORTED_COMPRESSION", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, UNSUPPORTED_COMPRESSION)},
	{"COMPRESSION_ERROR", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, COMPRESSION_ERROR)},
	{"UNSUPPORTED_DOCUMENT_FORMAT", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, UNSUPPORTED_DOCUMENT_FORMAT)},
	{"DOCUMENT_FORMAT_ERROR", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, DOCUMENT_FORMAT_ERROR)},
	{"PROCESSING_TO_STOP_POINT", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, PROCESSING_TO_STOP_POINT)},
	{"SERVICE_OFF_LINE", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, SERVICE_OFF_LINE)},
	{"JOB_COMPLETED_SUCCESSFULLY", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_COMPLETED_SUCCESSFULLY)},
	{"JOB_COMPLETED_WITH_WARNINGS", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_COMPLETED_WITH_WARNINGS)},
	{"JOB_COMPLETED_WITH_ERRORS", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_COMPLETED_WITH_ERRORS)},
	{"JOB_RESTARTABLE", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, JOB_RESTARTABLE)},
	{"QUEUED_IN_DEVICE", "Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobStateReason, QUEUED_IN_DEVICE)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobStateReason, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/JobStateReason;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobStateReason, myEnumValueTable)},
	{}
};

$MethodInfo _JobStateReason_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(JobStateReason::*)(int32_t)>(&JobStateReason::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JobStateReason_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.JobStateReason",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.Attribute",
	_JobStateReason_FieldInfo_,
	_JobStateReason_MethodInfo_
};

$Object* allocate$JobStateReason($Class* clazz) {
	return $of($alloc(JobStateReason));
}

$Object* JobStateReason::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t JobStateReason::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* JobStateReason::toString() {
	 return this->$EnumSyntax::toString();
}

bool JobStateReason::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void JobStateReason::finalize() {
	this->$EnumSyntax::finalize();
}

JobStateReason* JobStateReason::JOB_INCOMING = nullptr;
JobStateReason* JobStateReason::JOB_DATA_INSUFFICIENT = nullptr;
JobStateReason* JobStateReason::DOCUMENT_ACCESS_ERROR = nullptr;
JobStateReason* JobStateReason::SUBMISSION_INTERRUPTED = nullptr;
JobStateReason* JobStateReason::JOB_OUTGOING = nullptr;
JobStateReason* JobStateReason::JOB_HOLD_UNTIL_SPECIFIED = nullptr;
JobStateReason* JobStateReason::RESOURCES_ARE_NOT_READY = nullptr;
JobStateReason* JobStateReason::PRINTER_STOPPED_PARTLY = nullptr;
JobStateReason* JobStateReason::PRINTER_STOPPED = nullptr;
JobStateReason* JobStateReason::JOB_INTERPRETING = nullptr;
JobStateReason* JobStateReason::JOB_QUEUED = nullptr;
JobStateReason* JobStateReason::JOB_TRANSFORMING = nullptr;
JobStateReason* JobStateReason::JOB_QUEUED_FOR_MARKER = nullptr;
JobStateReason* JobStateReason::JOB_PRINTING = nullptr;
JobStateReason* JobStateReason::JOB_CANCELED_BY_USER = nullptr;
JobStateReason* JobStateReason::JOB_CANCELED_BY_OPERATOR = nullptr;
JobStateReason* JobStateReason::JOB_CANCELED_AT_DEVICE = nullptr;
JobStateReason* JobStateReason::ABORTED_BY_SYSTEM = nullptr;
JobStateReason* JobStateReason::UNSUPPORTED_COMPRESSION = nullptr;
JobStateReason* JobStateReason::COMPRESSION_ERROR = nullptr;
JobStateReason* JobStateReason::UNSUPPORTED_DOCUMENT_FORMAT = nullptr;
JobStateReason* JobStateReason::DOCUMENT_FORMAT_ERROR = nullptr;
JobStateReason* JobStateReason::PROCESSING_TO_STOP_POINT = nullptr;
JobStateReason* JobStateReason::SERVICE_OFF_LINE = nullptr;
JobStateReason* JobStateReason::JOB_COMPLETED_SUCCESSFULLY = nullptr;
JobStateReason* JobStateReason::JOB_COMPLETED_WITH_WARNINGS = nullptr;
JobStateReason* JobStateReason::JOB_COMPLETED_WITH_ERRORS = nullptr;
JobStateReason* JobStateReason::JOB_RESTARTABLE = nullptr;
JobStateReason* JobStateReason::QUEUED_IN_DEVICE = nullptr;
$StringArray* JobStateReason::myStringTable = nullptr;
$JobStateReasonArray* JobStateReason::myEnumValueTable = nullptr;

void JobStateReason::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* JobStateReason::getStringTable() {
	return $cast($StringArray, $nc(JobStateReason::myStringTable)->clone());
}

$EnumSyntaxArray* JobStateReason::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(JobStateReason::myEnumValueTable)->clone());
}

$Class* JobStateReason::getCategory() {
	return JobStateReason::class$;
}

$String* JobStateReason::getName() {
	return "job-state-reason"_s;
}

void clinit$JobStateReason($Class* class$) {
	$assignStatic(JobStateReason::JOB_INCOMING, $new(JobStateReason, 0));
	$assignStatic(JobStateReason::JOB_DATA_INSUFFICIENT, $new(JobStateReason, 1));
	$assignStatic(JobStateReason::DOCUMENT_ACCESS_ERROR, $new(JobStateReason, 2));
	$assignStatic(JobStateReason::SUBMISSION_INTERRUPTED, $new(JobStateReason, 3));
	$assignStatic(JobStateReason::JOB_OUTGOING, $new(JobStateReason, 4));
	$assignStatic(JobStateReason::JOB_HOLD_UNTIL_SPECIFIED, $new(JobStateReason, 5));
	$assignStatic(JobStateReason::RESOURCES_ARE_NOT_READY, $new(JobStateReason, 6));
	$assignStatic(JobStateReason::PRINTER_STOPPED_PARTLY, $new(JobStateReason, 7));
	$assignStatic(JobStateReason::PRINTER_STOPPED, $new(JobStateReason, 8));
	$assignStatic(JobStateReason::JOB_INTERPRETING, $new(JobStateReason, 9));
	$assignStatic(JobStateReason::JOB_QUEUED, $new(JobStateReason, 10));
	$assignStatic(JobStateReason::JOB_TRANSFORMING, $new(JobStateReason, 11));
	$assignStatic(JobStateReason::JOB_QUEUED_FOR_MARKER, $new(JobStateReason, 12));
	$assignStatic(JobStateReason::JOB_PRINTING, $new(JobStateReason, 13));
	$assignStatic(JobStateReason::JOB_CANCELED_BY_USER, $new(JobStateReason, 14));
	$assignStatic(JobStateReason::JOB_CANCELED_BY_OPERATOR, $new(JobStateReason, 15));
	$assignStatic(JobStateReason::JOB_CANCELED_AT_DEVICE, $new(JobStateReason, 16));
	$assignStatic(JobStateReason::ABORTED_BY_SYSTEM, $new(JobStateReason, 17));
	$assignStatic(JobStateReason::UNSUPPORTED_COMPRESSION, $new(JobStateReason, 18));
	$assignStatic(JobStateReason::COMPRESSION_ERROR, $new(JobStateReason, 19));
	$assignStatic(JobStateReason::UNSUPPORTED_DOCUMENT_FORMAT, $new(JobStateReason, 20));
	$assignStatic(JobStateReason::DOCUMENT_FORMAT_ERROR, $new(JobStateReason, 21));
	$assignStatic(JobStateReason::PROCESSING_TO_STOP_POINT, $new(JobStateReason, 22));
	$assignStatic(JobStateReason::SERVICE_OFF_LINE, $new(JobStateReason, 23));
	$assignStatic(JobStateReason::JOB_COMPLETED_SUCCESSFULLY, $new(JobStateReason, 24));
	$assignStatic(JobStateReason::JOB_COMPLETED_WITH_WARNINGS, $new(JobStateReason, 25));
	$assignStatic(JobStateReason::JOB_COMPLETED_WITH_ERRORS, $new(JobStateReason, 26));
	$assignStatic(JobStateReason::JOB_RESTARTABLE, $new(JobStateReason, 27));
	$assignStatic(JobStateReason::QUEUED_IN_DEVICE, $new(JobStateReason, 28));
	$assignStatic(JobStateReason::myStringTable, $new($StringArray, {
		"job-incoming"_s,
		"job-data-insufficient"_s,
		"document-access-error"_s,
		"submission-interrupted"_s,
		"job-outgoing"_s,
		"job-hold-until-specified"_s,
		"resources-are-not-ready"_s,
		"printer-stopped-partly"_s,
		"printer-stopped"_s,
		"job-interpreting"_s,
		"job-queued"_s,
		"job-transforming"_s,
		"job-queued-for-marker"_s,
		"job-printing"_s,
		"job-canceled-by-user"_s,
		"job-canceled-by-operator"_s,
		"job-canceled-at-device"_s,
		"aborted-by-system"_s,
		"unsupported-compression"_s,
		"compression-error"_s,
		"unsupported-document-format"_s,
		"document-format-error"_s,
		"processing-to-stop-point"_s,
		"service-off-line"_s,
		"job-completed-successfully"_s,
		"job-completed-with-warnings"_s,
		"job-completed-with-errors"_s,
		"job-restartable"_s,
		"queued-in-device"_s
	}));
	$assignStatic(JobStateReason::myEnumValueTable, $new($JobStateReasonArray, {
		JobStateReason::JOB_INCOMING,
		JobStateReason::JOB_DATA_INSUFFICIENT,
		JobStateReason::DOCUMENT_ACCESS_ERROR,
		JobStateReason::SUBMISSION_INTERRUPTED,
		JobStateReason::JOB_OUTGOING,
		JobStateReason::JOB_HOLD_UNTIL_SPECIFIED,
		JobStateReason::RESOURCES_ARE_NOT_READY,
		JobStateReason::PRINTER_STOPPED_PARTLY,
		JobStateReason::PRINTER_STOPPED,
		JobStateReason::JOB_INTERPRETING,
		JobStateReason::JOB_QUEUED,
		JobStateReason::JOB_TRANSFORMING,
		JobStateReason::JOB_QUEUED_FOR_MARKER,
		JobStateReason::JOB_PRINTING,
		JobStateReason::JOB_CANCELED_BY_USER,
		JobStateReason::JOB_CANCELED_BY_OPERATOR,
		JobStateReason::JOB_CANCELED_AT_DEVICE,
		JobStateReason::ABORTED_BY_SYSTEM,
		JobStateReason::UNSUPPORTED_COMPRESSION,
		JobStateReason::COMPRESSION_ERROR,
		JobStateReason::UNSUPPORTED_DOCUMENT_FORMAT,
		JobStateReason::DOCUMENT_FORMAT_ERROR,
		JobStateReason::PROCESSING_TO_STOP_POINT,
		JobStateReason::SERVICE_OFF_LINE,
		JobStateReason::JOB_COMPLETED_SUCCESSFULLY,
		JobStateReason::JOB_COMPLETED_WITH_WARNINGS,
		JobStateReason::JOB_COMPLETED_WITH_ERRORS,
		JobStateReason::JOB_RESTARTABLE,
		JobStateReason::QUEUED_IN_DEVICE
	}));
}

JobStateReason::JobStateReason() {
}

$Class* JobStateReason::load$($String* name, bool initialize) {
	$loadClass(JobStateReason, name, initialize, &_JobStateReason_ClassInfo_, clinit$JobStateReason, allocate$JobStateReason);
	return class$;
}

$Class* JobStateReason::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax