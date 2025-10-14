#ifndef _java_awt_PageAttributes$ColorType_h_
#define _java_awt_PageAttributes$ColorType_h_
//$ class java.awt.PageAttributes$ColorType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("COLOR")
#undef COLOR
#pragma push_macro("I_COLOR")
#undef I_COLOR
#pragma push_macro("I_MONOCHROME")
#undef I_MONOCHROME
#pragma push_macro("MONOCHROME")
#undef MONOCHROME
#pragma push_macro("NAMES")
#undef NAMES

namespace java {
	namespace awt {

class $export PageAttributes$ColorType : public ::java::awt::AttributeValue {
	$class(PageAttributes$ColorType, 0, ::java::awt::AttributeValue)
public:
	PageAttributes$ColorType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_COLOR = 0;
	static const int32_t I_MONOCHROME = 1;
	static $StringArray* NAMES;
	static ::java::awt::PageAttributes$ColorType* COLOR;
	static ::java::awt::PageAttributes$ColorType* MONOCHROME;
};

	} // awt
} // java

#pragma pop_macro("COLOR")
#pragma pop_macro("I_COLOR")
#pragma pop_macro("I_MONOCHROME")
#pragma pop_macro("MONOCHROME")
#pragma pop_macro("NAMES")

#endif // _java_awt_PageAttributes$ColorType_h_