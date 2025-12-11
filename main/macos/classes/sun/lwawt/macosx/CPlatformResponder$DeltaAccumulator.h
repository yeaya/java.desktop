#ifndef _sun_lwawt_macosx_CPlatformResponder$DeltaAccumulator_h_
#define _sun_lwawt_macosx_CPlatformResponder$DeltaAccumulator_h_
//$ class sun.lwawt.macosx.CPlatformResponder$DeltaAccumulator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformResponder$DeltaAccumulator : public ::java::lang::Object {
	$class(CPlatformResponder$DeltaAccumulator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CPlatformResponder$DeltaAccumulator();
	void init$();
	virtual int32_t getRoundedDelta(double delta, int32_t scrollPhase);
	double accumulatedDelta = 0.0;
	bool accumulate = false;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformResponder$DeltaAccumulator_h_