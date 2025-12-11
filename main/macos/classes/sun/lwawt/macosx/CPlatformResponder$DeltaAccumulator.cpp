#include <sun/lwawt/macosx/CPlatformResponder$DeltaAccumulator.h>

#include <java/lang/Math.h>
#include <sun/lwawt/macosx/CPlatformResponder.h>
#include <sun/lwawt/macosx/NSEvent.h>
#include <jcpp.h>

#undef SCROLL_PHASE_BEGAN
#undef SCROLL_PHASE_ENDED
#undef SCROLL_PHASE_MOMENTUM_BEGAN
#undef SCROLL_PHASE_UNSUPPORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NSEvent = ::sun::lwawt::macosx::NSEvent;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPlatformResponder$DeltaAccumulator_FieldInfo_[] = {
	{"accumulatedDelta", "D", nullptr, 0, $field(CPlatformResponder$DeltaAccumulator, accumulatedDelta)},
	{"accumulate", "Z", nullptr, 0, $field(CPlatformResponder$DeltaAccumulator, accumulate)},
	{}
};

$MethodInfo _CPlatformResponder$DeltaAccumulator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CPlatformResponder$DeltaAccumulator::*)()>(&CPlatformResponder$DeltaAccumulator::init$))},
	{"getRoundedDelta", "(DI)I", nullptr, 0},
	{}
};

$InnerClassInfo _CPlatformResponder$DeltaAccumulator_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformResponder$DeltaAccumulator", "sun.lwawt.macosx.CPlatformResponder", "DeltaAccumulator", $STATIC},
	{}
};

$ClassInfo _CPlatformResponder$DeltaAccumulator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformResponder$DeltaAccumulator",
	"java.lang.Object",
	nullptr,
	_CPlatformResponder$DeltaAccumulator_FieldInfo_,
	_CPlatformResponder$DeltaAccumulator_MethodInfo_,
	nullptr,
	nullptr,
	_CPlatformResponder$DeltaAccumulator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformResponder"
};

$Object* allocate$CPlatformResponder$DeltaAccumulator($Class* clazz) {
	return $of($alloc(CPlatformResponder$DeltaAccumulator));
}

void CPlatformResponder$DeltaAccumulator::init$() {
}

int32_t CPlatformResponder$DeltaAccumulator::getRoundedDelta(double delta, int32_t scrollPhase) {
	int32_t roundDelta = (int32_t)$Math::round(delta);
	if (scrollPhase == $NSEvent::SCROLL_PHASE_UNSUPPORTED) {
		if (roundDelta == 0 && delta != 0) {
			roundDelta = delta > 0 ? 1 : -1;
		}
	} else {
		if (scrollPhase == $NSEvent::SCROLL_PHASE_BEGAN) {
			this->accumulatedDelta = (double)0;
			this->accumulate = true;
		} else if (scrollPhase == $NSEvent::SCROLL_PHASE_MOMENTUM_BEGAN) {
			this->accumulate = true;
		}
		if (this->accumulate) {
			this->accumulatedDelta += delta;
			roundDelta = (int32_t)$Math::round(this->accumulatedDelta);
			this->accumulatedDelta -= roundDelta;
			if (scrollPhase == $NSEvent::SCROLL_PHASE_ENDED) {
				this->accumulate = false;
			}
		}
	}
	return roundDelta;
}

CPlatformResponder$DeltaAccumulator::CPlatformResponder$DeltaAccumulator() {
}

$Class* CPlatformResponder$DeltaAccumulator::load$($String* name, bool initialize) {
	$loadClass(CPlatformResponder$DeltaAccumulator, name, initialize, &_CPlatformResponder$DeltaAccumulator_ClassInfo_, allocate$CPlatformResponder$DeltaAccumulator);
	return class$;
}

$Class* CPlatformResponder$DeltaAccumulator::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun