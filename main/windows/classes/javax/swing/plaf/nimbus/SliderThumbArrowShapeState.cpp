#include <javax/swing/plaf/nimbus/SliderThumbArrowShapeState.h>

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

$MethodInfo _SliderThumbArrowShapeState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SliderThumbArrowShapeState::*)()>(&SliderThumbArrowShapeState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SliderThumbArrowShapeState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.SliderThumbArrowShapeState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_SliderThumbArrowShapeState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$SliderThumbArrowShapeState($Class* clazz) {
	return $of($alloc(SliderThumbArrowShapeState));
}

void SliderThumbArrowShapeState::init$() {
	$State::init$("ArrowShape"_s);
}

bool SliderThumbArrowShapeState::isInState($JComponent* c) {
	$init($Boolean);
	return $equals($nc(c)->getClientProperty("Slider.paintThumbArrowShape"_s), $Boolean::TRUE);
}

SliderThumbArrowShapeState::SliderThumbArrowShapeState() {
}

$Class* SliderThumbArrowShapeState::load$($String* name, bool initialize) {
	$loadClass(SliderThumbArrowShapeState, name, initialize, &_SliderThumbArrowShapeState_ClassInfo_, allocate$SliderThumbArrowShapeState);
	return class$;
}

$Class* SliderThumbArrowShapeState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax