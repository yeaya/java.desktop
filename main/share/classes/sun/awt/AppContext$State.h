#ifndef _sun_awt_AppContext$State_h_
#define _sun_awt_AppContext$State_h_
//$ class sun.awt.AppContext$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BEING_DISPOSED")
#undef BEING_DISPOSED
#pragma push_macro("DISPOSED")
#undef DISPOSED
#pragma push_macro("VALID")
#undef VALID

namespace sun {
	namespace awt {

class AppContext$State : public ::java::lang::Enum {
	$class(AppContext$State, 0, ::java::lang::Enum)
public:
	AppContext$State();
	static $Array<::sun::awt::AppContext$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::awt::AppContext$State* valueOf($String* name);
	static $Array<::sun::awt::AppContext$State>* values();
	static ::sun::awt::AppContext$State* VALID;
	static ::sun::awt::AppContext$State* BEING_DISPOSED;
	static ::sun::awt::AppContext$State* DISPOSED;
	static $Array<::sun::awt::AppContext$State>* $VALUES;
};

	} // awt
} // sun

#pragma pop_macro("BEING_DISPOSED")
#pragma pop_macro("DISPOSED")
#pragma pop_macro("VALID")

#endif // _sun_awt_AppContext$State_h_