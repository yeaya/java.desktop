#ifndef _sun_java2d_StateTrackableDelegate$1_h_
#define _sun_java2d_StateTrackableDelegate$1_h_
//$ class sun.java2d.StateTrackableDelegate$1
//$ extends sun.java2d.StateTracker

#include <sun/java2d/StateTracker.h>

namespace sun {
	namespace java2d {
		class StateTrackableDelegate;
	}
}

namespace sun {
	namespace java2d {

class StateTrackableDelegate$1 : public ::sun::java2d::StateTracker {
	$class(StateTrackableDelegate$1, $NO_CLASS_INIT, ::sun::java2d::StateTracker)
public:
	StateTrackableDelegate$1();
	void init$(::sun::java2d::StateTrackableDelegate* this$0);
	virtual bool isCurrent() override;
	::sun::java2d::StateTrackableDelegate* this$0 = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_StateTrackableDelegate$1_h_