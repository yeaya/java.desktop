#ifndef _java_awt_JobAttributes$SidesType_h_
#define _java_awt_JobAttributes$SidesType_h_
//$ class java.awt.JobAttributes$SidesType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("I_ONE_SIDED")
#undef I_ONE_SIDED
#pragma push_macro("I_TWO_SIDED_LONG_EDGE")
#undef I_TWO_SIDED_LONG_EDGE
#pragma push_macro("I_TWO_SIDED_SHORT_EDGE")
#undef I_TWO_SIDED_SHORT_EDGE
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("ONE_SIDED")
#undef ONE_SIDED
#pragma push_macro("TWO_SIDED_LONG_EDGE")
#undef TWO_SIDED_LONG_EDGE
#pragma push_macro("TWO_SIDED_SHORT_EDGE")
#undef TWO_SIDED_SHORT_EDGE

namespace java {
	namespace awt {

class $import JobAttributes$SidesType : public ::java::awt::AttributeValue {
	$class(JobAttributes$SidesType, 0, ::java::awt::AttributeValue)
public:
	JobAttributes$SidesType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_ONE_SIDED = 0;
	static const int32_t I_TWO_SIDED_LONG_EDGE = 1;
	static const int32_t I_TWO_SIDED_SHORT_EDGE = 2;
	static $StringArray* NAMES;
	static ::java::awt::JobAttributes$SidesType* ONE_SIDED;
	static ::java::awt::JobAttributes$SidesType* TWO_SIDED_LONG_EDGE;
	static ::java::awt::JobAttributes$SidesType* TWO_SIDED_SHORT_EDGE;
};

	} // awt
} // java

#pragma pop_macro("I_ONE_SIDED")
#pragma pop_macro("I_TWO_SIDED_LONG_EDGE")
#pragma pop_macro("I_TWO_SIDED_SHORT_EDGE")
#pragma pop_macro("NAMES")
#pragma pop_macro("ONE_SIDED")
#pragma pop_macro("TWO_SIDED_LONG_EDGE")
#pragma pop_macro("TWO_SIDED_SHORT_EDGE")

#endif // _java_awt_JobAttributes$SidesType_h_