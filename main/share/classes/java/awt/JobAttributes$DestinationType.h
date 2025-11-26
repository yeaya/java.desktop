#ifndef _java_awt_JobAttributes$DestinationType_h_
#define _java_awt_JobAttributes$DestinationType_h_
//$ class java.awt.JobAttributes$DestinationType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("FILE")
#undef FILE
#pragma push_macro("I_FILE")
#undef I_FILE
#pragma push_macro("I_PRINTER")
#undef I_PRINTER
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("PRINTER")
#undef PRINTER

namespace java {
	namespace awt {

class $export JobAttributes$DestinationType : public ::java::awt::AttributeValue {
	$class(JobAttributes$DestinationType, 0, ::java::awt::AttributeValue)
public:
	JobAttributes$DestinationType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_FILE = 0;
	static const int32_t I_PRINTER = 1;
	static $StringArray* NAMES;
	static ::java::awt::JobAttributes$DestinationType* FILE;
	static ::java::awt::JobAttributes$DestinationType* PRINTER;
};

	} // awt
} // java

#pragma pop_macro("FILE")
#pragma pop_macro("I_FILE")
#pragma pop_macro("I_PRINTER")
#pragma pop_macro("NAMES")
#pragma pop_macro("PRINTER")

#endif // _java_awt_JobAttributes$DestinationType_h_