#ifndef _java_awt_Component$BaselineResizeBehavior_h_
#define _java_awt_Component$BaselineResizeBehavior_h_
//$ class java.awt.Component$BaselineResizeBehavior
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CENTER_OFFSET")
#undef CENTER_OFFSET
#pragma push_macro("CONSTANT_ASCENT")
#undef CONSTANT_ASCENT
#pragma push_macro("CONSTANT_DESCENT")
#undef CONSTANT_DESCENT
#pragma push_macro("OTHER")
#undef OTHER

namespace java {
	namespace awt {

class $import Component$BaselineResizeBehavior : public ::java::lang::Enum {
	$class(Component$BaselineResizeBehavior, 0, ::java::lang::Enum)
public:
	Component$BaselineResizeBehavior();
	static $Array<::java::awt::Component$BaselineResizeBehavior>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::Component$BaselineResizeBehavior* valueOf($String* name);
	static $Array<::java::awt::Component$BaselineResizeBehavior>* values();
	static ::java::awt::Component$BaselineResizeBehavior* CONSTANT_ASCENT;
	static ::java::awt::Component$BaselineResizeBehavior* CONSTANT_DESCENT;
	static ::java::awt::Component$BaselineResizeBehavior* CENTER_OFFSET;
	static ::java::awt::Component$BaselineResizeBehavior* OTHER;
	static $Array<::java::awt::Component$BaselineResizeBehavior>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("CENTER_OFFSET")
#pragma pop_macro("CONSTANT_ASCENT")
#pragma pop_macro("CONSTANT_DESCENT")
#pragma pop_macro("OTHER")

#endif // _java_awt_Component$BaselineResizeBehavior_h_