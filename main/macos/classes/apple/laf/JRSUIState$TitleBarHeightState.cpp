#include <apple/laf/JRSUIState$TitleBarHeightState.h>

#include <apple/laf/JRSUIConstants$Key.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState$ValueState.h>
#include <apple/laf/JRSUIState.h>
#include <jcpp.h>

#undef WINDOW_TITLE_BAR_HEIGHT

using $JRSUIConstants$Key = ::apple::laf::JRSUIConstants$Key;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIState$ValueState = ::apple::laf::JRSUIState$ValueState;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$MethodInfo _JRSUIState$TitleBarHeightState_MethodInfo_[] = {
	{"<init>", "(JD)V", nullptr, 0, $method(static_cast<void(JRSUIState$TitleBarHeightState::*)(int64_t,double)>(&JRSUIState$TitleBarHeightState::init$))},
	{"apply", "(Lapple/laf/JRSUIControl;)V", nullptr, $PUBLIC},
	{"createDerivation", "()Lapple/laf/JRSUIState;", "<T:Lapple/laf/JRSUIState;>()TT;", $PUBLIC},
	{}
};

$InnerClassInfo _JRSUIState$TitleBarHeightState_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIState$TitleBarHeightState", "apple.laf.JRSUIState", "TitleBarHeightState", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIState$ValueState", "apple.laf.JRSUIState", "ValueState", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIState$TitleBarHeightState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIState$TitleBarHeightState",
	"apple.laf.JRSUIState$ValueState",
	nullptr,
	nullptr,
	_JRSUIState$TitleBarHeightState_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIState$TitleBarHeightState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIState"
};

$Object* allocate$JRSUIState$TitleBarHeightState($Class* clazz) {
	return $of($alloc(JRSUIState$TitleBarHeightState));
}

void JRSUIState$TitleBarHeightState::init$(int64_t encodedState, double value) {
	$JRSUIState$ValueState::init$(encodedState, value);
}

$JRSUIState* JRSUIState$TitleBarHeightState::createDerivation() {
	return static_cast<$JRSUIState*>($new(JRSUIState$TitleBarHeightState, this->derivedEncodedState, this->derivedValue));
}

void JRSUIState$TitleBarHeightState::apply($JRSUIControl* control) {
	$JRSUIState$ValueState::apply(control);
	$init($JRSUIConstants$Key);
	$nc(control)->set($JRSUIConstants$Key::WINDOW_TITLE_BAR_HEIGHT, this->value);
}

JRSUIState$TitleBarHeightState::JRSUIState$TitleBarHeightState() {
}

$Class* JRSUIState$TitleBarHeightState::load$($String* name, bool initialize) {
	$loadClass(JRSUIState$TitleBarHeightState, name, initialize, &_JRSUIState$TitleBarHeightState_ClassInfo_, allocate$JRSUIState$TitleBarHeightState);
	return class$;
}

$Class* JRSUIState$TitleBarHeightState::class$ = nullptr;

	} // laf
} // apple