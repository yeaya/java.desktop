#include <apple/laf/JRSUIConstants$State.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef ACTIVE
#undef DISABLED
#undef DRAG
#undef INACTIVE
#undef MASK
#undef PRESSED
#undef PULSED
#undef ROLLOVER
#undef SHIFT
#undef SIZE

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$State_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, MASK)},
	{"state", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$State, state)},
	{"_active", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, _active)},
	{"ACTIVE", "Lapple/laf/JRSUIConstants$State;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$State, ACTIVE)},
	{"_inactive", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, _inactive)},
	{"INACTIVE", "Lapple/laf/JRSUIConstants$State;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$State, INACTIVE)},
	{"_disabled", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, _disabled)},
	{"DISABLED", "Lapple/laf/JRSUIConstants$State;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$State, DISABLED)},
	{"_pressed", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, _pressed)},
	{"PRESSED", "Lapple/laf/JRSUIConstants$State;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$State, PRESSED)},
	{"_pulsed", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, _pulsed)},
	{"PULSED", "Lapple/laf/JRSUIConstants$State;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$State, PULSED)},
	{"_rollover", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, _rollover)},
	{"ROLLOVER", "Lapple/laf/JRSUIConstants$State;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$State, ROLLOVER)},
	{"_drag", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$State, _drag)},
	{"DRAG", "Lapple/laf/JRSUIConstants$State;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$State, DRAG)},
	{}
};

$MethodInfo _JRSUIConstants$State_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$State::*)(int8_t)>(&JRSUIConstants$State::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$State_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$State", "apple.laf.JRSUIConstants", "State", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$State_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$State",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$State_FieldInfo_,
	_JRSUIConstants$State_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$State($Class* clazz) {
	return $of($alloc(JRSUIConstants$State));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$State::state = nullptr;
JRSUIConstants$State* JRSUIConstants$State::ACTIVE = nullptr;
JRSUIConstants$State* JRSUIConstants$State::INACTIVE = nullptr;
JRSUIConstants$State* JRSUIConstants$State::DISABLED = nullptr;
JRSUIConstants$State* JRSUIConstants$State::PRESSED = nullptr;
JRSUIConstants$State* JRSUIConstants$State::PULSED = nullptr;
JRSUIConstants$State* JRSUIConstants$State::ROLLOVER = nullptr;
JRSUIConstants$State* JRSUIConstants$State::DRAG = nullptr;

void JRSUIConstants$State::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$State::state, value);
}

$String* JRSUIConstants$State::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$State::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$State($Class* class$) {
	$assignStatic(JRSUIConstants$State::state, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$State::MASK, JRSUIConstants$State::SHIFT));
	$assignStatic(JRSUIConstants$State::ACTIVE, $new(JRSUIConstants$State, JRSUIConstants$State::_active));
	$assignStatic(JRSUIConstants$State::INACTIVE, $new(JRSUIConstants$State, JRSUIConstants$State::_inactive));
	$assignStatic(JRSUIConstants$State::DISABLED, $new(JRSUIConstants$State, JRSUIConstants$State::_disabled));
	$assignStatic(JRSUIConstants$State::PRESSED, $new(JRSUIConstants$State, JRSUIConstants$State::_pressed));
	$assignStatic(JRSUIConstants$State::PULSED, $new(JRSUIConstants$State, JRSUIConstants$State::_pulsed));
	$assignStatic(JRSUIConstants$State::ROLLOVER, $new(JRSUIConstants$State, JRSUIConstants$State::_rollover));
	$assignStatic(JRSUIConstants$State::DRAG, $new(JRSUIConstants$State, JRSUIConstants$State::_drag));
}

JRSUIConstants$State::JRSUIConstants$State() {
}

$Class* JRSUIConstants$State::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$State, name, initialize, &_JRSUIConstants$State_ClassInfo_, clinit$JRSUIConstants$State, allocate$JRSUIConstants$State);
	return class$;
}

$Class* JRSUIConstants$State::class$ = nullptr;

	} // laf
} // apple