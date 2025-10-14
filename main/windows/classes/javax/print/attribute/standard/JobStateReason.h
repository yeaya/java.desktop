#ifndef _javax_print_attribute_standard_JobStateReason_h_
#define _javax_print_attribute_standard_JobStateReason_h_
//$ class javax.print.attribute.standard.JobStateReason
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.Attribute

#include <java/lang/Array.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/EnumSyntax.h>

#pragma push_macro("ABORTED_BY_SYSTEM")
#undef ABORTED_BY_SYSTEM
#pragma push_macro("COMPRESSION_ERROR")
#undef COMPRESSION_ERROR
#pragma push_macro("DOCUMENT_ACCESS_ERROR")
#undef DOCUMENT_ACCESS_ERROR
#pragma push_macro("DOCUMENT_FORMAT_ERROR")
#undef DOCUMENT_FORMAT_ERROR
#pragma push_macro("JOB_CANCELED_AT_DEVICE")
#undef JOB_CANCELED_AT_DEVICE
#pragma push_macro("JOB_CANCELED_BY_OPERATOR")
#undef JOB_CANCELED_BY_OPERATOR
#pragma push_macro("JOB_CANCELED_BY_USER")
#undef JOB_CANCELED_BY_USER
#pragma push_macro("JOB_COMPLETED_SUCCESSFULLY")
#undef JOB_COMPLETED_SUCCESSFULLY
#pragma push_macro("JOB_COMPLETED_WITH_ERRORS")
#undef JOB_COMPLETED_WITH_ERRORS
#pragma push_macro("JOB_COMPLETED_WITH_WARNINGS")
#undef JOB_COMPLETED_WITH_WARNINGS
#pragma push_macro("JOB_DATA_INSUFFICIENT")
#undef JOB_DATA_INSUFFICIENT
#pragma push_macro("JOB_HOLD_UNTIL_SPECIFIED")
#undef JOB_HOLD_UNTIL_SPECIFIED
#pragma push_macro("JOB_INCOMING")
#undef JOB_INCOMING
#pragma push_macro("JOB_INTERPRETING")
#undef JOB_INTERPRETING
#pragma push_macro("JOB_OUTGOING")
#undef JOB_OUTGOING
#pragma push_macro("JOB_PRINTING")
#undef JOB_PRINTING
#pragma push_macro("JOB_QUEUED")
#undef JOB_QUEUED
#pragma push_macro("JOB_QUEUED_FOR_MARKER")
#undef JOB_QUEUED_FOR_MARKER
#pragma push_macro("JOB_RESTARTABLE")
#undef JOB_RESTARTABLE
#pragma push_macro("JOB_TRANSFORMING")
#undef JOB_TRANSFORMING
#pragma push_macro("PRINTER_STOPPED")
#undef PRINTER_STOPPED
#pragma push_macro("PRINTER_STOPPED_PARTLY")
#undef PRINTER_STOPPED_PARTLY
#pragma push_macro("PROCESSING_TO_STOP_POINT")
#undef PROCESSING_TO_STOP_POINT
#pragma push_macro("QUEUED_IN_DEVICE")
#undef QUEUED_IN_DEVICE
#pragma push_macro("RESOURCES_ARE_NOT_READY")
#undef RESOURCES_ARE_NOT_READY
#pragma push_macro("SERVICE_OFF_LINE")
#undef SERVICE_OFF_LINE
#pragma push_macro("SUBMISSION_INTERRUPTED")
#undef SUBMISSION_INTERRUPTED
#pragma push_macro("UNSUPPORTED_COMPRESSION")
#undef UNSUPPORTED_COMPRESSION
#pragma push_macro("UNSUPPORTED_DOCUMENT_FORMAT")
#undef UNSUPPORTED_DOCUMENT_FORMAT

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export JobStateReason : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::Attribute {
	$class(JobStateReason, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::Attribute)
public:
	JobStateReason();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual $Class* getCategory() override;
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $String* getName() override;
	virtual $StringArray* getStringTable() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x86594977E28EE1F0;
	static ::javax::print::attribute::standard::JobStateReason* JOB_INCOMING;
	static ::javax::print::attribute::standard::JobStateReason* JOB_DATA_INSUFFICIENT;
	static ::javax::print::attribute::standard::JobStateReason* DOCUMENT_ACCESS_ERROR;
	static ::javax::print::attribute::standard::JobStateReason* SUBMISSION_INTERRUPTED;
	static ::javax::print::attribute::standard::JobStateReason* JOB_OUTGOING;
	static ::javax::print::attribute::standard::JobStateReason* JOB_HOLD_UNTIL_SPECIFIED;
	static ::javax::print::attribute::standard::JobStateReason* RESOURCES_ARE_NOT_READY;
	static ::javax::print::attribute::standard::JobStateReason* PRINTER_STOPPED_PARTLY;
	static ::javax::print::attribute::standard::JobStateReason* PRINTER_STOPPED;
	static ::javax::print::attribute::standard::JobStateReason* JOB_INTERPRETING;
	static ::javax::print::attribute::standard::JobStateReason* JOB_QUEUED;
	static ::javax::print::attribute::standard::JobStateReason* JOB_TRANSFORMING;
	static ::javax::print::attribute::standard::JobStateReason* JOB_QUEUED_FOR_MARKER;
	static ::javax::print::attribute::standard::JobStateReason* JOB_PRINTING;
	static ::javax::print::attribute::standard::JobStateReason* JOB_CANCELED_BY_USER;
	static ::javax::print::attribute::standard::JobStateReason* JOB_CANCELED_BY_OPERATOR;
	static ::javax::print::attribute::standard::JobStateReason* JOB_CANCELED_AT_DEVICE;
	static ::javax::print::attribute::standard::JobStateReason* ABORTED_BY_SYSTEM;
	static ::javax::print::attribute::standard::JobStateReason* UNSUPPORTED_COMPRESSION;
	static ::javax::print::attribute::standard::JobStateReason* COMPRESSION_ERROR;
	static ::javax::print::attribute::standard::JobStateReason* UNSUPPORTED_DOCUMENT_FORMAT;
	static ::javax::print::attribute::standard::JobStateReason* DOCUMENT_FORMAT_ERROR;
	static ::javax::print::attribute::standard::JobStateReason* PROCESSING_TO_STOP_POINT;
	static ::javax::print::attribute::standard::JobStateReason* SERVICE_OFF_LINE;
	static ::javax::print::attribute::standard::JobStateReason* JOB_COMPLETED_SUCCESSFULLY;
	static ::javax::print::attribute::standard::JobStateReason* JOB_COMPLETED_WITH_WARNINGS;
	static ::javax::print::attribute::standard::JobStateReason* JOB_COMPLETED_WITH_ERRORS;
	static ::javax::print::attribute::standard::JobStateReason* JOB_RESTARTABLE;
	static ::javax::print::attribute::standard::JobStateReason* QUEUED_IN_DEVICE;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::JobStateReason>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("ABORTED_BY_SYSTEM")
#pragma pop_macro("COMPRESSION_ERROR")
#pragma pop_macro("DOCUMENT_ACCESS_ERROR")
#pragma pop_macro("DOCUMENT_FORMAT_ERROR")
#pragma pop_macro("JOB_CANCELED_AT_DEVICE")
#pragma pop_macro("JOB_CANCELED_BY_OPERATOR")
#pragma pop_macro("JOB_CANCELED_BY_USER")
#pragma pop_macro("JOB_COMPLETED_SUCCESSFULLY")
#pragma pop_macro("JOB_COMPLETED_WITH_ERRORS")
#pragma pop_macro("JOB_COMPLETED_WITH_WARNINGS")
#pragma pop_macro("JOB_DATA_INSUFFICIENT")
#pragma pop_macro("JOB_HOLD_UNTIL_SPECIFIED")
#pragma pop_macro("JOB_INCOMING")
#pragma pop_macro("JOB_INTERPRETING")
#pragma pop_macro("JOB_OUTGOING")
#pragma pop_macro("JOB_PRINTING")
#pragma pop_macro("JOB_QUEUED")
#pragma pop_macro("JOB_QUEUED_FOR_MARKER")
#pragma pop_macro("JOB_RESTARTABLE")
#pragma pop_macro("JOB_TRANSFORMING")
#pragma pop_macro("PRINTER_STOPPED")
#pragma pop_macro("PRINTER_STOPPED_PARTLY")
#pragma pop_macro("PROCESSING_TO_STOP_POINT")
#pragma pop_macro("QUEUED_IN_DEVICE")
#pragma pop_macro("RESOURCES_ARE_NOT_READY")
#pragma pop_macro("SERVICE_OFF_LINE")
#pragma pop_macro("SUBMISSION_INTERRUPTED")
#pragma pop_macro("UNSUPPORTED_COMPRESSION")
#pragma pop_macro("UNSUPPORTED_DOCUMENT_FORMAT")

#endif // _javax_print_attribute_standard_JobStateReason_h_