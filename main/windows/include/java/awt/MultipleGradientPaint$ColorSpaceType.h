#ifndef _java_awt_MultipleGradientPaint$ColorSpaceType_h_
#define _java_awt_MultipleGradientPaint$ColorSpaceType_h_
//$ class java.awt.MultipleGradientPaint$ColorSpaceType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("LINEAR_RGB")
#undef LINEAR_RGB
#pragma push_macro("SRGB")
#undef SRGB

namespace java {
	namespace awt {

class $import MultipleGradientPaint$ColorSpaceType : public ::java::lang::Enum {
	$class(MultipleGradientPaint$ColorSpaceType, 0, ::java::lang::Enum)
public:
	MultipleGradientPaint$ColorSpaceType();
	static $Array<::java::awt::MultipleGradientPaint$ColorSpaceType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::MultipleGradientPaint$ColorSpaceType* valueOf($String* name);
	static $Array<::java::awt::MultipleGradientPaint$ColorSpaceType>* values();
	static ::java::awt::MultipleGradientPaint$ColorSpaceType* SRGB;
	static ::java::awt::MultipleGradientPaint$ColorSpaceType* LINEAR_RGB;
	static $Array<::java::awt::MultipleGradientPaint$ColorSpaceType>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("LINEAR_RGB")
#pragma pop_macro("SRGB")

#endif // _java_awt_MultipleGradientPaint$ColorSpaceType_h_