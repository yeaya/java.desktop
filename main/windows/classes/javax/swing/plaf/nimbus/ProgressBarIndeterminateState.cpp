#include <javax/swing/plaf/nimbus/ProgressBarIndeterminateState.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _ProgressBarIndeterminateState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProgressBarIndeterminateState::*)()>(&ProgressBarIndeterminateState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ProgressBarIndeterminateState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.ProgressBarIndeterminateState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_ProgressBarIndeterminateState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$ProgressBarIndeterminateState($Class* clazz) {
	return $of($alloc(ProgressBarIndeterminateState));
}

void ProgressBarIndeterminateState::init$() {
	$State::init$("Indeterminate"_s);
}

bool ProgressBarIndeterminateState::isInState($JComponent* c) {
	return $instanceOf($JProgressBar, c) && $nc(($cast($JProgressBar, c)))->isIndeterminate();
}

ProgressBarIndeterminateState::ProgressBarIndeterminateState() {
}

$Class* ProgressBarIndeterminateState::load$($String* name, bool initialize) {
	$loadClass(ProgressBarIndeterminateState, name, initialize, &_ProgressBarIndeterminateState_ClassInfo_, allocate$ProgressBarIndeterminateState);
	return class$;
}

$Class* ProgressBarIndeterminateState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax