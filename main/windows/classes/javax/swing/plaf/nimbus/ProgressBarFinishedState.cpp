#include <javax/swing/plaf/nimbus/ProgressBarFinishedState.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _ProgressBarFinishedState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProgressBarFinishedState::*)()>(&ProgressBarFinishedState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ProgressBarFinishedState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.ProgressBarFinishedState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_ProgressBarFinishedState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$ProgressBarFinishedState($Class* clazz) {
	return $of($alloc(ProgressBarFinishedState));
}

void ProgressBarFinishedState::init$() {
	$State::init$("Finished"_s);
}

bool ProgressBarFinishedState::isInState($JComponent* c) {
	return $instanceOf($JProgressBar, c) && $nc(($cast($JProgressBar, c)))->getPercentComplete() == 1.0;
}

ProgressBarFinishedState::ProgressBarFinishedState() {
}

$Class* ProgressBarFinishedState::load$($String* name, bool initialize) {
	$loadClass(ProgressBarFinishedState, name, initialize, &_ProgressBarFinishedState_ClassInfo_, allocate$ProgressBarFinishedState);
	return class$;
}

$Class* ProgressBarFinishedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax