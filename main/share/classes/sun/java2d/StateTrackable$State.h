#ifndef _sun_java2d_StateTrackable$State_h_
#define _sun_java2d_StateTrackable$State_h_
//$ class sun.java2d.StateTrackable$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DYNAMIC")
#undef DYNAMIC
#pragma push_macro("IMMUTABLE")
#undef IMMUTABLE
#pragma push_macro("STABLE")
#undef STABLE
#pragma push_macro("UNTRACKABLE")
#undef UNTRACKABLE

namespace sun {
	namespace java2d {

class StateTrackable$State : public ::java::lang::Enum {
	$class(StateTrackable$State, 0, ::java::lang::Enum)
public:
	StateTrackable$State();
	static $Array<::sun::java2d::StateTrackable$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::java2d::StateTrackable$State* valueOf($String* name);
	static $Array<::sun::java2d::StateTrackable$State>* values();
	static ::sun::java2d::StateTrackable$State* IMMUTABLE;
	static ::sun::java2d::StateTrackable$State* STABLE;
	static ::sun::java2d::StateTrackable$State* DYNAMIC;
	static ::sun::java2d::StateTrackable$State* UNTRACKABLE;
	static $Array<::sun::java2d::StateTrackable$State>* $VALUES;
};

	} // java2d
} // sun

#pragma pop_macro("DYNAMIC")
#pragma pop_macro("IMMUTABLE")
#pragma pop_macro("STABLE")
#pragma pop_macro("UNTRACKABLE")

#endif // _sun_java2d_StateTrackable$State_h_