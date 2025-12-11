#include <apple/laf/JRSUIState$ScrollBarState.h>

#include <apple/laf/JRSUIConstants$Key.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState$ValueState.h>
#include <apple/laf/JRSUIState.h>
#include <jcpp.h>

#undef THUMB_PROPORTION
#undef THUMB_START

using $JRSUIConstants$Key = ::apple::laf::JRSUIConstants$Key;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIState$ValueState = ::apple::laf::JRSUIState$ValueState;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIState$ScrollBarState_FieldInfo_[] = {
	{"thumbProportion", "D", nullptr, $FINAL, $field(JRSUIState$ScrollBarState, thumbProportion)},
	{"derivedThumbProportion", "D", nullptr, 0, $field(JRSUIState$ScrollBarState, derivedThumbProportion)},
	{"thumbStart", "D", nullptr, $FINAL, $field(JRSUIState$ScrollBarState, thumbStart)},
	{"derivedThumbStart", "D", nullptr, 0, $field(JRSUIState$ScrollBarState, derivedThumbStart)},
	{}
};

$MethodInfo _JRSUIState$ScrollBarState_MethodInfo_[] = {
	{"<init>", "(JDDD)V", nullptr, 0, $method(static_cast<void(JRSUIState$ScrollBarState::*)(int64_t,double,double,double)>(&JRSUIState$ScrollBarState::init$))},
	{"apply", "(Lapple/laf/JRSUIControl;)V", nullptr, $PUBLIC},
	{"createDerivation", "()Lapple/laf/JRSUIState;", "<T:Lapple/laf/JRSUIState;>()TT;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDerivationSame", "()Z", nullptr, 0},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setThumbPercent", "(D)V", nullptr, $PUBLIC},
	{"setThumbStart", "(D)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRSUIState$ScrollBarState_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIState$ScrollBarState", "apple.laf.JRSUIState", "ScrollBarState", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIState$ValueState", "apple.laf.JRSUIState", "ValueState", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIState$ScrollBarState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIState$ScrollBarState",
	"apple.laf.JRSUIState$ValueState",
	nullptr,
	_JRSUIState$ScrollBarState_FieldInfo_,
	_JRSUIState$ScrollBarState_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIState$ScrollBarState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIState"
};

$Object* allocate$JRSUIState$ScrollBarState($Class* clazz) {
	return $of($alloc(JRSUIState$ScrollBarState));
}

void JRSUIState$ScrollBarState::init$(int64_t encodedState, double value, double thumbProportion, double thumbStart) {
	$JRSUIState$ValueState::init$(encodedState, value);
	this->thumbProportion = (this->derivedThumbProportion = thumbProportion);
	this->thumbStart = (this->derivedThumbStart = thumbStart);
}

bool JRSUIState$ScrollBarState::isDerivationSame() {
	return $JRSUIState$ValueState::isDerivationSame() && (this->thumbProportion == this->derivedThumbProportion) && (this->thumbStart == this->derivedThumbStart);
}

$JRSUIState* JRSUIState$ScrollBarState::createDerivation() {
	return static_cast<$JRSUIState*>($new(JRSUIState$ScrollBarState, this->derivedEncodedState, this->derivedValue, this->derivedThumbProportion, this->derivedThumbStart));
}

void JRSUIState$ScrollBarState::reset() {
	$JRSUIState$ValueState::reset();
	this->derivedThumbProportion = this->thumbProportion;
	this->derivedThumbStart = this->thumbStart;
}

void JRSUIState$ScrollBarState::setThumbPercent(double thumbPercent) {
	this->derivedThumbProportion = thumbPercent;
}

void JRSUIState$ScrollBarState::setThumbStart(double thumbStart) {
	this->derivedThumbStart = thumbStart;
}

void JRSUIState$ScrollBarState::apply($JRSUIControl* control) {
	$JRSUIState$ValueState::apply(control);
	$init($JRSUIConstants$Key);
	$nc(control)->set($JRSUIConstants$Key::THUMB_PROPORTION, this->thumbProportion);
	control->set($JRSUIConstants$Key::THUMB_START, this->thumbStart);
}

bool JRSUIState$ScrollBarState::equals(Object$* obj) {
	if (!($instanceOf(JRSUIState$ScrollBarState, obj))) {
		return false;
	}
	return (this->thumbProportion == $nc(($cast(JRSUIState$ScrollBarState, obj)))->thumbProportion) && (this->thumbStart == ($cast(JRSUIState$ScrollBarState, obj))->thumbStart) && $JRSUIState$ValueState::equals(obj);
}

int32_t JRSUIState$ScrollBarState::hashCode() {
	int64_t var$0 = $Double::doubleToRawLongBits(this->thumbProportion);
	int64_t bits = var$0 ^ $Double::doubleToRawLongBits(this->thumbStart);
	return ($JRSUIState$ValueState::hashCode() ^ (int32_t)bits) ^ (int32_t)((int64_t)((uint64_t)bits >> 32));
}

JRSUIState$ScrollBarState::JRSUIState$ScrollBarState() {
}

$Class* JRSUIState$ScrollBarState::load$($String* name, bool initialize) {
	$loadClass(JRSUIState$ScrollBarState, name, initialize, &_JRSUIState$ScrollBarState_ClassInfo_, allocate$JRSUIState$ScrollBarState);
	return class$;
}

$Class* JRSUIState$ScrollBarState::class$ = nullptr;

	} // laf
} // apple