#ifndef _sun_java2d_MacOSFlags$PropertyState_h_
#define _sun_java2d_MacOSFlags$PropertyState_h_
//$ class sun.java2d.MacOSFlags$PropertyState
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DISABLED")
#undef DISABLED
#pragma push_macro("ENABLED")
#undef ENABLED
#pragma push_macro("UNSPECIFIED")
#undef UNSPECIFIED

namespace sun {
	namespace java2d {

class MacOSFlags$PropertyState : public ::java::lang::Enum {
	$class(MacOSFlags$PropertyState, 0, ::java::lang::Enum)
public:
	MacOSFlags$PropertyState();
	static $Array<::sun::java2d::MacOSFlags$PropertyState>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::java2d::MacOSFlags$PropertyState* valueOf($String* name);
	static $Array<::sun::java2d::MacOSFlags$PropertyState>* values();
	static ::sun::java2d::MacOSFlags$PropertyState* ENABLED;
	static ::sun::java2d::MacOSFlags$PropertyState* DISABLED;
	static ::sun::java2d::MacOSFlags$PropertyState* UNSPECIFIED;
	static $Array<::sun::java2d::MacOSFlags$PropertyState>* $VALUES;
};

	} // java2d
} // sun

#pragma pop_macro("DISABLED")
#pragma pop_macro("ENABLED")
#pragma pop_macro("UNSPECIFIED")

#endif // _sun_java2d_MacOSFlags$PropertyState_h_