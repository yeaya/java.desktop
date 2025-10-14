#ifndef _java_awt_Window$Type_h_
#define _java_awt_Window$Type_h_
//$ class java.awt.Window$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("POPUP")
#undef POPUP
#pragma push_macro("UTILITY")
#undef UTILITY

namespace java {
	namespace awt {

class $import Window$Type : public ::java::lang::Enum {
	$class(Window$Type, 0, ::java::lang::Enum)
public:
	Window$Type();
	static $Array<::java::awt::Window$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::Window$Type* valueOf($String* name);
	static $Array<::java::awt::Window$Type>* values();
	static ::java::awt::Window$Type* NORMAL;
	static ::java::awt::Window$Type* UTILITY;
	static ::java::awt::Window$Type* POPUP;
	static $Array<::java::awt::Window$Type>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("NORMAL")
#pragma pop_macro("POPUP")
#pragma pop_macro("UTILITY")

#endif // _java_awt_Window$Type_h_