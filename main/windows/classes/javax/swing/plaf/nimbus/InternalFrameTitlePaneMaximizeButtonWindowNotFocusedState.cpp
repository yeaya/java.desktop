#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState::*)()>(&InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState));
}

void InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState::init$() {
	$State::init$("WindowNotFocused"_s);
}

bool InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState::isInState($JComponent* c) {
	$var($Component, parent, c);
	while ($nc(parent)->getParent() != nullptr) {
		if ($instanceOf($JInternalFrame, parent)) {
			break;
		}
		$assign(parent, parent->getParent());
	}
	if ($instanceOf($JInternalFrame, parent)) {
		return !($nc(($cast($JInternalFrame, parent)))->isSelected());
	}
	return false;
}

InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState::InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState() {
}

$Class* InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState, name, initialize, &_InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState_ClassInfo_, allocate$InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState);
	return class$;
}

$Class* InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax