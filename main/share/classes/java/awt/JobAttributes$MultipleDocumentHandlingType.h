#ifndef _java_awt_JobAttributes$MultipleDocumentHandlingType_h_
#define _java_awt_JobAttributes$MultipleDocumentHandlingType_h_
//$ class java.awt.JobAttributes$MultipleDocumentHandlingType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("I_SEPARATE_DOCUMENTS_COLLATED_COPIES")
#undef I_SEPARATE_DOCUMENTS_COLLATED_COPIES
#pragma push_macro("I_SEPARATE_DOCUMENTS_UNCOLLATED_COPIES")
#undef I_SEPARATE_DOCUMENTS_UNCOLLATED_COPIES
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("SEPARATE_DOCUMENTS_COLLATED_COPIES")
#undef SEPARATE_DOCUMENTS_COLLATED_COPIES
#pragma push_macro("SEPARATE_DOCUMENTS_UNCOLLATED_COPIES")
#undef SEPARATE_DOCUMENTS_UNCOLLATED_COPIES

namespace java {
	namespace awt {

class $export JobAttributes$MultipleDocumentHandlingType : public ::java::awt::AttributeValue {
	$class(JobAttributes$MultipleDocumentHandlingType, 0, ::java::awt::AttributeValue)
public:
	JobAttributes$MultipleDocumentHandlingType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_SEPARATE_DOCUMENTS_COLLATED_COPIES = 0;
	static const int32_t I_SEPARATE_DOCUMENTS_UNCOLLATED_COPIES = 1;
	static $StringArray* NAMES;
	static ::java::awt::JobAttributes$MultipleDocumentHandlingType* SEPARATE_DOCUMENTS_COLLATED_COPIES;
	static ::java::awt::JobAttributes$MultipleDocumentHandlingType* SEPARATE_DOCUMENTS_UNCOLLATED_COPIES;
};

	} // awt
} // java

#pragma pop_macro("I_SEPARATE_DOCUMENTS_COLLATED_COPIES")
#pragma pop_macro("I_SEPARATE_DOCUMENTS_UNCOLLATED_COPIES")
#pragma pop_macro("NAMES")
#pragma pop_macro("SEPARATE_DOCUMENTS_COLLATED_COPIES")
#pragma pop_macro("SEPARATE_DOCUMENTS_UNCOLLATED_COPIES")

#endif // _java_awt_JobAttributes$MultipleDocumentHandlingType_h_