#ifndef _java_awt_JobAttributes$DialogType_h_
#define _java_awt_JobAttributes$DialogType_h_
//$ class java.awt.JobAttributes$DialogType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("COMMON")
#undef COMMON
#pragma push_macro("I_COMMON")
#undef I_COMMON
#pragma push_macro("I_NATIVE")
#undef I_NATIVE
#pragma push_macro("I_NONE")
#undef I_NONE
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("NATIVE")
#undef NATIVE
#pragma push_macro("NONE")
#undef NONE

namespace java {
	namespace awt {

class $import JobAttributes$DialogType : public ::java::awt::AttributeValue {
	$class(JobAttributes$DialogType, 0, ::java::awt::AttributeValue)
public:
	JobAttributes$DialogType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_COMMON = 0;
	static const int32_t I_NATIVE = 1;
	static const int32_t I_NONE = 2;
	static $StringArray* NAMES;
	static ::java::awt::JobAttributes$DialogType* COMMON;
	static ::java::awt::JobAttributes$DialogType* NATIVE;
	static ::java::awt::JobAttributes$DialogType* NONE;
};

	} // awt
} // java

#pragma pop_macro("COMMON")
#pragma pop_macro("I_COMMON")
#pragma pop_macro("I_NATIVE")
#pragma pop_macro("I_NONE")
#pragma pop_macro("NAMES")
#pragma pop_macro("NATIVE")
#pragma pop_macro("NONE")

#endif // _java_awt_JobAttributes$DialogType_h_