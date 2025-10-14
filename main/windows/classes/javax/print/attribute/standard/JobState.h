#ifndef _javax_print_attribute_standard_JobState_h_
#define _javax_print_attribute_standard_JobState_h_
//$ class javax.print.attribute.standard.JobState
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>

#pragma push_macro("ABORTED")
#undef ABORTED
#pragma push_macro("CANCELED")
#undef CANCELED
#pragma push_macro("COMPLETED")
#undef COMPLETED
#pragma push_macro("PENDING")
#undef PENDING
#pragma push_macro("PENDING_HELD")
#undef PENDING_HELD
#pragma push_macro("PROCESSING")
#undef PROCESSING
#pragma push_macro("PROCESSING_STOPPED")
#undef PROCESSING_STOPPED
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export JobState : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintJobAttribute {
	$class(JobState, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintJobAttribute)
public:
	JobState();
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
	static const int64_t serialVersionUID = (int64_t)0x058EBCCE0FA09168;
	static ::javax::print::attribute::standard::JobState* UNKNOWN;
	static ::javax::print::attribute::standard::JobState* PENDING;
	static ::javax::print::attribute::standard::JobState* PENDING_HELD;
	static ::javax::print::attribute::standard::JobState* PROCESSING;
	static ::javax::print::attribute::standard::JobState* PROCESSING_STOPPED;
	static ::javax::print::attribute::standard::JobState* CANCELED;
	static ::javax::print::attribute::standard::JobState* ABORTED;
	static ::javax::print::attribute::standard::JobState* COMPLETED;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::JobState>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("ABORTED")
#pragma pop_macro("CANCELED")
#pragma pop_macro("COMPLETED")
#pragma pop_macro("PENDING")
#pragma pop_macro("PENDING_HELD")
#pragma pop_macro("PROCESSING")
#pragma pop_macro("PROCESSING_STOPPED")
#pragma pop_macro("UNKNOWN")

#endif // _javax_print_attribute_standard_JobState_h_