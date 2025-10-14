#ifndef _java_awt_PageAttributes$OriginType_h_
#define _java_awt_PageAttributes$OriginType_h_
//$ class java.awt.PageAttributes$OriginType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("I_PHYSICAL")
#undef I_PHYSICAL
#pragma push_macro("I_PRINTABLE")
#undef I_PRINTABLE
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("PHYSICAL")
#undef PHYSICAL
#pragma push_macro("PRINTABLE")
#undef PRINTABLE

namespace java {
	namespace awt {

class $export PageAttributes$OriginType : public ::java::awt::AttributeValue {
	$class(PageAttributes$OriginType, 0, ::java::awt::AttributeValue)
public:
	PageAttributes$OriginType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_PHYSICAL = 0;
	static const int32_t I_PRINTABLE = 1;
	static $StringArray* NAMES;
	static ::java::awt::PageAttributes$OriginType* PHYSICAL;
	static ::java::awt::PageAttributes$OriginType* PRINTABLE;
};

	} // awt
} // java

#pragma pop_macro("I_PHYSICAL")
#pragma pop_macro("I_PRINTABLE")
#pragma pop_macro("NAMES")
#pragma pop_macro("PHYSICAL")
#pragma pop_macro("PRINTABLE")

#endif // _java_awt_PageAttributes$OriginType_h_