#include <apple/laf/JRSUIState.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIControl.h>
#include <jcpp.h>

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIState_FieldInfo_[] = {
	{"encodedState", "J", nullptr, $FINAL, $field(JRSUIState, encodedState)},
	{"derivedEncodedState", "J", nullptr, 0, $field(JRSUIState, derivedEncodedState)},
	{"prototype", "Lapple/laf/JRSUIState;", nullptr, $STATIC, $staticField(JRSUIState, prototype)},
	{}
};

$MethodInfo _JRSUIState_MethodInfo_[] = {
	{"<init>", "(Lapple/laf/JRSUIConstants$Widget;)V", nullptr, 0, $method(static_cast<void(JRSUIState::*)($JRSUIConstants$Widget*)>(&JRSUIState::init$))},
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(JRSUIState::*)(int64_t)>(&JRSUIState::init$))},
	{"apply", "(Lapple/laf/JRSUIControl;)V", nullptr, $PUBLIC},
	{"createDerivation", "()Lapple/laf/JRSUIState;", "<T:Lapple/laf/JRSUIState;>()TT;", $PUBLIC},
	{"derive", "()Lapple/laf/JRSUIState;", "<T:Lapple/laf/JRSUIState;>()TT;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getInstance", "()Lapple/laf/JRSUIState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JRSUIState*(*)()>(&JRSUIState::getInstance))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"is", "(Lapple/laf/JRSUIConstants$Property;)Z", nullptr, $PUBLIC},
	{"isDerivationSame", "()Z", nullptr, 0},
	{"reset", "()V", nullptr, $PUBLIC},
	{"set", "(Lapple/laf/JRSUIConstants$Property;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRSUIState_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIState$ScrollBarState", "apple.laf.JRSUIState", "ScrollBarState", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIState$TitleBarHeightState", "apple.laf.JRSUIState", "TitleBarHeightState", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIState$ValueState", "apple.laf.JRSUIState", "ValueState", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIState$AnimationFrameState", "apple.laf.JRSUIState", "AnimationFrameState", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIState",
	"java.lang.Object",
	nullptr,
	_JRSUIState_FieldInfo_,
	_JRSUIState_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIState_InnerClassesInfo_,
	nullptr,
	nullptr,
	"apple.laf.JRSUIState$ScrollBarState,apple.laf.JRSUIState$TitleBarHeightState,apple.laf.JRSUIState$ValueState,apple.laf.JRSUIState$AnimationFrameState"
};

$Object* allocate$JRSUIState($Class* clazz) {
	return $of($alloc(JRSUIState));
}

JRSUIState* JRSUIState::prototype = nullptr;

JRSUIState* JRSUIState::getInstance() {
	$init(JRSUIState);
	return $nc(JRSUIState::prototype)->derive();
}

void JRSUIState::init$($JRSUIConstants$Widget* widget) {
	JRSUIState::init$($nc(widget)->apply(0));
}

void JRSUIState::init$(int64_t encodedState) {
	this->encodedState = (this->derivedEncodedState = encodedState);
}

bool JRSUIState::isDerivationSame() {
	return this->encodedState == this->derivedEncodedState;
}

JRSUIState* JRSUIState::derive() {
	if (isDerivationSame()) {
		return this;
	}
	$var(JRSUIState, derivation, createDerivation());
	return derivation;
}

JRSUIState* JRSUIState::createDerivation() {
	return $new(JRSUIState, this->derivedEncodedState);
}

void JRSUIState::reset() {
	this->derivedEncodedState = this->encodedState;
}

void JRSUIState::set($JRSUIConstants$Property* property) {
	this->derivedEncodedState = $nc(property)->apply(this->derivedEncodedState);
}

void JRSUIState::apply($JRSUIControl* control) {
	$nc(control)->setEncodedState(this->encodedState);
}

bool JRSUIState::equals(Object$* obj) {
	if (!($instanceOf(JRSUIState, obj))) {
		return false;
	}
	return this->encodedState == $nc(($cast(JRSUIState, obj)))->encodedState && $of($of(this)->getClass())->equals($nc($of(obj))->getClass());
}

bool JRSUIState::is($JRSUIConstants$Property* property) {
	return (int8_t)($sr((int64_t)(this->derivedEncodedState & (uint64_t)$nc($nc(property)->encoding)->mask), $nc(property->encoding)->shift)) == property->ordinal;
}

int32_t JRSUIState::hashCode() {
	return (int32_t)(this->encodedState ^ ((int64_t)((uint64_t)this->encodedState >> 32))) ^ $of($of(this)->getClass())->hashCode();
}

void clinit$JRSUIState($Class* class$) {
	$assignStatic(JRSUIState::prototype, $new(JRSUIState, (int64_t)0));
}

JRSUIState::JRSUIState() {
}

$Class* JRSUIState::load$($String* name, bool initialize) {
	$loadClass(JRSUIState, name, initialize, &_JRSUIState_ClassInfo_, clinit$JRSUIState, allocate$JRSUIState);
	return class$;
}

$Class* JRSUIState::class$ = nullptr;

	} // laf
} // apple