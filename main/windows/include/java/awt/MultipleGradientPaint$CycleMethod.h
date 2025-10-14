#ifndef _java_awt_MultipleGradientPaint$CycleMethod_h_
#define _java_awt_MultipleGradientPaint$CycleMethod_h_
//$ class java.awt.MultipleGradientPaint$CycleMethod
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NO_CYCLE")
#undef NO_CYCLE
#pragma push_macro("REFLECT")
#undef REFLECT
#pragma push_macro("REPEAT")
#undef REPEAT

namespace java {
	namespace awt {

class $import MultipleGradientPaint$CycleMethod : public ::java::lang::Enum {
	$class(MultipleGradientPaint$CycleMethod, 0, ::java::lang::Enum)
public:
	MultipleGradientPaint$CycleMethod();
	static $Array<::java::awt::MultipleGradientPaint$CycleMethod>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::MultipleGradientPaint$CycleMethod* valueOf($String* name);
	static $Array<::java::awt::MultipleGradientPaint$CycleMethod>* values();
	static ::java::awt::MultipleGradientPaint$CycleMethod* NO_CYCLE;
	static ::java::awt::MultipleGradientPaint$CycleMethod* REFLECT;
	static ::java::awt::MultipleGradientPaint$CycleMethod* REPEAT;
	static $Array<::java::awt::MultipleGradientPaint$CycleMethod>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("NO_CYCLE")
#pragma pop_macro("REFLECT")
#pragma pop_macro("REPEAT")

#endif // _java_awt_MultipleGradientPaint$CycleMethod_h_