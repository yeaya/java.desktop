#ifndef _sun_java2d_StateTrackable_h_
#define _sun_java2d_StateTrackable_h_
//$ interface sun.java2d.StateTrackable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		class StateTrackable$State;
		class StateTracker;
	}
}

namespace sun {
	namespace java2d {

class StateTrackable : public ::java::lang::Object {
	$interface(StateTrackable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::java2d::StateTrackable$State* getState() {return nullptr;}
	virtual ::sun::java2d::StateTracker* getStateTracker() {return nullptr;}
};

	} // java2d
} // sun

#endif // _sun_java2d_StateTrackable_h_