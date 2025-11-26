#include <javax/swing/plaf/nimbus/SliderTrackArrowShapeState.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _SliderTrackArrowShapeState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SliderTrackArrowShapeState::*)()>(&SliderTrackArrowShapeState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SliderTrackArrowShapeState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.SliderTrackArrowShapeState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_SliderTrackArrowShapeState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$SliderTrackArrowShapeState($Class* clazz) {
	return $of($alloc(SliderTrackArrowShapeState));
}

void SliderTrackArrowShapeState::init$() {
	$State::init$("ArrowShape"_s);
}

bool SliderTrackArrowShapeState::isInState($JComponent* c) {
	$init($Boolean);
	return $equals($nc(c)->getClientProperty("Slider.paintThumbArrowShape"_s), $Boolean::TRUE);
}

SliderTrackArrowShapeState::SliderTrackArrowShapeState() {
}

$Class* SliderTrackArrowShapeState::load$($String* name, bool initialize) {
	$loadClass(SliderTrackArrowShapeState, name, initialize, &_SliderTrackArrowShapeState_ClassInfo_, allocate$SliderTrackArrowShapeState);
	return class$;
}

$Class* SliderTrackArrowShapeState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax