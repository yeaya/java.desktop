#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneWindowFocusedState.h>

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

$MethodInfo _InternalFrameTitlePaneWindowFocusedState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InternalFrameTitlePaneWindowFocusedState::*)()>(&InternalFrameTitlePaneWindowFocusedState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InternalFrameTitlePaneWindowFocusedState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneWindowFocusedState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_InternalFrameTitlePaneWindowFocusedState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$InternalFrameTitlePaneWindowFocusedState($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneWindowFocusedState));
}

void InternalFrameTitlePaneWindowFocusedState::init$() {
	$State::init$("WindowFocused"_s);
}

bool InternalFrameTitlePaneWindowFocusedState::isInState($JComponent* c) {
	return $instanceOf($JInternalFrame, c) && $nc(($cast($JInternalFrame, c)))->isSelected();
}

InternalFrameTitlePaneWindowFocusedState::InternalFrameTitlePaneWindowFocusedState() {
}

$Class* InternalFrameTitlePaneWindowFocusedState::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneWindowFocusedState, name, initialize, &_InternalFrameTitlePaneWindowFocusedState_ClassInfo_, allocate$InternalFrameTitlePaneWindowFocusedState);
	return class$;
}

$Class* InternalFrameTitlePaneWindowFocusedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax