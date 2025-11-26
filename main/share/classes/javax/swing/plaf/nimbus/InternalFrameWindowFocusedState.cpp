#include <javax/swing/plaf/nimbus/InternalFrameWindowFocusedState.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _InternalFrameWindowFocusedState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InternalFrameWindowFocusedState::*)()>(&InternalFrameWindowFocusedState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InternalFrameWindowFocusedState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameWindowFocusedState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_InternalFrameWindowFocusedState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$InternalFrameWindowFocusedState($Class* clazz) {
	return $of($alloc(InternalFrameWindowFocusedState));
}

void InternalFrameWindowFocusedState::init$() {
	$State::init$("WindowFocused"_s);
}

bool InternalFrameWindowFocusedState::isInState($JComponent* c) {
	return $instanceOf($JInternalFrame, c) && $nc(($cast($JInternalFrame, c)))->isSelected();
}

InternalFrameWindowFocusedState::InternalFrameWindowFocusedState() {
}

$Class* InternalFrameWindowFocusedState::load$($String* name, bool initialize) {
	$loadClass(InternalFrameWindowFocusedState, name, initialize, &_InternalFrameWindowFocusedState_ClassInfo_, allocate$InternalFrameWindowFocusedState);
	return class$;
}

$Class* InternalFrameWindowFocusedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax