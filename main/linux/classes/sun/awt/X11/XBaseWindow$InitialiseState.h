#ifndef _sun_awt_X11_XBaseWindow$InitialiseState_h_
#define _sun_awt_X11_XBaseWindow$InitialiseState_h_
//$ class sun.awt.X11.XBaseWindow$InitialiseState
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FAILED_INITIALISATION")
#undef FAILED_INITIALISATION
#pragma push_macro("INITIALISED")
#undef INITIALISED
#pragma push_macro("INITIALISING")
#undef INITIALISING

namespace sun {
	namespace awt {
		namespace X11 {

class XBaseWindow$InitialiseState : public ::java::lang::Enum {
	$class(XBaseWindow$InitialiseState, 0, ::java::lang::Enum)
public:
	XBaseWindow$InitialiseState();
	static $Array<::sun::awt::X11::XBaseWindow$InitialiseState>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::awt::X11::XBaseWindow$InitialiseState* valueOf($String* name);
	static $Array<::sun::awt::X11::XBaseWindow$InitialiseState>* values();
	static ::sun::awt::X11::XBaseWindow$InitialiseState* INITIALISING;
	static ::sun::awt::X11::XBaseWindow$InitialiseState* INITIALISED;
	static ::sun::awt::X11::XBaseWindow$InitialiseState* FAILED_INITIALISATION;
	static $Array<::sun::awt::X11::XBaseWindow$InitialiseState>* $VALUES;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("FAILED_INITIALISATION")
#pragma pop_macro("INITIALISED")
#pragma pop_macro("INITIALISING")

#endif // _sun_awt_X11_XBaseWindow$InitialiseState_h_