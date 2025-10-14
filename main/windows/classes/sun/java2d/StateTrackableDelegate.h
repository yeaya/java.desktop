#ifndef _sun_java2d_StateTrackableDelegate_h_
#define _sun_java2d_StateTrackableDelegate_h_
//$ class sun.java2d.StateTrackableDelegate
//$ extends sun.java2d.StateTrackable

#include <sun/java2d/StateTrackable.h>

#pragma push_macro("IMMUTABLE_DELEGATE")
#undef IMMUTABLE_DELEGATE
#pragma push_macro("UNTRACKABLE_DELEGATE")
#undef UNTRACKABLE_DELEGATE

namespace sun {
	namespace java2d {
		class StateTrackable$State;
		class StateTracker;
	}
}

namespace sun {
	namespace java2d {

class StateTrackableDelegate : public ::sun::java2d::StateTrackable {
	$class(StateTrackableDelegate, 0, ::sun::java2d::StateTrackable)
public:
	StateTrackableDelegate();
	void init$(::sun::java2d::StateTrackable$State* state);
	void addDynamicAgent();
	static ::sun::java2d::StateTrackableDelegate* createInstance(::sun::java2d::StateTrackable$State* state);
	virtual ::sun::java2d::StateTrackable$State* getState() override;
	virtual ::sun::java2d::StateTracker* getStateTracker() override;
	void markDirty();
	void removeDynamicAgent();
	void setImmutable();
	void setUntrackable();
	static ::sun::java2d::StateTrackableDelegate* UNTRACKABLE_DELEGATE;
	static ::sun::java2d::StateTrackableDelegate* IMMUTABLE_DELEGATE;
	::sun::java2d::StateTrackable$State* theState = nullptr;
	::sun::java2d::StateTracker* theTracker = nullptr;
	int32_t numDynamicAgents = 0;
};

	} // java2d
} // sun

#pragma pop_macro("IMMUTABLE_DELEGATE")
#pragma pop_macro("UNTRACKABLE_DELEGATE")

#endif // _sun_java2d_StateTrackableDelegate_h_