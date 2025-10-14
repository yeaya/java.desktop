#include <javax/swing/plaf/nimbus/SliderArrowShapeState.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _SliderArrowShapeState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SliderArrowShapeState::*)()>(&SliderArrowShapeState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SliderArrowShapeState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.SliderArrowShapeState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_SliderArrowShapeState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$SliderArrowShapeState($Class* clazz) {
	return $of($alloc(SliderArrowShapeState));
}

void SliderArrowShapeState::init$() {
	$State::init$("ArrowShape"_s);
}

bool SliderArrowShapeState::isInState($JComponent* c) {
	$init($Boolean);
	return $equals($nc(c)->getClientProperty("Slider.paintThumbArrowShape"_s), $Boolean::TRUE);
}

SliderArrowShapeState::SliderArrowShapeState() {
}

$Class* SliderArrowShapeState::load$($String* name, bool initialize) {
	$loadClass(SliderArrowShapeState, name, initialize, &_SliderArrowShapeState_ClassInfo_, allocate$SliderArrowShapeState);
	return class$;
}

$Class* SliderArrowShapeState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax