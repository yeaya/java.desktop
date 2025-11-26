#ifndef _java_awt_PageAttributes$PrintQualityType_h_
#define _java_awt_PageAttributes$PrintQualityType_h_
//$ class java.awt.PageAttributes$PrintQualityType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("DRAFT")
#undef DRAFT
#pragma push_macro("HIGH")
#undef HIGH
#pragma push_macro("I_DRAFT")
#undef I_DRAFT
#pragma push_macro("I_HIGH")
#undef I_HIGH
#pragma push_macro("I_NORMAL")
#undef I_NORMAL
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("NORMAL")
#undef NORMAL

namespace java {
	namespace awt {

class $import PageAttributes$PrintQualityType : public ::java::awt::AttributeValue {
	$class(PageAttributes$PrintQualityType, 0, ::java::awt::AttributeValue)
public:
	PageAttributes$PrintQualityType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_HIGH = 0;
	static const int32_t I_NORMAL = 1;
	static const int32_t I_DRAFT = 2;
	static $StringArray* NAMES;
	static ::java::awt::PageAttributes$PrintQualityType* HIGH;
	static ::java::awt::PageAttributes$PrintQualityType* NORMAL;
	static ::java::awt::PageAttributes$PrintQualityType* DRAFT;
};

	} // awt
} // java

#pragma pop_macro("DRAFT")
#pragma pop_macro("HIGH")
#pragma pop_macro("I_DRAFT")
#pragma pop_macro("I_HIGH")
#pragma pop_macro("I_NORMAL")
#pragma pop_macro("NAMES")
#pragma pop_macro("NORMAL")

#endif // _java_awt_PageAttributes$PrintQualityType_h_