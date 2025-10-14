#ifndef _java_awt_BufferCapabilities$FlipContents_h_
#define _java_awt_BufferCapabilities$FlipContents_h_
//$ class java.awt.BufferCapabilities$FlipContents
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("BACKGROUND")
#undef BACKGROUND
#pragma push_macro("COPIED")
#undef COPIED
#pragma push_macro("I_BACKGROUND")
#undef I_BACKGROUND
#pragma push_macro("I_COPIED")
#undef I_COPIED
#pragma push_macro("I_PRIOR")
#undef I_PRIOR
#pragma push_macro("I_UNDEFINED")
#undef I_UNDEFINED
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("PRIOR")
#undef PRIOR
#pragma push_macro("UNDEFINED")
#undef UNDEFINED

namespace java {
	namespace awt {

class $export BufferCapabilities$FlipContents : public ::java::awt::AttributeValue {
	$class(BufferCapabilities$FlipContents, 0, ::java::awt::AttributeValue)
public:
	BufferCapabilities$FlipContents();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static int32_t I_UNDEFINED;
	static int32_t I_BACKGROUND;
	static int32_t I_PRIOR;
	static int32_t I_COPIED;
	static $StringArray* NAMES;
	static ::java::awt::BufferCapabilities$FlipContents* UNDEFINED;
	static ::java::awt::BufferCapabilities$FlipContents* BACKGROUND;
	static ::java::awt::BufferCapabilities$FlipContents* PRIOR;
	static ::java::awt::BufferCapabilities$FlipContents* COPIED;
};

	} // awt
} // java

#pragma pop_macro("BACKGROUND")
#pragma pop_macro("COPIED")
#pragma pop_macro("I_BACKGROUND")
#pragma pop_macro("I_COPIED")
#pragma pop_macro("I_PRIOR")
#pragma pop_macro("I_UNDEFINED")
#pragma pop_macro("NAMES")
#pragma pop_macro("PRIOR")
#pragma pop_macro("UNDEFINED")

#endif // _java_awt_BufferCapabilities$FlipContents_h_