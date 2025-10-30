#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneIconifyButtonWindowNotFocusedState.h>

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

$MethodInfo _InternalFrameTitlePaneIconifyButtonWindowNotFocusedState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InternalFrameTitlePaneIconifyButtonWindowNotFocusedState::*)()>(&InternalFrameTitlePaneIconifyButtonWindowNotFocusedState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InternalFrameTitlePaneIconifyButtonWindowNotFocusedState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonWindowNotFocusedState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_InternalFrameTitlePaneIconifyButtonWindowNotFocusedState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$InternalFrameTitlePaneIconifyButtonWindowNotFocusedState($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneIconifyButtonWindowNotFocusedState));
}

void InternalFrameTitlePaneIconifyButtonWindowNotFocusedState::init$() {
	$State::init$("WindowNotFocused"_s);
}

bool InternalFrameTitlePaneIconifyButtonWindowNotFocusedState::isInState($JComponent* c) {
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

InternalFrameTitlePaneIconifyButtonWindowNotFocusedState::InternalFrameTitlePaneIconifyButtonWindowNotFocusedState() {
}

$Class* InternalFrameTitlePaneIconifyButtonWindowNotFocusedState::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneIconifyButtonWindowNotFocusedState, name, initialize, &_InternalFrameTitlePaneIconifyButtonWindowNotFocusedState_ClassInfo_, allocate$InternalFrameTitlePaneIconifyButtonWindowNotFocusedState);
	return class$;
}

$Class* InternalFrameTitlePaneIconifyButtonWindowNotFocusedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax