#ifndef _java_awt_PageAttributes$OrientationRequestedType_h_
#define _java_awt_PageAttributes$OrientationRequestedType_h_
//$ class java.awt.PageAttributes$OrientationRequestedType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("I_LANDSCAPE")
#undef I_LANDSCAPE
#pragma push_macro("I_PORTRAIT")
#undef I_PORTRAIT
#pragma push_macro("LANDSCAPE")
#undef LANDSCAPE
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("PORTRAIT")
#undef PORTRAIT

namespace java {
	namespace awt {

class $export PageAttributes$OrientationRequestedType : public ::java::awt::AttributeValue {
	$class(PageAttributes$OrientationRequestedType, 0, ::java::awt::AttributeValue)
public:
	PageAttributes$OrientationRequestedType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_PORTRAIT = 0;
	static const int32_t I_LANDSCAPE = 1;
	static $StringArray* NAMES;
	static ::java::awt::PageAttributes$OrientationRequestedType* PORTRAIT;
	static ::java::awt::PageAttributes$OrientationRequestedType* LANDSCAPE;
};

	} // awt
} // java

#pragma pop_macro("I_LANDSCAPE")
#pragma pop_macro("I_PORTRAIT")
#pragma pop_macro("LANDSCAPE")
#pragma pop_macro("NAMES")
#pragma pop_macro("PORTRAIT")

#endif // _java_awt_PageAttributes$OrientationRequestedType_h_