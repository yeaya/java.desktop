#ifndef _java_awt_GraphicsDevice$WindowTranslucency_h_
#define _java_awt_GraphicsDevice$WindowTranslucency_h_
//$ class java.awt.GraphicsDevice$WindowTranslucency
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PERPIXEL_TRANSLUCENT")
#undef PERPIXEL_TRANSLUCENT
#pragma push_macro("PERPIXEL_TRANSPARENT")
#undef PERPIXEL_TRANSPARENT
#pragma push_macro("TRANSLUCENT")
#undef TRANSLUCENT

namespace java {
	namespace awt {

class $import GraphicsDevice$WindowTranslucency : public ::java::lang::Enum {
	$class(GraphicsDevice$WindowTranslucency, 0, ::java::lang::Enum)
public:
	GraphicsDevice$WindowTranslucency();
	static $Array<::java::awt::GraphicsDevice$WindowTranslucency>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::GraphicsDevice$WindowTranslucency* valueOf($String* name);
	static $Array<::java::awt::GraphicsDevice$WindowTranslucency>* values();
	static ::java::awt::GraphicsDevice$WindowTranslucency* PERPIXEL_TRANSPARENT;
	static ::java::awt::GraphicsDevice$WindowTranslucency* TRANSLUCENT;
	static ::java::awt::GraphicsDevice$WindowTranslucency* PERPIXEL_TRANSLUCENT;
	static $Array<::java::awt::GraphicsDevice$WindowTranslucency>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("PERPIXEL_TRANSLUCENT")
#pragma pop_macro("PERPIXEL_TRANSPARENT")
#pragma pop_macro("TRANSLUCENT")

#endif // _java_awt_GraphicsDevice$WindowTranslucency_h_