#ifndef _sun_java2d_SurfaceDataProxy$CountdownTracker_h_
#define _sun_java2d_SurfaceDataProxy$CountdownTracker_h_
//$ class sun.java2d.SurfaceDataProxy$CountdownTracker
//$ extends sun.java2d.StateTracker

#include <sun/java2d/StateTracker.h>

namespace sun {
	namespace java2d {

class SurfaceDataProxy$CountdownTracker : public ::sun::java2d::StateTracker {
	$class(SurfaceDataProxy$CountdownTracker, $NO_CLASS_INIT, ::sun::java2d::StateTracker)
public:
	SurfaceDataProxy$CountdownTracker();
	void init$(int32_t threshold);
	virtual bool isCurrent() override;
	int32_t countdown = 0;
};

	} // java2d
} // sun

#endif // _sun_java2d_SurfaceDataProxy$CountdownTracker_h_