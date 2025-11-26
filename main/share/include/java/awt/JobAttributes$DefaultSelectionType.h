#ifndef _java_awt_JobAttributes$DefaultSelectionType_h_
#define _java_awt_JobAttributes$DefaultSelectionType_h_
//$ class java.awt.JobAttributes$DefaultSelectionType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("I_ALL")
#undef I_ALL
#pragma push_macro("I_RANGE")
#undef I_RANGE
#pragma push_macro("I_SELECTION")
#undef I_SELECTION
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("RANGE")
#undef RANGE
#pragma push_macro("SELECTION")
#undef SELECTION

namespace java {
	namespace awt {

class $import JobAttributes$DefaultSelectionType : public ::java::awt::AttributeValue {
	$class(JobAttributes$DefaultSelectionType, 0, ::java::awt::AttributeValue)
public:
	JobAttributes$DefaultSelectionType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_ALL = 0;
	static const int32_t I_RANGE = 1;
	static const int32_t I_SELECTION = 2;
	static $StringArray* NAMES;
	static ::java::awt::JobAttributes$DefaultSelectionType* ALL;
	static ::java::awt::JobAttributes$DefaultSelectionType* RANGE;
	static ::java::awt::JobAttributes$DefaultSelectionType* SELECTION;
};

	} // awt
} // java

#pragma pop_macro("ALL")
#pragma pop_macro("I_ALL")
#pragma pop_macro("I_RANGE")
#pragma pop_macro("I_SELECTION")
#pragma pop_macro("NAMES")
#pragma pop_macro("RANGE")
#pragma pop_macro("SELECTION")

#endif // _java_awt_JobAttributes$DefaultSelectionType_h_