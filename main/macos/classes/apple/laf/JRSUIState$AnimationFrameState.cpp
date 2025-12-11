#include <apple/laf/JRSUIState$AnimationFrameState.h>

#include <apple/laf/JRSUIConstants$Key.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState.h>
#include <jcpp.h>

#undef ANIMATION_FRAME

using $JRSUIConstants$Key = ::apple::laf::JRSUIConstants$Key;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIState$AnimationFrameState_FieldInfo_[] = {
	{"animationFrame", "I", nullptr, $FINAL, $field(JRSUIState$AnimationFrameState, animationFrame)},
	{"derivedAnimationFrame", "I", nullptr, 0, $field(JRSUIState$AnimationFrameState, derivedAnimationFrame)},
	{}
};

$MethodInfo _JRSUIState$AnimationFrameState_MethodInfo_[] = {
	{"<init>", "(JI)V", nullptr, 0, $method(static_cast<void(JRSUIState$AnimationFrameState::*)(int64_t,int32_t)>(&JRSUIState$AnimationFrameState::init$))},
	{"apply", "(Lapple/laf/JRSUIControl;)V", nullptr, $PUBLIC},
	{"createDerivation", "()Lapple/laf/JRSUIState;", "<T:Lapple/laf/JRSUIState;>()TT;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDerivationSame", "()Z", nullptr, 0},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setAnimationFrame", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRSUIState$AnimationFrameState_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIState$AnimationFrameState", "apple.laf.JRSUIState", "AnimationFrameState", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIState$AnimationFrameState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIState$AnimationFrameState",
	"apple.laf.JRSUIState",
	nullptr,
	_JRSUIState$AnimationFrameState_FieldInfo_,
	_JRSUIState$AnimationFrameState_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIState$AnimationFrameState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIState"
};

$Object* allocate$JRSUIState$AnimationFrameState($Class* clazz) {
	return $of($alloc(JRSUIState$AnimationFrameState));
}

void JRSUIState$AnimationFrameState::init$(int64_t encodedState, int32_t animationFrame) {
	$JRSUIState::init$(encodedState);
	this->animationFrame = (this->derivedAnimationFrame = animationFrame);
}

bool JRSUIState$AnimationFrameState::isDerivationSame() {
	return $JRSUIState::isDerivationSame() && (this->animationFrame == this->derivedAnimationFrame);
}

$JRSUIState* JRSUIState$AnimationFrameState::createDerivation() {
	return static_cast<$JRSUIState*>($new(JRSUIState$AnimationFrameState, this->derivedEncodedState, this->derivedAnimationFrame));
}

void JRSUIState$AnimationFrameState::reset() {
	$JRSUIState::reset();
	this->derivedAnimationFrame = this->animationFrame;
}

void JRSUIState$AnimationFrameState::setAnimationFrame(int32_t frame) {
	this->derivedAnimationFrame = frame;
}

void JRSUIState$AnimationFrameState::apply($JRSUIControl* control) {
	$JRSUIState::apply(control);
	$init($JRSUIConstants$Key);
	$nc(control)->set($JRSUIConstants$Key::ANIMATION_FRAME, (double)this->animationFrame);
}

bool JRSUIState$AnimationFrameState::equals(Object$* obj) {
	if (!($instanceOf(JRSUIState$AnimationFrameState, obj))) {
		return false;
	}
	return this->animationFrame == $nc(($cast(JRSUIState$AnimationFrameState, obj)))->animationFrame && $JRSUIState::equals(obj);
}

int32_t JRSUIState$AnimationFrameState::hashCode() {
	return $JRSUIState::hashCode() ^ this->animationFrame;
}

JRSUIState$AnimationFrameState::JRSUIState$AnimationFrameState() {
}

$Class* JRSUIState$AnimationFrameState::load$($String* name, bool initialize) {
	$loadClass(JRSUIState$AnimationFrameState, name, initialize, &_JRSUIState$AnimationFrameState_ClassInfo_, allocate$JRSUIState$AnimationFrameState);
	return class$;
}

$Class* JRSUIState$AnimationFrameState::class$ = nullptr;

	} // laf
} // apple