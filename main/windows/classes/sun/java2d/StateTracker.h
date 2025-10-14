#ifndef _sun_java2d_StateTracker_h_
#define _sun_java2d_StateTracker_h_
//$ interface sun.java2d.StateTracker
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ALWAYS_CURRENT")
#undef ALWAYS_CURRENT
#pragma push_macro("NEVER_CURRENT")
#undef NEVER_CURRENT

namespace sun {
	namespace java2d {

class StateTracker : public ::java::lang::Object {
	$interface(StateTracker, 0, ::java::lang::Object)
public:
	virtual bool isCurrent() {return false;}
	static ::sun::java2d::StateTracker* ALWAYS_CURRENT;
	static ::sun::java2d::StateTracker* NEVER_CURRENT;
};

	} // java2d
} // sun

#pragma pop_macro("ALWAYS_CURRENT")
#pragma pop_macro("NEVER_CURRENT")

#endif // _sun_java2d_StateTracker_h_